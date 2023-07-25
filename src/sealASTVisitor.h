#pragma once

#include "sealVisitor.h"
#include "sealFileStatus.h"

template<class Type>
using pointerType = std::is_pointer<Type>;

class sealASTVisitor : public sealVisitor
{
public:
	sealASTVisitor();

public:
	std::any visitStart(sealParser::StartContext* context) override;


	std::any visitFalseType(sealParser::FalseTypeContext* context) override;
	std::any visitTrueType(sealParser::TrueTypeContext* context) override;

	std::any visitLogicOr(sealParser::LogicOrContext* context) override;
	std::any visitLogicAnd(sealParser::LogicAndContext* context) override;

	std::any visitVariableDefine(sealParser::VariableDefineContext* context) override;

	std::any visitStatementBody(sealParser::StatementBodyContext* context) override;

	std::any visitCpp(sealParser::CppContext* context) override;

	std::any visitConstantString(sealParser::ConstantStringContext* context) override;

	std::any visitCallVariable(sealParser::CallVariableContext* context) override;
	std::any visitCallPointer(sealParser::CallPointerContext* context) override;
	std::any visitVisitor(sealParser::VisitorContext* context) override;

	std::any visitIdExpression(sealParser::IdExpressionContext* context) override;

	std::any visitMulOrDivOrMod(sealParser::MulOrDivOrModContext* context) override;

	std::any visitConstantFloat(sealParser::ConstantFloatContext* context) override;
	std::any visitBackSelfOperation(sealParser::BackSelfOperationContext* context) override;

	std::any visitTemplate(sealParser::TemplateContext* context) override;
	std::any visitInterfaceStatement(sealParser::InterfaceStatementContext* context) override;

	std::any visitConstantInt(sealParser::ConstantIntContext* context) override;

	std::any visitAddOrMinus(sealParser::AddOrMinusContext* context) override;

	std::any visitConstantHexNumber(sealParser::ConstantHexNumberContext* context) override;

	std::any visitFunctionCall(sealParser::FunctionCallContext* context) override;

	std::any visitAssgin(sealParser::AssginContext* context) override;

	std::any visitParen(sealParser::ParenContext* context) override;

	std::any visitLogicCompare(sealParser::LogicCompareContext* context) override;

	std::any visitPreSelfOperation(sealParser::PreSelfOperationContext* context) override;

	std::any visitTemplateCallStatement(sealParser::TemplateCallStatementContext* context) override;

	std::any visitTemplateDefineStatement(sealParser::TemplateDefineStatementContext* context) override;

	std::any visitInitStatement(sealParser::InitStatementContext* context) override;

	std::any visitReturnStatement(sealParser::ReturnStatementContext* context) override;

	std::any visitElifStatement(sealParser::ElifStatementContext* context) override;
	std::any visitElseStatement(sealParser::ElseStatementContext* context) override;
	std::any visitIfStatement(sealParser::IfStatementContext* context) override;

	std::any visitEnumEntry(sealParser::EnumEntryContext* context) override;
	std::any visitEnumStatement(sealParser::EnumStatementContext* context) override;

	std::any visitRangeExpression(sealParser::RangeExpressionContext* context) override;
	std::any visitRangeInclude(sealParser::RangeIncludeContext* context) override;

	std::any visitWhileStatement(sealParser::WhileStatementContext* context) override;
	std::any visitNullAccessStatement(sealParser::NullAccessStatementContext* context) override;
	std::any visitNewContext(sealParser::NewContextContext* context) override;
	std::any visitDeleteStatement(sealParser::DeleteStatementContext* context) override;

	std::any visitInterfaceBlock(sealParser::InterfaceBlockContext* context) override;

	std::any visitRangeWhileStatement(sealParser::RangeWhileStatementContext* context) override;

	std::any visitForStatement(sealParser::ForStatementContext* context) override;
	std::any visitForeachStatement(sealParser::ForeachStatementContext* context) override;

	std::any visitFromStatement(sealParser::FromStatementContext* context) override;
	std::any visitModuleStatement(sealParser::ModuleStatementContext* context) override;

	std::any visitClassInherfEntry(sealParser::ClassInherfEntryContext* context) override;
	std::any visitClassInitInstance(sealParser::ClassInitInstanceContext* context) override;
	std::any visitOperatbleSymbol(sealParser::OperatbleSymbolContext* context) override;

