
// Generated from Z:/seal-the-lang\seal.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "sealVisitor.h"


/**
 * This class provides an empty implementation of sealVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  sealBaseVisitor : public sealVisitor {
public:

  virtual std::any visitStart(sealParser::StartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatementBody(sealParser::StatementBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInitListObject(sealParser::InitListObjectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFalseType(sealParser::FalseTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCpp(sealParser::CppContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVisitor(sealParser::VisitorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicOpeartion(sealParser::LogicOpeartionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstantString(sealParser::ConstantStringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCallVariable(sealParser::CallVariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRangeExpression(sealParser::RangeExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArrayCall(sealParser::ArrayCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBackSelfOperation(sealParser::BackSelfOperationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTrueType(sealParser::TrueTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTemplate(sealParser::TemplateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGetRef(sealParser::GetRefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstantInt(sealParser::ConstantIntContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAddOrMinus(sealParser::AddOrMinusContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGetOrigin(sealParser::GetOriginContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionCall(sealParser::FunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicAnd(sealParser::LogicAndContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPreSelfOperation(sealParser::PreSelfOperationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicOr(sealParser::LogicOrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstantFloat(sealParser::ConstantFloatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNewContext(sealParser::NewContextContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRangeInclude(sealParser::RangeIncludeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMulOrDivOrMod(sealParser::MulOrDivOrModContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstantHexNumber(sealParser::ConstantHexNumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInitList(sealParser::InitListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdExpression(sealParser::IdExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEqualList(sealParser::EqualListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCallPointer(sealParser::CallPointerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssgin(sealParser::AssginContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParen(sealParser::ParenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicCompare(sealParser::LogicCompareContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTemplateCallStatement(sealParser::TemplateCallStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTemplateDefineStatement(sealParser::TemplateDefineStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNullAccessStatement(sealParser::NullAccessStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInitStatement(sealParser::InitStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReturnStatement(sealParser::ReturnStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElifStatement(sealParser::ElifStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElseStatement(sealParser::ElseStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfStatement(sealParser::IfStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBreakStatement(sealParser::BreakStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitContinueStatement(sealParser::ContinueStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnumEntry(sealParser::EnumEntryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnumStatement(sealParser::EnumStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeleteStatement(sealParser::DeleteStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhileStatement(sealParser::WhileStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRangeWhileStatement(sealParser::RangeWhileStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitForStatement(sealParser::ForStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInterfaceBlock(sealParser::InterfaceBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInterfaceStatement(sealParser::InterfaceStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitForeachStatement(sealParser::ForeachStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFromStatement(sealParser::FromStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitModuleStatement(sealParser::ModuleStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLambdaMulLine(sealParser::LambdaMulLineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLambdaSingleLine(sealParser::LambdaSingleLineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLambdaBlock(sealParser::LambdaBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLambdaStatement(sealParser::LambdaStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDoWhileStatement(sealParser::DoWhileStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(sealParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPointerDefine(sealParser::PointerDefineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariableDefine(sealParser::VariableDefineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionTemplate(sealParser::FunctionTemplateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionReturnType(sealParser::FunctionReturnTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionDefine(sealParser::FunctionDefineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClassInherfType(sealParser::ClassInherfTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClassInherfEntry(sealParser::ClassInherfEntryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClassInherf(sealParser::ClassInherfContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefine(sealParser::DefineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPreDefine(sealParser::PreDefineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAgrumentList(sealParser::AgrumentListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionBlockEntry(sealParser::FunctionBlockEntryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionBlock(sealParser::FunctionBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDecorator(sealParser::DecoratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCppgptStatement(sealParser::CppgptStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLambdaOrFunction(sealParser::LambdaOrFunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClassInitInstance(sealParser::ClassInitInstanceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClassInitList(sealParser::ClassInitListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClassBuildFunction(sealParser::ClassBuildFunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClassDesotryFunction(sealParser::ClassDesotryFunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClassBlockEntry(sealParser::ClassBlockEntryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOperatbleSymbol(sealParser::OperatbleSymbolContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOperatorEntry(sealParser::OperatorEntryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClassBlock(sealParser::ClassBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhereCase(sealParser::WhereCaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhereBlock(sealParser::WhereBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhereStatement(sealParser::WhereStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSingleType(sealParser::SingleTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNormalType(sealParser::NormalTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArrayType(sealParser::ArrayTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType(sealParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCppLiteral(sealParser::CppLiteralContext *ctx) override {
    return visitChildren(ctx);
  }


};

