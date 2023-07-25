
// Generated from Z:/seal-the-lang\seal.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"




class  sealParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, T__23 = 24, T__24 = 25, T__25 = 26, 
    CppRaw = 27, FromLabel = 28, ModuleLabel = 29, Dot = 30, Var = 31, Ptr = 32, 
    Let = 33, Ref = 34, Fn = 35, WS = 36, Int = 37, Float = 38, HexNumber = 39, 
    Plus = 40, Minus = 41, Multiply = 42, Mod = 43, Divide = 44, LParen = 45, 
    RParen = 46, LTo = 47, RTo = 48, If = 49, Elif = 50, Else = 51, True = 52, 
    False = 53, DoubleAdd = 54, DoubleMinus = 55, AddEqual = 56, MinusEqual = 57, 
    DivEqual = 58, MulEqual = 59, End = 60, Equal = 61, EMol = 62, EAnd = 63, 
    NotEqual = 64, LTemplate = 65, RTemplate = 66, Interface = 67, Public = 68, 
    Protected = 69, Private = 70, InherfPublic = 71, InherfPrivate = 72, 
    Virtual = 73, Override = 74, Static = 75, Break = 76, Continue = 77, 
    Class = 78, Case = 79, To = 80, Leq = 81, Geq = 82, RefOp = 83, Opeartor = 84, 
    String = 85, Id = 86, MULTI_LINE_COMMENT = 87, SINGLE_LINE_COMMENT = 88
  };

  enum {
    RuleStart = 0, RuleStatementBody = 1, RuleInitListObject = 2, RuleExpr = 3, 
    RuleTemplateCallStatement = 4, RuleTemplateDefineStatement = 5, RuleNullAccessStatement = 6, 
    RuleInitStatement = 7, RuleReturnStatement = 8, RuleElifStatement = 9, 
    RuleElseStatement = 10, RuleIfStatement = 11, RuleBreakStatement = 12, 
    RuleContinueStatement = 13, RuleEnumEntry = 14, RuleEnumStatement = 15, 
    RuleDeleteStatement = 16, RuleWhileStatement = 17, RuleRangeWhileStatement = 18, 
    RuleForStatement = 19, RuleInterfaceBlock = 20, RuleInterfaceStatement = 21, 
    RuleForeachStatement = 22, RuleFromStatement = 23, RuleModuleStatement = 24, 
    RuleLambdaMulLine = 25, RuleLambdaSingleLine = 26, RuleLambdaBlock = 27, 
    RuleLambdaStatement = 28, RuleDoWhileStatement = 29, RuleStatement = 30, 
    RulePointerDefine = 31, RuleVariableDefine = 32, RuleFunctionTemplate = 33, 
    RuleFunctionReturnType = 34, RuleFunctionDefine = 35, RuleClassInherfType = 36, 
    RuleClassInherfEntry = 37, RuleClassInherf = 38, RuleClassDefine = 39, 
    RuleAgrumentList = 40, RuleFunctionBlockEntry = 41, RuleFunctionBlock = 42, 
    RuleDecorator = 43, RuleCppgptStatement = 44, RuleLambdaOrFunction = 45, 
    RuleClassInitInstance = 46, RuleClassInitList = 47, RuleClassBuildFunction = 48, 
    RuleClassDesotryFunction = 49, RuleClassBlockEntry = 50, RuleOperatbleSymbol = 51, 
    RuleOperatorEntry = 52, RuleClassBlock = 53, RuleWhereCase = 54, RuleWhereBlock = 55, 
    RuleWhereStatement = 56, RuleSingleType = 57, RuleNormalType = 58, RuleArrayType = 59, 
    RuleType = 60, RuleCppLiteral = 61
  };

  explicit sealParser(antlr4::TokenStream *input);

  sealParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~sealParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class StartContext;
  class StatementBodyContext;
  class InitListObjectContext;
  class ExprContext;
  class TemplateCallStatementContext;
  class TemplateDefineStatementContext;
  class NullAccessStatementContext;
  class InitStatementContext;
  class ReturnStatementContext;
  class ElifStatementContext;
  class ElseStatementContext;
  class IfStatementContext;
  class BreakStatementContext;
  class ContinueStatementContext;
  class EnumEntryContext;
  class EnumStatementContext;
  class DeleteStatementContext;
  class WhileStatementContext;
  class RangeWhileStatementContext;
  class ForStatementContext;
  class InterfaceBlockContext;
  class InterfaceStatementContext;
  class ForeachStatementContext;
  class FromStatementContext;
  class ModuleStatementContext;
  class LambdaMulLineContext;
  class LambdaSingleLineContext;
  class LambdaBlockContext;
  class LambdaStatementContext;
  class DoWhileStatementContext;
  class StatementContext;
  class PointerDefineContext;
  class VariableDefineContext;
  class FunctionTemplateContext;
  class FunctionReturnTypeContext;
  class FunctionDefineContext;
  class ClassInherfTypeContext;
  class ClassInherfEntryContext;
  class ClassInherfContext;
  class ClassDefineContext;
  class AgrumentListContext;
  class FunctionBlockEntryContext;
  class FunctionBlockContext;
  class DecoratorContext;
  class CppgptStatementContext;
  class LambdaOrFunctionContext;
  class ClassInitInstanceContext;
  class ClassInitListContext;
  class ClassBuildFunctionContext;
  class ClassDesotryFunctionContext;
  class ClassBlockEntryContext;
  class OperatbleSymbolContext;
  class OperatorEntryContext;
  class ClassBlockContext;
  class WhereCaseContext;
  class WhereBlockContext;
  class WhereStatementContext;
  class SingleTypeContext;
  class NormalTypeContext;
  class ArrayTypeContext;
  class TypeContext;
  class CppLiteralContext; 

  class  StartContext : public antlr4::ParserRuleContext {
  public:
    StartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatementBodyContext *> statementBody();
    StatementBodyContext* statementBody(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StartContext* start();

  class  StatementBodyContext : public antlr4::ParserRuleContext {
  public:
    StatementBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CppLiteralContext *cppLiteral();
    VariableDefineContext *variableDefine();
    antlr4::tree::TerminalNode *End();
    NullAccessStatementContext *nullAccessStatement();
    LambdaStatementContext *lambdaStatement();
    FromStatementContext *fromStatement();
    FunctionDefineContext *functionDefine();
    ClassDefineContext *classDefine();
    ModuleStatementContext *moduleStatement();
    EnumStatementContext *enumStatement();
    WhereStatementContext *whereStatement();
    BreakStatementContext *breakStatement();
    ContinueStatementContext *continueStatement();
    InterfaceStatementContext *interfaceStatement();
    DoWhileStatementContext *doWhileStatement();
    DeleteStatementContext *deleteStatement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementBodyContext* statementBody();

  class  InitListObjectContext : public antlr4::ParserRuleContext {
  public:
    InitListObjectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Id();
    antlr4::tree::TerminalNode *Equal();
    ExprContext *expr();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InitListObjectContext* initListObject();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExprContext() = default;
    void copyFrom(ExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  FalseTypeContext : public ExprContext {
  public:
    FalseTypeContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *False();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CppContext : public ExprContext {
  public:
    CppContext(ExprContext *ctx);

    CppLiteralContext *cppLiteral();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  VisitorContext : public ExprContext {
  public:
    VisitorContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LogicOpeartionContext : public ExprContext {
  public:
    LogicOpeartionContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *Leq();
    antlr4::tree::TerminalNode *Geq();
    antlr4::tree::TerminalNode *LTemplate();
    antlr4::tree::TerminalNode *RTemplate();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ConstantStringContext : public ExprContext {
  public:
    ConstantStringContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *String();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CallVariableContext : public ExprContext {
  public:
    CallVariableContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *Dot();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RangeExpressionContext : public ExprContext {
  public:
    RangeExpressionContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *To();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ArrayCallContext : public ExprContext {
  public:
    ArrayCallContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BackSelfOperationContext : public ExprContext {
  public:
    BackSelfOperationContext(ExprContext *ctx);

    ExprContext *expr();
    antlr4::tree::TerminalNode *DoubleAdd();
    antlr4::tree::TerminalNode *DoubleMinus();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TrueTypeContext : public ExprContext {
  public:
    TrueTypeContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *True();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TemplateContext : public ExprContext {
  public:
    TemplateContext(ExprContext *ctx);

    ExprContext *expr();
    TemplateCallStatementContext *templateCallStatement();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  GetRefContext : public ExprContext {
  public:
    GetRefContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *RefOp();
    ExprContext *expr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ConstantIntContext : public ExprContext {
  public:
    ConstantIntContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *Int();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AddOrMinusContext : public ExprContext {
  public:
    AddOrMinusContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *Plus();
    antlr4::tree::TerminalNode *Minus();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  GetOriginContext : public ExprContext {
  public:
    GetOriginContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *Multiply();
    ExprContext *expr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FunctionCallContext : public ExprContext {
  public:
    FunctionCallContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *LParen();
    antlr4::tree::TerminalNode *RParen();
    TemplateCallStatementContext *templateCallStatement();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LogicAndContext : public ExprContext {
  public:
    LogicAndContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PreSelfOperationContext : public ExprContext {
  public:
    PreSelfOperationContext(ExprContext *ctx);

    ExprContext *expr();
    antlr4::tree::TerminalNode *DoubleAdd();
    antlr4::tree::TerminalNode *DoubleMinus();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LogicOrContext : public ExprContext {
  public:
    LogicOrContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ConstantFloatContext : public ExprContext {
  public:
    ConstantFloatContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *Float();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NewContextContext : public ExprContext {
  public:
    NewContextContext(ExprContext *ctx);

    ExprContext *expr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RangeIncludeContext : public ExprContext {
  public:
    RangeIncludeContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *To();
    antlr4::tree::TerminalNode *Equal();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MulOrDivOrModContext : public ExprContext {
  public:
    MulOrDivOrModContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *Multiply();
    antlr4::tree::TerminalNode *Divide();
    antlr4::tree::TerminalNode *Mod();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ConstantHexNumberContext : public ExprContext {
  public:
    ConstantHexNumberContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *HexNumber();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  InitListContext : public ExprContext {
  public:
    InitListContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IdExpressionContext : public ExprContext {
  public:
    IdExpressionContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *Id();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  EqualListContext : public ExprContext {
  public:
    EqualListContext(ExprContext *ctx);

    std::vector<InitListObjectContext *> initListObject();
    InitListObjectContext* initListObject(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CallPointerContext : public ExprContext {
  public:
    CallPointerContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *LTo();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AssginContext : public ExprContext {
  public:
    AssginContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *Equal();
    antlr4::tree::TerminalNode *AddEqual();
    antlr4::tree::TerminalNode *MinusEqual();
    antlr4::tree::TerminalNode *MulEqual();
    antlr4::tree::TerminalNode *DivEqual();
    antlr4::tree::TerminalNode *EMol();
    antlr4::tree::TerminalNode *NotEqual();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ParenContext : public ExprContext {
  public:
    ParenContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *LParen();
    ExprContext *expr();
    antlr4::tree::TerminalNode *RParen();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LogicCompareContext : public ExprContext {
  public:
    LogicCompareContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExprContext* expr();
  ExprContext* expr(int precedence);
  class  TemplateCallStatementContext : public antlr4::ParserRuleContext {
  public:
    TemplateCallStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LTemplate();
    std::vector<TypeContext *> type();
    TypeContext* type(size_t i);
    antlr4::tree::TerminalNode *RTemplate();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TemplateCallStatementContext* templateCallStatement();

  class  TemplateDefineStatementContext : public antlr4::ParserRuleContext {
  public:
    TemplateDefineStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LTemplate();
    std::vector<antlr4::tree::TerminalNode *> Class();
    antlr4::tree::TerminalNode* Class(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Id();
    antlr4::tree::TerminalNode* Id(size_t i);
    antlr4::tree::TerminalNode *RTemplate();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TemplateDefineStatementContext* templateDefineStatement();

  class  NullAccessStatementContext : public antlr4::ParserRuleContext {
  public:
    NullAccessStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    FunctionBlockContext *functionBlock();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NullAccessStatementContext* nullAccessStatement();

  class  InitStatementContext : public antlr4::ParserRuleContext {
  public:
    InitStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    VariableDefineContext *variableDefine();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InitStatementContext* initStatement();

  class  ReturnStatementContext : public antlr4::ParserRuleContext {
  public:
    ReturnStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    antlr4::tree::TerminalNode *End();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReturnStatementContext* returnStatement();

  class  ElifStatementContext : public antlr4::ParserRuleContext {
  public:
    ElifStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Elif();
    antlr4::tree::TerminalNode *LParen();
    ExprContext *expr();
    antlr4::tree::TerminalNode *RParen();
    FunctionBlockContext *functionBlock();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ElifStatementContext* elifStatement();

  class  ElseStatementContext : public antlr4::ParserRuleContext {
  public:
    ElseStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Else();
    FunctionBlockContext *functionBlock();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ElseStatementContext* elseStatement();

  class  IfStatementContext : public antlr4::ParserRuleContext {
  public:
    IfStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *If();
    antlr4::tree::TerminalNode *LParen();
    ExprContext *expr();
    antlr4::tree::TerminalNode *RParen();
    FunctionBlockContext *functionBlock();
    std::vector<ElifStatementContext *> elifStatement();
    ElifStatementContext* elifStatement(size_t i);
    ElseStatementContext *elseStatement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfStatementContext* ifStatement();

  class  BreakStatementContext : public antlr4::ParserRuleContext {
  public:
    BreakStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Break();
    antlr4::tree::TerminalNode *End();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BreakStatementContext* breakStatement();

  class  ContinueStatementContext : public antlr4::ParserRuleContext {
  public:
    ContinueStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Continue();
    antlr4::tree::TerminalNode *End();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ContinueStatementContext* continueStatement();

  class  EnumEntryContext : public antlr4::ParserRuleContext {
  public:
    EnumEntryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Id();
    antlr4::tree::TerminalNode* Id(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumEntryContext* enumEntry();

  class  EnumStatementContext : public antlr4::ParserRuleContext {
  public:
    EnumStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Id();
    EnumEntryContext *enumEntry();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumStatementContext* enumStatement();

  class  DeleteStatementContext : public antlr4::ParserRuleContext {
  public:
    DeleteStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeleteStatementContext* deleteStatement();

  class  WhileStatementContext : public antlr4::ParserRuleContext {
  public:
    WhileStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LParen();
    ExprContext *expr();
    antlr4::tree::TerminalNode *RParen();
    FunctionBlockContext *functionBlock();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhileStatementContext* whileStatement();

  class  RangeWhileStatementContext : public antlr4::ParserRuleContext {
  public:
    RangeWhileStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LParen();
    ExprContext *expr();
    antlr4::tree::TerminalNode *LTo();
    antlr4::tree::TerminalNode *Id();
    antlr4::tree::TerminalNode *RParen();
    FunctionBlockContext *functionBlock();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RangeWhileStatementContext* rangeWhileStatement();

  class  ForStatementContext : public antlr4::ParserRuleContext {
  public:
    ForStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LParen();
    std::vector<antlr4::tree::TerminalNode *> End();
    antlr4::tree::TerminalNode* End(size_t i);
    antlr4::tree::TerminalNode *RParen();
    FunctionBlockContext *functionBlock();
    InitStatementContext *initStatement();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForStatementContext* forStatement();

  class  InterfaceBlockContext : public antlr4::ParserRuleContext {
  public:
    InterfaceBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FunctionDefineContext *> functionDefine();
    FunctionDefineContext* functionDefine(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InterfaceBlockContext* interfaceBlock();

  class  InterfaceStatementContext : public antlr4::ParserRuleContext {
  public:
    InterfaceStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Interface();
    antlr4::tree::TerminalNode *Id();
    InterfaceBlockContext *interfaceBlock();
    DecoratorContext *decorator();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InterfaceStatementContext* interfaceStatement();

  class  ForeachStatementContext : public antlr4::ParserRuleContext {
  public:
    ForeachStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LParen();
    antlr4::tree::TerminalNode *Id();
    ExprContext *expr();
    antlr4::tree::TerminalNode *RParen();
    FunctionBlockContext *functionBlock();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForeachStatementContext* foreachStatement();

  class  FromStatementContext : public antlr4::ParserRuleContext {
  public:
    FromStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FromLabel();
    std::vector<antlr4::tree::TerminalNode *> Id();
    antlr4::tree::TerminalNode* Id(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Dot();
    antlr4::tree::TerminalNode* Dot(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FromStatementContext* fromStatement();

  class  ModuleStatementContext : public antlr4::ParserRuleContext {
  public:
    ModuleStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ModuleLabel();
    std::vector<antlr4::tree::TerminalNode *> Id();
    antlr4::tree::TerminalNode* Id(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Dot();
    antlr4::tree::TerminalNode* Dot(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ModuleStatementContext* moduleStatement();

  class  LambdaMulLineContext : public antlr4::ParserRuleContext {
  public:
    LambdaMulLineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionBlockContext *functionBlock();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LambdaMulLineContext* lambdaMulLine();

  class  LambdaSingleLineContext : public antlr4::ParserRuleContext {
  public:
    LambdaSingleLineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionBlockEntryContext *functionBlockEntry();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LambdaSingleLineContext* lambdaSingleLine();

  class  LambdaBlockContext : public antlr4::ParserRuleContext {
  public:
    LambdaBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LambdaMulLineContext *lambdaMulLine();
    LambdaSingleLineContext *lambdaSingleLine();
    TypeContext *type();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LambdaBlockContext* lambdaBlock();

  class  LambdaStatementContext : public antlr4::ParserRuleContext {
  public:
    LambdaStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LParen();
    antlr4::tree::TerminalNode *RParen();
    LambdaBlockContext *lambdaBlock();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LambdaStatementContext* lambdaStatement();

  class  DoWhileStatementContext : public antlr4::ParserRuleContext {
  public:
    DoWhileStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionBlockContext *functionBlock();
    antlr4::tree::TerminalNode *LParen();
    ExprContext *expr();
    antlr4::tree::TerminalNode *RParen();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DoWhileStatementContext* doWhileStatement();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LambdaStatementContext *lambdaStatement();
    NullAccessStatementContext *nullAccessStatement();
    IfStatementContext *ifStatement();
    WhileStatementContext *whileStatement();
    ForStatementContext *forStatement();
    RangeWhileStatementContext *rangeWhileStatement();
    ForeachStatementContext *foreachStatement();
    CppgptStatementContext *cppgptStatement();
    ReturnStatementContext *returnStatement();
    EnumStatementContext *enumStatement();
    WhereStatementContext *whereStatement();
    BreakStatementContext *breakStatement();
    ContinueStatementContext *continueStatement();
    ClassDefineContext *classDefine();
    InterfaceStatementContext *interfaceStatement();
    DoWhileStatementContext *doWhileStatement();
    DeleteStatementContext *deleteStatement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  PointerDefineContext : public antlr4::ParserRuleContext {
  public:
    PointerDefineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Ptr();
    antlr4::tree::TerminalNode *Int();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PointerDefineContext* pointerDefine();

  class  VariableDefineContext : public antlr4::ParserRuleContext {
  public:
    VariableDefineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Id();
    antlr4::tree::TerminalNode *Var();
    antlr4::tree::TerminalNode *Ref();
    antlr4::tree::TerminalNode *Let();
    PointerDefineContext *pointerDefine();
    DecoratorContext *decorator();
    TypeContext *type();
    antlr4::tree::TerminalNode *Equal();
    ExprContext *expr();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableDefineContext* variableDefine();

  class  FunctionTemplateContext : public antlr4::ParserRuleContext {
  public:
    FunctionTemplateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TemplateDefineStatementContext *templateDefineStatement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionTemplateContext* functionTemplate();

  class  FunctionReturnTypeContext : public antlr4::ParserRuleContext {
  public:
    FunctionReturnTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Var();
    antlr4::tree::TerminalNode *Ref();
    antlr4::tree::TerminalNode *Let();
    antlr4::tree::TerminalNode *Ptr();
    TypeContext *type();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionReturnTypeContext* functionReturnType();

  class  FunctionDefineContext : public antlr4::ParserRuleContext {
  public:
    FunctionDefineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Fn();
    antlr4::tree::TerminalNode *Id();
    antlr4::tree::TerminalNode *LParen();
    antlr4::tree::TerminalNode *RParen();
    FunctionBlockContext *functionBlock();
    antlr4::tree::TerminalNode *End();
    DecoratorContext *decorator();
    FunctionTemplateContext *functionTemplate();
    AgrumentListContext *agrumentList();
    antlr4::tree::TerminalNode *LTo();
    FunctionReturnTypeContext *functionReturnType();

    bool Override = false;
    bool PureVirtual = false;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionDefineContext* functionDefine();

  class  ClassInherfTypeContext : public antlr4::ParserRuleContext {
  public:
    ClassInherfTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *InherfPublic();
    antlr4::tree::TerminalNode *InherfPrivate();
    antlr4::tree::TerminalNode *Interface();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassInherfTypeContext* classInherfType();

  class  ClassInherfEntryContext : public antlr4::ParserRuleContext {
  public:
    ClassInherfEntryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    ClassInherfTypeContext *classInherfType();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassInherfEntryContext* classInherfEntry();

  class  ClassInherfContext : public antlr4::ParserRuleContext {
  public:
    ClassInherfContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RTo();
    std::vector<ClassInherfEntryContext *> classInherfEntry();
    ClassInherfEntryContext* classInherfEntry(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassInherfContext* classInherf();

  class  ClassDefineContext : public antlr4::ParserRuleContext {
  public:
    ClassDefineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ClassDefineContext() = default;
    void copyFrom(ClassDefineContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  DefineContext : public ClassDefineContext {
  public:
    DefineContext(ClassDefineContext *ctx);

    antlr4::tree::TerminalNode *Class();
    antlr4::tree::TerminalNode *Id();
    ClassBlockContext *classBlock();
    DecoratorContext *decorator();
    TemplateDefineStatementContext *templateDefineStatement();
    ClassInherfContext *classInherf();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PreDefineContext : public ClassDefineContext {
  public:
    PreDefineContext(ClassDefineContext *ctx);

    antlr4::tree::TerminalNode *Class();
    antlr4::tree::TerminalNode *Id();
    antlr4::tree::TerminalNode *End();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ClassDefineContext* classDefine();

  class  AgrumentListContext : public antlr4::ParserRuleContext {
  public:
    AgrumentListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<VariableDefineContext *> variableDefine();
    VariableDefineContext* variableDefine(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AgrumentListContext* agrumentList();

  class  FunctionBlockEntryContext : public antlr4::ParserRuleContext {
  public:
    FunctionBlockEntryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementContext *statement();
    antlr4::tree::TerminalNode *End();
    ExprContext *expr();
    VariableDefineContext *variableDefine();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionBlockEntryContext* functionBlockEntry();

  class  FunctionBlockContext : public antlr4::ParserRuleContext {
  public:
    FunctionBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FunctionBlockEntryContext *> functionBlockEntry();
    FunctionBlockEntryContext* functionBlockEntry(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionBlockContext* functionBlock();

  class  DecoratorContext : public antlr4::ParserRuleContext {
  public:
    DecoratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Id();
    antlr4::tree::TerminalNode* Id(size_t i);
    antlr4::tree::TerminalNode *LParen();
    antlr4::tree::TerminalNode *RParen();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DecoratorContext* decorator();

  class  CppgptStatementContext : public antlr4::ParserRuleContext {
  public:
    CppgptStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LParen();
    antlr4::tree::TerminalNode *String();
    antlr4::tree::TerminalNode *RParen();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CppgptStatementContext* cppgptStatement();

  class  LambdaOrFunctionContext : public antlr4::ParserRuleContext {
  public:
    LambdaOrFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LambdaBlockContext *lambdaBlock();
    FunctionBlockContext *functionBlock();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LambdaOrFunctionContext* lambdaOrFunction();

  class  ClassInitInstanceContext : public antlr4::ParserRuleContext {
  public:
    ClassInitInstanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Id();
    antlr4::tree::TerminalNode *LParen();
    antlr4::tree::TerminalNode *RParen();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassInitInstanceContext* classInitInstance();

  class  ClassInitListContext : public antlr4::ParserRuleContext {
  public:
    ClassInitListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ClassInitInstanceContext *> classInitInstance();
    ClassInitInstanceContext* classInitInstance(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassInitListContext* classInitList();

  class  ClassBuildFunctionContext : public antlr4::ParserRuleContext {
  public:
    ClassBuildFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Id();
    antlr4::tree::TerminalNode *LParen();
    antlr4::tree::TerminalNode *RParen();
    LambdaOrFunctionContext *lambdaOrFunction();
    AgrumentListContext *agrumentList();
    antlr4::tree::TerminalNode *LTo();
    ClassInitListContext *classInitList();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassBuildFunctionContext* classBuildFunction();

  class  ClassDesotryFunctionContext : public antlr4::ParserRuleContext {
  public:
    ClassDesotryFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Id();
    antlr4::tree::TerminalNode *LParen();
    antlr4::tree::TerminalNode *RParen();
    LambdaOrFunctionContext *lambdaOrFunction();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassDesotryFunctionContext* classDesotryFunction();

  class  ClassBlockEntryContext : public antlr4::ParserRuleContext {
  public:
    ClassBlockEntryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableDefineContext *variableDefine();
    antlr4::tree::TerminalNode *End();
    OperatorEntryContext *operatorEntry();
    FunctionDefineContext *functionDefine();
    ClassBuildFunctionContext *classBuildFunction();
    ClassDesotryFunctionContext *classDesotryFunction();
    antlr4::tree::TerminalNode *Override();
    antlr4::tree::TerminalNode *Virtual();
    antlr4::tree::TerminalNode *Static();
    antlr4::tree::TerminalNode *Public();
    antlr4::tree::TerminalNode *Private();
    antlr4::tree::TerminalNode *Protected();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassBlockEntryContext* classBlockEntry();

  class  OperatbleSymbolContext : public antlr4::ParserRuleContext {
  public:
    OperatbleSymbolContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DoubleAdd();
    antlr4::tree::TerminalNode *DoubleMinus();
    antlr4::tree::TerminalNode *Plus();
    antlr4::tree::TerminalNode *Minus();
    antlr4::tree::TerminalNode *Multiply();
    antlr4::tree::TerminalNode *Divide();
    antlr4::tree::TerminalNode *Mod();
    antlr4::tree::TerminalNode *Fn();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OperatbleSymbolContext* operatbleSymbol();

  class  OperatorEntryContext : public antlr4::ParserRuleContext {
  public:
    OperatorEntryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Opeartor();
    OperatbleSymbolContext *operatbleSymbol();
    antlr4::tree::TerminalNode *LParen();
    antlr4::tree::TerminalNode *RParen();
    antlr4::tree::TerminalNode *LTo();
    FunctionBlockContext *functionBlock();
    std::vector<AgrumentListContext *> agrumentList();
    AgrumentListContext* agrumentList(size_t i);
    FunctionReturnTypeContext *functionReturnType();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OperatorEntryContext* operatorEntry();

  class  ClassBlockContext : public antlr4::ParserRuleContext {
  public:
    ClassBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ClassBlockEntryContext *> classBlockEntry();
    ClassBlockEntryContext* classBlockEntry(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassBlockContext* classBlock();

  class  WhereCaseContext : public antlr4::ParserRuleContext {
  public:
    WhereCaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Case();
    ExprContext *expr();
    LambdaOrFunctionContext *lambdaOrFunction();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhereCaseContext* whereCase();

  class  WhereBlockContext : public antlr4::ParserRuleContext {
  public:
    WhereBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<WhereCaseContext *> whereCase();
    WhereCaseContext* whereCase(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhereBlockContext* whereBlock();

  class  WhereStatementContext : public antlr4::ParserRuleContext {
  public:
    WhereStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LParen();
    ExprContext *expr();
    antlr4::tree::TerminalNode *RParen();
    WhereBlockContext *whereBlock();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhereStatementContext* whereStatement();

  class  SingleTypeContext : public antlr4::ParserRuleContext {
  public:
    SingleTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Id();
    TemplateCallStatementContext *templateCallStatement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SingleTypeContext* singleType();

  class  NormalTypeContext : public antlr4::ParserRuleContext {
  public:
    NormalTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SingleTypeContext *> singleType();
    SingleTypeContext* singleType(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Dot();
    antlr4::tree::TerminalNode* Dot(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NormalTypeContext* normalType();

  class  ArrayTypeContext : public antlr4::ParserRuleContext {
  public:
    ArrayTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Id();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArrayTypeContext* arrayType();

  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NormalTypeContext *normalType();
    ArrayTypeContext *arrayType();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeContext* type();

  class  CppLiteralContext : public antlr4::ParserRuleContext {
  public:
    CppLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CppRaw();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CppLiteralContext* cppLiteral();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool exprSempred(ExprContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