	std::any visitClassInitList(sealParser::ClassInitListContext* context) override;

	std::any visitDoWhileStatement(sealParser::DoWhileStatementContext* context) override;
	std::any visitOperatorEntry(sealParser::OperatorEntryContext* context) override;
	std::any visitPointerDefine(sealParser::PointerDefineContext* context) override;

	std::any visitLambdaMulLine(sealParser::LambdaMulLineContext* context) override;
	std::any visitLambdaSingleLine(sealParser::LambdaSingleLineContext* context) override;

	std::any visitLambdaBlock(sealParser::LambdaBlockContext* context) override;
	std::any visitLambdaStatement(sealParser::LambdaStatementContext* context) override { return "TODO"; }

	std::any visitStatement(sealParser::StatementContext* context) override;

	std::any visitFunctionReturnType(sealParser::FunctionReturnTypeContext* context) override;
	std::any visitFunctionDefine(sealParser::FunctionDefineContext* context) override;

	std::any visitClassInherfType(sealParser::ClassInherfTypeContext* context) override;
	std::any visitClassInherf(sealParser::ClassInherfContext* context) override;
	std::any visitDefine(sealParser::DefineContext* context) override;
	std::any visitPreDefine(sealParser::PreDefineContext* context) override;

	std::any visitAgrumentList(sealParser::AgrumentListContext* context) override;
	std::any visitFunctionBlockEntry(sealParser::FunctionBlockEntryContext* context) override;
	std::any visitFunctionBlock(sealParser::FunctionBlockContext* context) override;
	std::any visitDecorator(sealParser::DecoratorContext* context) override;
	std::any visitCppgptStatement(sealParser::CppgptStatementContext* context) override;
	std::any visitClassBlockEntry(sealParser::ClassBlockEntryContext* context) override;
	std::any visitClassBlock(sealParser::ClassBlockContext* context) override;
	std::any visitSingleType(sealParser::SingleTypeContext* context) override;
	std::any visitType(sealParser::TypeContext* context) override;
	std::any visitCppLiteral(sealParser::CppLiteralContext* context) override;
	std::any visitLogicOpeartion(sealParser::LogicOpeartionContext* context) override;

	std::any visitBreakStatement(sealParser::BreakStatementContext* context) override;
	std::any visitContinueStatement(sealParser::ContinueStatementContext* context) override;
	std::any visitLambdaOrFunction(sealParser::LambdaOrFunctionContext* context) override;
	std::any visitClassBuildFunction(sealParser::ClassBuildFunctionContext* context) override;
	std::any visitClassDesotryFunction(sealParser::ClassDesotryFunctionContext* context) override;
	std::any visitWhereBlock(sealParser::WhereBlockContext* context) override;
	std::any visitFunctionTemplate(sealParser::FunctionTemplateContext* context) override;
	std::any visitWhereStatement(sealParser::WhereStatementContext* context) override;
	std::any visitWhereCase(sealParser::WhereCaseContext* context) override;
	std::any visitInitList(sealParser::InitListContext* context) override;
	std::any visitInitListObject(sealParser::InitListObjectContext* context) override;
	std::any visitEqualList(sealParser::EqualListContext* context) override;
	std::any visitNormalType(sealParser::NormalTypeContext* context) override;
	std::any visitArrayType(sealParser::ArrayTypeContext* context) override;
	std::any visitArrayCall(sealParser::ArrayCallContext* context) override;
	

	std::any visitGetOrigin(sealParser::GetOriginContext* context) override;
	std::any visitGetRef(sealParser::GetRefContext* context) override;

public:
	template<class resultType, class... pointerType>
	resultType ptrSum(pointerType... ptr) {
		return (resultType)((size_t)ptr + ...);
	}

	std::string parseLeftRight(std::vector<sealParser::ExprContext*>& vector, const std::string& operation);

	std::string visitNode(antlr4::tree::ParseTree* tree) {
		if (tree != nullptr) {
			return anyCast(visit(tree));
		}

		return "";
	}

public:
	std::vector<std::string> errorMessage;
	std::vector<std::string> usedLib;

public:
	std::map<std::string, runtimeTypeInfo> typeMapping;
	std::vector<std::string> localPrefix;
	void insertMapping(const std::string& name, const runtimeTypeInfo& type);

public:
	sealFileStatus status;
};