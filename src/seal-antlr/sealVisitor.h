
// Generated from Z:/seal-the-lang\seal.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "sealParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by sealParser.
 */
class  sealVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by sealParser.
   */
    virtual std::any visitStart(sealParser::StartContext *context) = 0;

    virtual std::any visitStatementBody(sealParser::StatementBodyContext *context) = 0;

    virtual std::any visitInitListObject(sealParser::InitListObjectContext *context) = 0;

    virtual std::any visitFalseType(sealParser::FalseTypeContext *context) = 0;

    virtual std::any visitCpp(sealParser::CppContext *context) = 0;

    virtual std::any visitVisitor(sealParser::VisitorContext *context) = 0;

    virtual std::any visitLogicOpeartion(sealParser::LogicOpeartionContext *context) = 0;

    virtual std::any visitConstantString(sealParser::ConstantStringContext *context) = 0;

    virtual std::any visitCallVariable(sealParser::CallVariableContext *context) = 0;

    virtual std::any visitRangeExpression(sealParser::RangeExpressionContext *context) = 0;

    virtual std::any visitArrayCall(sealParser::ArrayCallContext *context) = 0;

    virtual std::any visitBackSelfOperation(sealParser::BackSelfOperationContext *context) = 0;

    virtual std::any visitTrueType(sealParser::TrueTypeContext *context) = 0;

    virtual std::any visitTemplate(sealParser::TemplateContext *context) = 0;

    virtual std::any visitGetRef(sealParser::GetRefContext *context) = 0;

    virtual std::any visitConstantInt(sealParser::ConstantIntContext *context) = 0;

    virtual std::any visitAddOrMinus(sealParser::AddOrMinusContext *context) = 0;

    virtual std::any visitGetOrigin(sealParser::GetOriginContext *context) = 0;

    virtual std::any visitFunctionCall(sealParser::FunctionCallContext *context) = 0;

    virtual std::any visitLogicAnd(sealParser::LogicAndContext *context) = 0;

    virtual std::any visitPreSelfOperation(sealParser::PreSelfOperationContext *context) = 0;

    virtual std::any visitLogicOr(sealParser::LogicOrContext *context) = 0;

    virtual std::any visitConstantFloat(sealParser::ConstantFloatContext *context) = 0;

    virtual std::any visitNewContext(sealParser::NewContextContext *context) = 0;

    virtual std::any visitRangeInclude(sealParser::RangeIncludeContext *context) = 0;

    virtual std::any visitMulOrDivOrMod(sealParser::MulOrDivOrModContext *context) = 0;

    virtual std::any visitConstantHexNumber(sealParser::ConstantHexNumberContext *context) = 0;

    virtual std::any visitInitList(sealParser::InitListContext *context) = 0;

    virtual std::any visitIdExpression(sealParser::IdExpressionContext *context) = 0;

    virtual std::any visitEqualList(sealParser::EqualListContext *context) = 0;

    virtual std::any visitCallPointer(sealParser::CallPointerContext *context) = 0;

    virtual std::any visitAssgin(sealParser::AssginContext *context) = 0;

    virtual std::any visitParen(sealParser::ParenContext *context) = 0;

    virtual std::any visitLogicCompare(sealParser::LogicCompareContext *context) = 0;

    virtual std::any visitTemplateCallStatement(sealParser::TemplateCallStatementContext *context) = 0;

    virtual std::any visitTemplateDefineStatement(sealParser::TemplateDefineStatementContext *context) = 0;

    virtual std::any visitNullAccessStatement(sealParser::NullAccessStatementContext *context) = 0;

    virtual std::any visitInitStatement(sealParser::InitStatementContext *context) = 0;

    virtual std::any visitReturnStatement(sealParser::ReturnStatementContext *context) = 0;

    virtual std::any visitElifStatement(sealParser::ElifStatementContext *context) = 0;

    virtual std::any visitElseStatement(sealParser::ElseStatementContext *context) = 0;

    virtual std::any visitIfStatement(sealParser::IfStatementContext *context) = 0;

    virtual std::any visitBreakStatement(sealParser::BreakStatementContext *context) = 0;

    virtual std::any visitContinueStatement(sealParser::ContinueStatementContext *context) = 0;

    virtual std::any visitEnumEntry(sealParser::EnumEntryContext *context) = 0;

    virtual std::any visitEnumStatement(sealParser::EnumStatementContext *context) = 0;

    virtual std::any visitDeleteStatement(sealParser::DeleteStatementContext *context) = 0;

    virtual std::any visitWhileStatement(sealParser::WhileStatementContext *context) = 0;

    virtual std::any visitRangeWhileStatement(sealParser::RangeWhileStatementContext *context) = 0;

    virtual std::any visitForStatement(sealParser::ForStatementContext *context) = 0;

    virtual std::any visitInterfaceBlock(sealParser::InterfaceBlockContext *context) = 0;

    virtual std::any visitInterfaceStatement(sealParser::InterfaceStatementContext *context) = 0;

    virtual std::any visitForeachStatement(sealParser::ForeachStatementContext *context) = 0;

    virtual std::any visitFromStatement(sealParser::FromStatementContext *context) = 0;

    virtual std::any visitModuleStatement(sealParser::ModuleStatementContext *context) = 0;

    virtual std::any visitLambdaMulLine(sealParser::LambdaMulLineContext *context) = 0;

    virtual std::any visitLambdaSingleLine(sealParser::LambdaSingleLineContext *context) = 0;

    virtual std::any visitLambdaBlock(sealParser::LambdaBlockContext *context) = 0;

    virtual std::any visitLambdaStatement(sealParser::LambdaStatementContext *context) = 0;

    virtual std::any visitDoWhileStatement(sealParser::DoWhileStatementContext *context) = 0;

    virtual std::any visitStatement(sealParser::StatementContext *context) = 0;

    virtual std::any visitPointerDefine(sealParser::PointerDefineContext *context) = 0;

    virtual std::any visitVariableDefine(sealParser::VariableDefineContext *context) = 0;

    virtual std::any visitFunctionTemplate(sealParser::FunctionTemplateContext *context) = 0;

    virtual std::any visitFunctionReturnType(sealParser::FunctionReturnTypeContext *context) = 0;

    virtual std::any visitFunctionDefine(sealParser::FunctionDefineContext *context) = 0;

    virtual std::any visitClassInherfType(sealParser::ClassInherfTypeContext *context) = 0;

    virtual std::any visitClassInherfEntry(sealParser::ClassInherfEntryContext *context) = 0;

    virtual std::any visitClassInherf(sealParser::ClassInherfContext *context) = 0;

    virtual std::any visitDefine(sealParser::DefineContext *context) = 0;

    virtual std::any visitPreDefine(sealParser::PreDefineContext *context) = 0;

    virtual std::any visitAgrumentList(sealParser::AgrumentListContext *context) = 0;

    virtual std::any visitFunctionBlockEntry(sealParser::FunctionBlockEntryContext *context) = 0;

    virtual std::any visitFunctionBlock(sealParser::FunctionBlockContext *context) = 0;

    virtual std::any visitDecorator(sealParser::DecoratorContext *context) = 0;

    virtual std::any visitCppgptStatement(sealParser::CppgptStatementContext *context) = 0;

    virtual std::any visitLambdaOrFunction(sealParser::LambdaOrFunctionContext *context) = 0;

    virtual std::any visitClassInitInstance(sealParser::ClassInitInstanceContext *context) = 0;

    virtual std::any visitClassInitList(sealParser::ClassInitListContext *context) = 0;

    virtual std::any visitClassBuildFunction(sealParser::ClassBuildFunctionContext *context) = 0;

    virtual std::any visitClassDesotryFunction(sealParser::ClassDesotryFunctionContext *context) = 0;

    virtual std::any visitClassBlockEntry(sealParser::ClassBlockEntryContext *context) = 0;

    virtual std::any visitOperatbleSymbol(sealParser::OperatbleSymbolContext *context) = 0;

    virtual std::any visitOperatorEntry(sealParser::OperatorEntryContext *context) = 0;

    virtual std::any visitClassBlock(sealParser::ClassBlockContext *context) = 0;

    virtual std::any visitWhereCase(sealParser::WhereCaseContext *context) = 0;

    virtual std::any visitWhereBlock(sealParser::WhereBlockContext *context) = 0;

    virtual std::any visitWhereStatement(sealParser::WhereStatementContext *context) = 0;

    virtual std::any visitSingleType(sealParser::SingleTypeContext *context) = 0;

    virtual std::any visitNormalType(sealParser::NormalTypeContext *context) = 0;

    virtual std::any visitArrayType(sealParser::ArrayTypeContext *context) = 0;

    virtual std::any visitType(sealParser::TypeContext *context) = 0;

    virtual std::any visitCppLiteral(sealParser::CppLiteralContext *context) = 0;


};

