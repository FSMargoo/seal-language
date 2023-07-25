#include "sealASTVisitor.h"

sealASTVisitor::sealASTVisitor() {  }
std::any sealASTVisitor::visitStart(sealParser::StartContext* context) {
	auto generatorCode = std::string();
	auto statementContext = context->statementBody();
	auto fromContext = std::string();
	for (auto& statement : statementContext) {
		if (statement->moduleStatement() != nullptr) {
			visit(statement->moduleStatement());

			continue;
		}
		if (statement->fromStatement() != nullptr) {
			auto moduleName = std::string();
			fromContext += visitNode(statement->fromStatement()) + moduleName + "\n";

			for (auto& id : statement->fromStatement()->Id()) {
				moduleName.append(id->getText());
				moduleName.push_back('.');
			}
			moduleName.pop_back();

			usedLib.push_back(moduleName);

			typeMapping.emplace(moduleName, runtimeTypeInfo::_module);

			continue;
		}

		auto ptr = ptrSum<antlr4::ParserRuleContext*>(statement->cppLiteral(),
			statement->lambdaStatement(),
			statement->fromStatement(), statement->functionDefine(), statement->classDefine(), statement->moduleStatement(),
			statement->enumStatement(), statement->variableDefine(), statement->doWhileStatement(), statement->interfaceStatement(), statement->deleteStatement(), statement->nullAccessStatement());
		generatorCode += visitNode(ptr);
		if (statement->variableDefine() != nullptr || statement->enumStatement() != nullptr) {
			generatorCode += ";";
		}
		generatorCode += "\n";
	}

	if (status.inModule) {
		auto moduleHead = "\n// Module <" + status.moduleName + ">\nclass " + status.moduleName + " {\n";
		generatorCode = moduleHead + generatorCode + "\n};";
	}

	return fromContext + generatorCode;
} 
std::any sealASTVisitor::visitFalseType(sealParser::FalseTypeContext* context) {
	return sealFalseConstant;
}
std::any sealASTVisitor::visitTrueType(sealParser::TrueTypeContext* context) {
	return sealTrueConstant;
}
std::any sealASTVisitor::visitModuleStatement(sealParser::ModuleStatementContext* context) {
	auto idVector = context->Id();
	auto moduleStructure = std::string();
	for (auto& id : idVector) {
		moduleStructure += id->getText() + "_";
	}

	status.moduleName = moduleStructure;
	status.inModule = true;

	return nullptr;
}
std::any sealASTVisitor::visitLogicOr(sealParser::LogicOrContext* context) {
	auto expression = context->expr();
	return parseLeftRight(expression, "||");
}
std::any sealASTVisitor::visitLogicAnd(sealParser::LogicAndContext* context) {
	auto expression = context->expr();
	return parseLeftRight(expression, "&&");
}
std::string sealASTVisitor::parseLeftRight(std::vector<sealParser::ExprContext*>& vector, const std::string& operation) {
	auto left = visitNode(vector[0]);
	auto right = visitNode(vector[1]);

	return left + operation + right;
}
std::any sealASTVisitor::visitStatementBody(sealParser::StatementBodyContext* statement) {
	auto ptr = ptrSum<antlr4::ParserRuleContext*>(statement->cppLiteral(), (size_t)statement->variableDefine(), (size_t)statement->lambdaStatement(),
		statement->fromStatement(), statement->functionDefine(), statement->classDefine(),
		statement->functionDefine(), statement->classDefine(), statement->moduleStatement(), statement->enumStatement(),
		statement->breakStatement(), statement->continueStatement(), statement->whereStatement(), statement->interfaceStatement(),  statement->deleteStatement(), statement->nullAccessStatement(),
		statement->interfaceStatement());

	auto prefixBackup = localPrefix;
	auto runtimeBackup = typeMapping;

	auto result = visitNode(ptr);

	if (statement->variableDefine() != nullptr) {
		localPrefix = prefixBackup;
		typeMapping = runtimeBackup;
	}

	return result;
}
std::any sealASTVisitor::visitGetRef(sealParser::GetRefContext* context) {
	return "&" + visitNode(context->expr());
}
std::any sealASTVisitor::visitVariableDefine(sealParser::VariableDefineContext* context) {
	auto prefixed = std::string();
	if (context->decorator() != nullptr) {
		if (visitNode(context->decorator()) == "export") {
			prefixed = "public: ";
		}
		else if (status.inModule) {
			prefixed = "private: ";
		}
	}

	auto type = std::string("auto");
	auto backfixed = std::string();
	auto name = context->Id()->getText();
	auto arrayString = std::string("");
	auto initStatement = std::string();
	if (context->type() != nullptr) {
		type = visitNode(context->type());
		if (context->type()->arrayType() != nullptr) {
			arrayString = type;
			type = context->type()->arrayType()->Id()->getText();
		}
	}
	if (context->Let() != nullptr) {
		prefixed = "const ";
	}
	if (context->Ref() != nullptr) {
		backfixed = "&";
	}
	if (context->pointerDefine() != nullptr) {
		backfixed = visitNode(context->pointerDefine());
	}
	if (context->expr() != nullptr) {
		initStatement = " = " + visitNode(context->expr());
	}

	insertMapping(name, runtimeTypeInfo::_variable);

	return prefixed + type + backfixed + " " + name + arrayString + initStatement;
}
std::any sealASTVisitor::visitCpp(sealParser::CppContext* context) {
	return visitNode(context->cppLiteral());
}
std::any sealASTVisitor::visitConstantString(sealParser::ConstantStringContext* context) {
	return context->String()->getText();
}
std::any sealASTVisitor::visitCallVariable(sealParser::CallVariableContext* context) {
	auto expression = context->expr();
	auto left = visitNode(expression[0]);
	if (typeMapping.find(left) != typeMapping.end()) {
		if (typeMapping[left] == runtimeTypeInfo::_module) {
			auto moduleExpand = std::string();
			for (auto& characeter : left) {
				if (characeter != '.') {
					moduleExpand.push_back(characeter);
				}
				else {
					moduleExpand.push_back('_');
				}
			}

			moduleExpand.append("_::");

			return moduleExpand + visitNode(expression[1]);
		}
	}

	return parseLeftRight(expression, ".");
}
std::any sealASTVisitor::visitCallPointer(sealParser::CallPointerContext* context) {
	auto expression = context->expr();
	return parseLeftRight(expression, "->");
}
std::any sealASTVisitor::visitVisitor(sealParser::VisitorContext* context) {
	auto expression = context->expr();
	return parseLeftRight(expression, "::");
}
std::any sealASTVisitor::visitIdExpression(sealParser::IdExpressionContext* context) {
	return context->Id()->getText();
}
std::any sealASTVisitor::visitMulOrDivOrMod(sealParser::MulOrDivOrModContext* context) {
	auto operation = std::string("/");
	auto expression = context->expr();
	if (context->Multiply() != nullptr) {
		operation = "*";
	}
	if (context->Mod() != nullptr) {
		operation = "%";
	}

	return parseLeftRight(expression, operation);
}
std::any sealASTVisitor::visitConstantFloat(sealParser::ConstantFloatContext* context) {
	return context->Float()->getText() + "f";
}
std::any sealASTVisitor::visitBackSelfOperation(sealParser::BackSelfOperationContext* context) {
	auto operation = std::string("++");
	if (context->DoubleAdd() == nullptr) {
		operation = "--";
	}

	return operation + visitNode(context->expr());
}
std::any sealASTVisitor::visitTemplate(sealParser::TemplateContext* context) {
	auto expression = visitNode(context->expr());
	auto _template = visitNode(context->templateCallStatement());

	return expression + _template;
}
std::any sealASTVisitor::visitConstantInt(sealParser::ConstantIntContext* context) {
	return context->Int()->getText();
}
std::any sealASTVisitor::visitAddOrMinus(sealParser::AddOrMinusContext* context) {
	auto operation = std::string("+");
	auto expression = context->expr();
	if (context->Plus() == nullptr) {
		operation = "-";
	}

	return parseLeftRight(expression, operation);
}
std::any sealASTVisitor::visitConstantHexNumber(sealParser::ConstantHexNumberContext* context) {
	return context->HexNumber()->getText();
}
std::any sealASTVisitor::visitFunctionCall(sealParser::FunctionCallContext* context) {
	auto templateStatement = std::string("");
	auto expression = context->expr();
	auto agrument = std::string();
	auto functionName = visitNode(expression[0]);
	if (context->templateCallStatement() != nullptr) {
		templateStatement = visitNode(context->templateCallStatement());
	}
	expression.erase(expression.begin());
	for (auto& expr : expression) {
		agrument.append(visitNode(expr) + ",");
	}
	if (!agrument.empty()) { agrument.pop_back(); }

	return functionName + templateStatement + "(" + agrument + ")";
}
std::any sealASTVisitor::visitAssgin(sealParser::AssginContext* context) {
	auto text = ptrSum<antlr4::tree::TerminalNode*>(context->Equal(), context->AddEqual(), context->MinusEqual(), context->DivEqual(), context->EMol(), context->NotEqual())->getText();
	auto expression = context->expr();
	return parseLeftRight(expression, text);
}
std::any sealASTVisitor::visitParen(sealParser::ParenContext* context) {
	return context->LParen()->getText() + visitNode(context->expr()) + context->RParen()->getText();
}
std::any sealASTVisitor::visitLogicCompare(sealParser::LogicCompareContext* context) {
	auto expression = context->expr();
	return parseLeftRight(expression, "==");
}
std::any sealASTVisitor::visitPreSelfOperation(sealParser::PreSelfOperationContext* context) {
	auto operation = std::string("++");
	if (context->DoubleAdd() == nullptr) {
		operation = "--";
	}

	return visitNode(context->expr()) + operation;
}
std::any sealASTVisitor::visitTemplateCallStatement(sealParser::TemplateCallStatementContext* context) {
	auto callList = std::string();
	auto typeList = context->type();
	for (auto& string : typeList) {
		callList += visitNode(string) + " ,";
	}
	if (!typeList.empty()) {
		callList.pop_back();
	}

	return "<" + callList + ">";
}
std::any sealASTVisitor::visitTemplateDefineStatement(sealParser::TemplateDefineStatementContext* context) {
	auto initList = std::string();
	auto typeList = context->Id();
	for (auto& string : typeList) {
		initList += "class " + string->getText() + " ,";
	}
	if (!typeList.empty()) {
		initList.pop_back();
	}

	return "template <" + initList + ">";
}
std::any sealASTVisitor::visitInitStatement(sealParser::InitStatementContext* context) {
	auto statement = std::string();
	if (context->expr() != nullptr) {
		statement = visitNode(context->expr());
	}
	else {
		statement = visitNode(context->variableDefine());
	}

	return statement;
}
std::any sealASTVisitor::visitReturnStatement(sealParser::ReturnStatementContext* context) {
	return "return " + visitNode(context->expr()) + ";";
}
std::any sealASTVisitor::visitElifStatement(sealParser::ElifStatementContext* context) {
	auto statement = visitNode(context->expr());
	auto codeBlock = visitNode(context->functionBlock());
	return "else if (" + statement + ") \n" + codeBlock;
}
std::any sealASTVisitor::visitElseStatement(sealParser::ElseStatementContext* context) {
	auto codeBlock = visitNode(context->functionBlock());
	return "else \n" + codeBlock;
}
std::any sealASTVisitor::visitIfStatement(sealParser::IfStatementContext* context) {
	auto statement = visitNode(context->expr());
	auto codeBlock = visitNode(context->functionBlock());
	auto ifCode = "if (" + statement + ") \n" + codeBlock;
	auto elif = context->elifStatement();
	for (auto& expr : elif) {
		ifCode += "\n" + visitNode(expr) + "\n";
	}

	return ifCode + visitNode(context->elseStatement());
}
std::any sealASTVisitor::visitEnumEntry(sealParser::EnumEntryContext* context) {
	auto id = context->Id();
	auto enumContext = std::string();
	for (auto& enumId : id) {
		enumContext.append(enumId->getText() + " ,");
	}
	if (!id.empty()) {
		enumContext.pop_back();
	}

	return enumContext;
}
std::any sealASTVisitor::visitEnumStatement(sealParser::EnumStatementContext* context) {
	insertMapping(context->Id()->getText(), runtimeTypeInfo::_enum);
	return "enum class " + context->Id()->getText() + " {\n" + visitNode(context->enumEntry()) + "\n};";
}
std::any sealASTVisitor::visitWhileStatement(sealParser::WhileStatementContext* context) {
	return "while (" + visitNode(context->expr()) + ")\n" + visitNode(context->functionBlock());
}
std::any sealASTVisitor::visitRangeWhileStatement(sealParser::RangeWhileStatementContext* context) {
	auto expression = visitNode(context->expr());
	auto expandCode = "auto " + context->Id()->getText() + " = " + expression + ";\n";
	expandCode += "while (" + expression + ".Judge(" + context->Id()->getText() + "))\n" + visitNode(context->functionBlock());

	return expandCode;
}
std::any sealASTVisitor::visitForStatement(sealParser::ForStatementContext* context) {
	auto forCode = "for (" + visitNode(context->initStatement()) + ";" + visitNode(context->expr(0)) + ";" + visitNode(context->expr(1)) + ")" + visitNode(context->functionBlock());

	return forCode;
}
std::any sealASTVisitor::visitForeachStatement(sealParser::ForeachStatementContext* context) {
	auto expression = visitNode(context->expr());
	if (expression == "$[Range Expression]$") {
		auto rangeExpression = (sealParser::RangeExpressionContext*)context->expr();
		return "for (auto " + context->Id()->getText() + " = " + visitNode(rangeExpression->expr()[0]) + "; "
			+ context->Id()->getText() + " < " + visitNode(rangeExpression->expr()[1]) + "; " +
			std::string("++") + context->Id()->getText() + ")\n" + visitNode(context->functionBlock());

	}
	if (expression == "$[Range Equal Expression]$") {
		auto rangeExpression = (sealParser::RangeIncludeContext*)context->expr();
		return "for (auto " + context->Id()->getText() + " = " + visitNode(rangeExpression->expr()[0]) + "; "
			+ context->Id()->getText() + " <= " + visitNode(rangeExpression->expr()[1]) +"; " +
			std::string("++") + context->Id()->getText() + ")\n" + visitNode(context->functionBlock());

	}
	return "for (auto& " + context->Id()->getText() + ":" + visitNode(context->expr()) + ")\n" + visitNode(context->functionBlock());
}
std::any sealASTVisitor::visitFromStatement(sealParser::FromStatementContext* context) {
	auto id = context->Id();
	auto file = std::string();

	for (auto& part : id) {
		file += part->getText() + "_";
	}

	file += ".hpp";

	return "#include \"" + file + "\"";
}
std::any sealASTVisitor::visitLambdaMulLine(sealParser::LambdaMulLineContext* context) {
	return visitNode(context->functionBlock());
}
std::any sealASTVisitor::visitLambdaSingleLine(sealParser::LambdaSingleLineContext* context) {
	return visitNode(context->functionBlockEntry());
}
std::any sealASTVisitor::visitLambdaBlock(sealParser::LambdaBlockContext* context) {
	auto lambdaContext = std::string("()[&]");
	if (context->type() != nullptr) {
		lambdaContext += " -> " + visitNode(context->type());
	}
	if (context->lambdaMulLine() != nullptr) {
		lambdaContext += visitNode(context->lambdaMulLine());
	}
	else {
		lambdaContext += visitNode(context->lambdaSingleLine());
	}

	return lambdaContext;
}
std::any sealASTVisitor::visitStatement(sealParser::StatementContext* context) {
	return visitNode(ptrSum<antlr4::tree::ParseTree*>(
		context->lambdaStatement(), context->ifStatement(), context->whileStatement(),
		context->forStatement(), context->rangeWhileStatement(), context->foreachStatement(),
		context->cppgptStatement(), context->returnStatement(), context->enumStatement(),
		context->breakStatement(), context->continueStatement(), context->whereStatement(),
		context->deleteStatement(), context->nullAccessStatement(),
		context->interfaceStatement()
	));
}
std::any sealASTVisitor::visitDeleteStatement(sealParser::DeleteStatementContext* context) {
	return "delete " + visitNode(context->expr()) + ";";
}
std::any sealASTVisitor::visitNullAccessStatement(sealParser::NullAccessStatementContext* context) {
	// if (jd != nullptr) {
	//	todo
	// }
	auto judgement = visitNode(context->expr());
	return "if (" + judgement + " != nullptr)" + visitNode(context->functionBlock());
}
std::any sealASTVisitor::visitFunctionReturnType(sealParser::FunctionReturnTypeContext* context) {
	auto type = std::string("auto");
	auto prefixed = std::string();
	auto backfixed = std::string();
	if (context->type() != nullptr) {
		type = visitNode(context->type());
	}
	if (context->Let() != nullptr) {
		prefixed = "const ";
	}
	if (context->Ref() != nullptr) {
		backfixed = "&";
	}
	if (context->Ptr() != nullptr) {
		backfixed = "*";
	}

	return prefixed + type + backfixed;
}
std::any sealASTVisitor::visitNewContext(sealParser::NewContextContext* context) {
	return "new " + visitNode(context->expr());
}
std::any sealASTVisitor::visitFunctionDefine(sealParser::FunctionDefineContext* context) {
	auto prefixed = std::string();
	auto type = std::string("auto ");
	if (context->decorator() != nullptr) {
		if (status.inModule) {
			if (visitNode(context->decorator()) == "export") {
				prefixed = "public: static ";
			}
			else {
				prefixed = "private: ";
			}
		}

		auto decorator = visitNode(context->decorator());
		if (decorator == "static") {
			prefixed += "static ";
		}
		if (decorator == "virtual") {
			prefixed += " virtual ";
		}
	}
	if (context->functionTemplate() != nullptr) {
		prefixed += "\n" + visitNode(context->functionTemplate()) + "\n";
	}
	if (context->functionReturnType() != nullptr) {
		type = visitNode(context->functionReturnType()) + " ";
	}

	if (!context->Override) {
		if (context->functionBlock() != nullptr) {
			return prefixed + type + context->Id()->getText() + "(" + visitNode(context->agrumentList()) + ")\n" + visitNode(context->functionBlock());
		}
		else {
			if (!context->PureVirtual) {
				return prefixed + type + context->Id()->getText() + "(" + visitNode(context->agrumentList()) + ");\n";
			}
			else {
				return prefixed + type + context->Id()->getText() + "(" + visitNode(context->agrumentList()) + ") = 0;\n";
			}
		}
	}
	else {
		if (context->functionBlock() != nullptr) {
			return prefixed + type + context->Id()->getText() + "(" + visitNode(context->agrumentList()) + ") override\n" + visitNode(context->functionBlock());
		}
		else {
			return prefixed + type + context->Id()->getText() + "(" + visitNode(context->agrumentList()) + ") override;\n";
		}
	}
}
std::any sealASTVisitor::visitLogicOpeartion(sealParser::LogicOpeartionContext* context) {
	auto expression = context->expr();
	auto operation = ptrSum<antlr4::tree::TerminalNode*>(context->Leq(), context->Geq(), context->LTemplate(), context->RTemplate())->getText();

	return parseLeftRight(expression, operation);
}
std::any sealASTVisitor::visitClassInherfType(sealParser::ClassInherfTypeContext* context) {
	if (context->InherfPublic() != nullptr) {
		return "public";
	}

	return "private";
}
std::any sealASTVisitor::visitClassInherf(sealParser::ClassInherfContext* context) {
	auto inherfList = std::string();
	for (auto& instance : context->classInherfEntry()) {
		inherfList.append(visitNode(instance));
		inherfList.append(" ,");
	}
	if (!context->classInherfEntry().empty()) {
		inherfList.pop_back();
	}
	return " : " + inherfList + "\n";
}
std::any sealASTVisitor::visitRangeInclude(sealParser::RangeIncludeContext* context) {
	return "$[Range Equal Expression]$";
}
std::any sealASTVisitor::visitRangeExpression(sealParser::RangeExpressionContext* context) {
	return "$[Range Expression]$";
}
std::any sealASTVisitor::visitDefine(sealParser::DefineContext* context) {
	insertMapping(context->Id()->getText(), runtimeTypeInfo::_class);
	auto prefixed = std::string();
	if (context->decorator() != nullptr) {
		if (visitNode(context->decorator()) == "export") {
			prefixed = "public: ";
		}
		else if (status.inModule) {
			prefixed = "private: ";
		}
	}
	auto classCode = visitNode(context->templateDefineStatement()) + "\nclass " + context->Id()->getText() +
		visitNode(context->classInherf()) + visitNode(context->classBlock());

	return prefixed + classCode;
}
std::any sealASTVisitor::visitPreDefine(sealParser::PreDefineContext* context) {
	auto prefixed = std::string();
	if (status.inModule) {
		prefixed = "private: ";
	}
	insertMapping(context->Id()->getText(), runtimeTypeInfo::_class);
	return prefixed + "class " + context->Id()->getText() + ";";
}
std::any sealASTVisitor::visitAgrumentList(sealParser::AgrumentListContext* context) {
	auto variableDefine = context->variableDefine();
	auto defineCode = std::string();
	for (auto& define : variableDefine) {
		defineCode.append(visitNode(define) + " ,");
	}
	if (!variableDefine.empty()) {
		defineCode.pop_back();
	}

	return defineCode;
}
std::any sealASTVisitor::visitFunctionBlockEntry(sealParser::FunctionBlockEntryContext* context) {
	auto code = visitNode(ptrSum<antlr4::tree::ParseTree*>(context->statement(), context->expr(), context->variableDefine()));
	if (context->End() != nullptr) {
		return code + ";";
	}

	return code;
}
std::any sealASTVisitor::visitFunctionBlock(sealParser::FunctionBlockContext* context) {
	auto block = context->functionBlockEntry();
	auto code = std::string();
	for (auto& line : block) {
		code += visitNode(line) + "\n";
	}

	return "{\n" + code + "}";
}
std::any sealASTVisitor::visitDecorator(sealParser::DecoratorContext* context) {
	return context->Id()[0]->getText();
}
std::any sealASTVisitor::visitClassBlock(sealParser::ClassBlockContext* context) {
	auto entry = context->classBlockEntry();
	auto code = std::string();
	code += "{\n";
	for (auto& line : entry) {
		code += visitNode(line) + "\n";
	}
	code += "\n};";

	return code;
}
std::any sealASTVisitor::visitCppgptStatement(sealParser::CppgptStatementContext* context) {
	return "// 无产阶级不需要资本阶级的 AI 来辅助生产工作！\n/* 不就是 " + context->String()->getText() + "吗？ 自己做不行吗？*/";
}
std::any sealASTVisitor::visitClassBlockEntry(sealParser::ClassBlockEntryContext* context) {
	auto prefixed = std::string();
	bool virtualed = false;
	if (context->Public() != nullptr) {
		prefixed += "public: ";
	}
	if (context->Private() != nullptr) {
		prefixed += "private: ";
	}
	if (context->Protected() != nullptr) {
		prefixed += "protected: ";
	}
	if (prefixed.empty()) {
		prefixed = "public: ";
	}
	if (context->Virtual() != nullptr) {
		prefixed += "virtual ";
		virtualed = true;
	}
	if (context->Static() != nullptr) {
		prefixed += "static ";
		virtualed = true;
	}
	if (context->variableDefine() != nullptr) {
		if (virtualed) {
			errorMessage.push_back("Compiler Error : The @virtual property should not be applied on the member variable");

			return "[COMPILER ERROR HAPPENED AT HERE]";
		}

		return prefixed + visitNode(context->variableDefine()) + ";";
	}
	else if (context->classBuildFunction() != nullptr) {
		auto code = prefixed + visitNode(context->classBuildFunction());

		return code;
	}
	else if (context->classDesotryFunction() != nullptr) {
		auto code = prefixed + visitNode(context->classDesotryFunction());

		return code;
	}
	else {
		if (context->Override() != nullptr) {
			context->functionDefine()->Override = true;
		}
		auto code = prefixed + visitNode(context->functionDefine());

		return code;
	}
}
std::any sealASTVisitor::visitSingleType(sealParser::SingleTypeContext* context) {
	return context->Id()->getText() + visitNode(context->templateCallStatement());
}
std::any sealASTVisitor::visitInitListObject(sealParser::InitListObjectContext* context) {
	return "." + context->Id()->getText() + "=" + visitNode(context->expr());
}
std::any sealASTVisitor::visitInitList(sealParser::InitListContext* context) {
	auto expression = context->expr();
	auto code = std::string();
	for (auto& expr : expression) {
		code.append(visitNode(expr) + ",");
	}
	if (!expression.empty()) {
		code.pop_back();
	}

	return "{" + code + "}";
}
std::any sealASTVisitor::visitEqualList(sealParser::EqualListContext* context) {
	auto expression = context->initListObject();
	auto code = std::string();
	for (auto& expr : expression) {
		code.append(visitNode(expr) + ",");
	}
	if (!expression.empty()) {
		code.pop_back();
	}

	return "{" + code + "}";
}
std::any sealASTVisitor::visitNormalType(sealParser::NormalTypeContext* context) {
	auto expression = context->singleType();
	auto code = std::string();
	for (auto& expr : expression) {
		code.append(visitNode(expr) + ".");
	}
	if (!expression.empty()) {
		code.pop_back();
	}

	return code;
}
std::any sealASTVisitor::visitType(sealParser::TypeContext* context) {
	auto typeSum = std::string();
	auto rawSum = std::string();
	auto operation = std::string();
	if (context->normalType() != nullptr) {
		auto typeList = context->normalType()->singleType();
		for (auto& type : typeList) {
			auto name = visitNode(type);
			typeSum.append(name);

			auto JudgeString = rawSum;
			if (!JudgeString.empty()) {
				JudgeString.pop_back();
			}
			if (typeMapping.find(JudgeString) != typeMapping.end()) {
				auto type = typeMapping[JudgeString];
				if (type == runtimeTypeInfo::_module) {
					auto moduleName = std::string();

					for (auto& id : JudgeString) {
						if (id != '.') {
							moduleName.push_back(id);
						}
						else {
							moduleName.push_back('_');
						}
					}
					moduleName.append("_::");

					typeSum = moduleName + name;
					operation = "";

					continue;
				}
			}

			if (typeMapping.find(name) != typeMapping.end()) {
				auto type = typeMapping[name];
				if (type == runtimeTypeInfo::_class || type == runtimeTypeInfo::_module) {
					operation = "::";
				}
				else {
					operation = ".";
				}
			}

			rawSum += name + ".";
		}
		if (typeList.size() > 1) {
			typeSum.erase(typeSum.size() - operation.size(), typeSum.size());
		}

		return typeSum;
	}
	else {
		return visitNode(context->arrayType());
	}
}
std::any sealASTVisitor::visitCppLiteral(sealParser::CppLiteralContext* context) {
	auto raw = context->CppRaw()->getText();
	auto start = raw.find("cbegin") + strlen("cbegin");
	auto count = raw.find("cend") - start;

	return raw.substr(start, count);
}
std::any sealASTVisitor::visitBreakStatement(sealParser::BreakStatementContext* context) {
	return "break;";
}
std::any sealASTVisitor::visitContinueStatement(sealParser::ContinueStatementContext* context) {
	return "continue;";
}
std::any sealASTVisitor::visitLambdaOrFunction(sealParser::LambdaOrFunctionContext* context) {
	if (context->functionBlock() != nullptr) {
		return visit(context->functionBlock());
	}
	else {
		if (context->lambdaBlock()->lambdaMulLine() != nullptr) {
			return visit(context->lambdaBlock()->lambdaMulLine()->functionBlock());
		}
		else {
			return "{ " + visitNode(context->lambdaBlock()->lambdaSingleLine()->functionBlockEntry()) + " }";
		}
	}
}
std::any sealASTVisitor::visitClassBuildFunction(sealParser::ClassBuildFunctionContext* context) {
	if (context->classInitList() != nullptr) {
		return context->Id()->getText() + "(" + visitNode(context->agrumentList()) + ") : " + visitNode(context->classInitList()) + "\n" + visitNode(context->lambdaOrFunction());
	}
	else {
		return context->Id()->getText() + "(" + visitNode(context->agrumentList()) + ")" + visitNode(context->lambdaOrFunction());
	}
}
std::any sealASTVisitor::visitClassDesotryFunction(sealParser::ClassDesotryFunctionContext* context) {
	return "~" + context->Id()->getText() + "()" + visitNode(context->lambdaOrFunction());
}
std::any sealASTVisitor::visitWhereStatement(sealParser::WhereStatementContext* context) {
	return "switch (" + visitNode(context->expr()) + ")\n{" + visitNode(context->whereBlock()) + "}";
}
std::any sealASTVisitor::visitWhereCase(sealParser::WhereCaseContext* context) {
	return "case " + visitNode(context->expr()) + ":" + visitNode(context->lambdaOrFunction());
}
std::any sealASTVisitor::visitWhereBlock(sealParser::WhereBlockContext* context) {
	auto code = std::string();
	for (auto& caseStatement : context->whereCase()) {
		code.append(visitNode(caseStatement) + "\n");
	}

	return code;
}
std::any sealASTVisitor::visitFunctionTemplate(sealParser::FunctionTemplateContext* context) {
	return visitNode(context->templateDefineStatement());
}
std::any sealASTVisitor::visitGetOrigin(sealParser::GetOriginContext* context) {
	return "*" + visitNode(context->expr());
}
std::any sealASTVisitor::visitArrayType(sealParser::ArrayTypeContext* context){
	auto expression = context->expr();
	auto expressionString = std::string();
	for (auto& expr : expression) {
		expressionString.append('[' + visitNode(expr) + ']');
	}

	return expressionString;
}
std::any sealASTVisitor::visitArrayCall(sealParser::ArrayCallContext* context) {
	return visitNode(context->expr()[0]) + "[" + visitNode(context->expr()[1]) + "]";
}
std::any sealASTVisitor::visitInterfaceBlock(sealParser::InterfaceBlockContext* context) {
	auto functionBlock = std::string();
	for (auto& function : context->functionDefine()) {
		if (function->End() != nullptr) {
			function->PureVirtual = true;
			functionBlock.append("public: virtual " + visitNode(function));
		}
		else {
			functionBlock.append("public: virtual " + visitNode(function));
		}
	}

	return "{\n" + functionBlock + "\n}";
}
std::any sealASTVisitor::visitClassInitInstance(sealParser::ClassInitInstanceContext* context) {
	auto code = context->Id()->getText() + "(";
	for (auto& expr : context->expr()) {
		code.append(visitNode(expr));
		code.append(",");
	}
	if (!context->expr().empty()) {
		code.pop_back();
	}

	return code + ")";
}
std::any sealASTVisitor::visitClassInitList(sealParser::ClassInitListContext* context) {
	auto instance = context->classInitInstance();
	auto code = std::string();
	for (auto& init : instance) {
		code.append(visitNode(init));
		code.append(" ,");
	}
	if (!instance.empty()) {
		code.pop_back();
	}

	return code;
}
std::any sealASTVisitor::visitOperatbleSymbol(sealParser::OperatbleSymbolContext* context) {
	auto op = ptrSum<antlr4::tree::TerminalNode*>(context->DoubleAdd(), context->DoubleMinus(), context->Plus(), context->Minus(), context->Multiply(), context->Mod(), context->Fn());
	if (op->getText() == "fn") {
		return "()";
	}
	else {
		return op->getText();
	}
}
std::any sealASTVisitor::visitOperatorEntry(sealParser::OperatorEntryContext* context) {
	auto code = std::string("auto ");
	if (context->functionReturnType() != nullptr) {
		code = visitNode(context->functionReturnType()) + " ";
	}
	code.append("operator");
	code.append(visitNode(context->operatbleSymbol()));
	code.append("(");
	for (auto& arg : context->agrumentList()) {
		code.append(visitNode(arg));
		code.append(",");
	}
	if (!context->agrumentList().empty()) {
		code.pop_back();
	}

	code.append(visitNode(context->functionBlock()));

	return code;
}
std::any sealASTVisitor::visitInterfaceStatement(sealParser::InterfaceStatementContext* context) {
	auto code = std::string("");
	if (status.inModule) {
		if (context->decorator() == nullptr) {
			code = "private: static\n";
		}
		else {
			code = "public: static\n";
		}
	}
	// class id {
	// public:
	// }
	code.append("class ");
	code.append(context->Id()->getText());
	code.append(" ");
	code.append(visitNode(context->interfaceBlock()));
	code.append(";");

	return code;
}
std::any sealASTVisitor::visitDoWhileStatement(sealParser::DoWhileStatementContext* context) {
	// do {
	//   block
	// } while(statement);
	return "do \n" + visitNode(context->functionBlock()) + " while (" + visitNode(context->expr()) +");";
}
std::any sealASTVisitor::visitPointerDefine(sealParser::PointerDefineContext* context) {
	if (context->Int() != nullptr) {
		auto prefixed = std::string();
		auto ref = atoi(context->Int()->getText().c_str());
		for (auto count = 0; count < ref; ++count) {
			prefixed.push_back('*');
		}

		return prefixed;
	}

	return "*";
}
std::any sealASTVisitor::visitClassInherfEntry(sealParser::ClassInherfEntryContext* context) {
	auto inherfType = std::string("public");
	if (context->classInherfType() != nullptr) {
		if (context->classInherfType()->getText() == "interface") {
			inherfType = "public";
		}
		else {
			inherfType = context->classInherfType()->getText();
		}
	}

	return inherfType + " " + visitNode(context->type());
}

void sealASTVisitor::insertMapping(const std::string& name, const runtimeTypeInfo& type) {
	typeMapping.emplace(name, type);
	auto localId = name;
	for (auto& prefix : localPrefix) {
		localId = prefix + "." + localId;
		typeMapping.emplace(localId, type);
	}
}
