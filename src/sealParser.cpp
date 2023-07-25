
// Generated from Z:/seal-the-lang\seal.g4 by ANTLR 4.12.0


#include "sealVisitor.h"

#include "sealParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct SealParserStaticData final {
  SealParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  SealParserStaticData(const SealParserStaticData&) = delete;
  SealParserStaticData(SealParserStaticData&&) = delete;
  SealParserStaticData& operator=(const SealParserStaticData&) = delete;
  SealParserStaticData& operator=(SealParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag sealParserOnceFlag;
SealParserStaticData *sealParserStaticData = nullptr;

void sealParserInitialize() {
  assert(sealParserStaticData == nullptr);
  auto staticData = std::make_unique<SealParserStaticData>(
    std::vector<std::string>{
      "start", "statementBody", "initListObject", "expr", "templateCallStatement", 
      "templateDefineStatement", "nullAccessStatement", "initStatement", 
      "returnStatement", "elifStatement", "elseStatement", "ifStatement", 
      "breakStatement", "continueStatement", "enumEntry", "enumStatement", 
      "deleteStatement", "whileStatement", "rangeWhileStatement", "forStatement", 
      "interfaceBlock", "interfaceStatement", "foreachStatement", "fromStatement", 
      "moduleStatement", "lambdaMulLine", "lambdaSingleLine", "lambdaBlock", 
      "lambdaStatement", "doWhileStatement", "statement", "pointerDefine", 
      "variableDefine", "functionTemplate", "functionReturnType", "functionDefine", 
      "classInherfType", "classInherfEntry", "classInherf", "classDefine", 
      "agrumentList", "functionBlockEntry", "functionBlock", "decorator", 
      "cppgptStatement", "lambdaOrFunction", "classInitInstance", "classInitList", 
      "classBuildFunction", "classDesotryFunction", "classBlockEntry", "operatbleSymbol", 
      "operatorEntry", "classBlock", "whereCase", "whereBlock", "whereStatement", 
      "singleType", "normalType", "arrayType", "type", "cppLiteral"
    },
    std::vector<std::string>{
      "", "'['", "']'", "','", "'::'", "'new'", "'{'", "'}'", "'=='", "'&&'", 
      "'||'", "'!'", "'return'", "'enum'", "'delete'", "'while'", "'for'", 
      "'foreach'", "'in'", "'=>'", "'do'", "':'", "'parad'", "'@'", "'@cppgpt'", 
      "'~'", "'where'", "", "'@from'", "'@module'", "'.'", "'var'", "'ptr'", 
      "'let'", "'ref'", "'fn'", "", "", "", "", "'+'", "'-'", "'*'", "'%'", 
      "'/'", "'('", "')'", "'->'", "'<-'", "'if'", "'elif'", "'else'", "'true'", 
      "'false'", "'++'", "'--'", "'+='", "'-='", "'/='", "'*='", "';'", 
      "'='", "'%='", "'&='", "'!='", "'<'", "'>'", "'interface'", "'@public'", 
      "'@protected'", "'@private'", "'public'", "'private'", "'@virtual'", 
      "'@override'", "'@static'", "'break'", "'continue'", "'class'", "'case'", 
      "'to'", "'<='", "'>='", "'&'", "'operator'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "CppRaw", "FromLabel", "ModuleLabel", 
      "Dot", "Var", "Ptr", "Let", "Ref", "Fn", "WS", "Int", "Float", "HexNumber", 
      "Plus", "Minus", "Multiply", "Mod", "Divide", "LParen", "RParen", 
      "LTo", "RTo", "If", "Elif", "Else", "True", "False", "DoubleAdd", 
      "DoubleMinus", "AddEqual", "MinusEqual", "DivEqual", "MulEqual", "End", 
      "Equal", "EMol", "EAnd", "NotEqual", "LTemplate", "RTemplate", "Interface", 
      "Public", "Protected", "Private", "InherfPublic", "InherfPrivate", 
      "Virtual", "Override", "Static", "Break", "Continue", "Class", "Case", 
      "To", "Leq", "Geq", "RefOp", "Opeartor", "String", "Id", "MULTI_LINE_COMMENT", 
      "SINGLE_LINE_COMMENT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,88,743,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,7,
  	42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,2,48,7,48,2,49,7,
  	49,2,50,7,50,2,51,7,51,2,52,7,52,2,53,7,53,2,54,7,54,2,55,7,55,2,56,7,
  	56,2,57,7,57,2,58,7,58,2,59,7,59,2,60,7,60,2,61,7,61,1,0,5,0,126,8,0,
  	10,0,12,0,129,9,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,3,1,148,8,1,1,2,1,2,1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,3,1,
  	3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,5,3,168,8,3,10,3,12,3,171,9,3,1,3,1,3,1,
  	3,1,3,1,3,1,3,5,3,179,8,3,10,3,12,3,182,9,3,1,3,1,3,1,3,1,3,1,3,1,3,1,
  	3,1,3,1,3,1,3,1,3,1,3,1,3,3,3,197,8,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,
  	1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,
  	3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,
  	1,3,3,3,243,8,3,1,3,1,3,1,3,1,3,5,3,249,8,3,10,3,12,3,252,9,3,3,3,254,
  	8,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,5,3,266,8,3,10,3,12,3,269,
  	9,3,1,4,1,4,1,4,1,4,5,4,275,8,4,10,4,12,4,278,9,4,1,4,1,4,1,5,1,5,1,5,
  	1,5,1,5,1,5,5,5,288,8,5,10,5,12,5,291,9,5,1,5,1,5,1,6,1,6,1,6,1,6,1,7,
  	1,7,3,7,301,8,7,1,8,1,8,1,8,1,8,1,9,1,9,1,9,1,9,1,9,1,9,1,10,1,10,1,10,
  	1,11,1,11,1,11,1,11,1,11,1,11,5,11,322,8,11,10,11,12,11,325,9,11,1,11,
  	3,11,328,8,11,1,12,1,12,1,12,1,13,1,13,1,13,1,14,1,14,1,14,5,14,339,8,
  	14,10,14,12,14,342,9,14,1,15,1,15,1,15,1,15,1,15,1,15,1,16,1,16,1,16,
  	1,17,1,17,1,17,1,17,1,17,1,17,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,
  	1,19,1,19,1,19,3,19,370,8,19,1,19,1,19,3,19,374,8,19,1,19,1,19,3,19,378,
  	8,19,1,19,1,19,1,19,1,20,1,20,5,20,385,8,20,10,20,12,20,388,9,20,1,20,
  	1,20,1,21,3,21,393,8,21,1,21,1,21,1,21,1,21,1,22,1,22,1,22,1,22,1,22,
  	1,22,1,22,1,22,1,23,1,23,1,23,1,23,5,23,411,8,23,10,23,12,23,414,9,23,
  	1,24,1,24,1,24,1,24,5,24,420,8,24,10,24,12,24,423,9,24,1,25,1,25,1,26,
  	1,26,1,27,1,27,3,27,431,8,27,1,27,1,27,3,27,435,8,27,1,28,1,28,1,28,1,
  	28,5,28,441,8,28,10,28,12,28,444,9,28,3,28,446,8,28,1,28,1,28,1,28,1,
  	29,1,29,1,29,1,29,1,29,1,29,1,29,1,30,1,30,1,30,1,30,1,30,1,30,1,30,1,
  	30,1,30,1,30,1,30,1,30,1,30,1,30,1,30,1,30,1,30,3,30,475,8,30,1,31,1,
  	31,1,31,1,31,3,31,481,8,31,1,32,3,32,484,8,32,1,32,1,32,1,32,1,32,3,32,
  	490,8,32,1,32,1,32,3,32,494,8,32,1,32,1,32,1,32,3,32,499,8,32,1,33,1,
  	33,1,33,1,34,1,34,1,34,1,34,1,35,3,35,509,8,35,1,35,3,35,512,8,35,1,35,
  	1,35,1,35,1,35,3,35,518,8,35,1,35,1,35,1,35,3,35,523,8,35,1,35,1,35,3,
  	35,527,8,35,1,36,1,36,1,37,3,37,532,8,37,1,37,1,37,1,38,1,38,1,38,1,38,
  	5,38,540,8,38,10,38,12,38,543,9,38,1,39,3,39,546,8,39,1,39,1,39,1,39,
  	3,39,551,8,39,1,39,3,39,554,8,39,1,39,1,39,1,39,1,39,3,39,560,8,39,1,
  	40,1,40,1,40,5,40,565,8,40,10,40,12,40,568,9,40,1,41,1,41,1,41,3,41,573,
  	8,41,1,41,1,41,3,41,577,8,41,1,42,1,42,5,42,581,8,42,10,42,12,42,584,
  	9,42,1,42,1,42,1,43,1,43,1,43,1,43,1,43,3,43,593,8,43,1,44,1,44,1,44,
  	1,44,1,44,1,45,1,45,3,45,602,8,45,1,46,1,46,1,46,3,46,607,8,46,1,46,1,
  	46,5,46,611,8,46,10,46,12,46,614,9,46,1,46,1,46,1,47,1,47,1,47,5,47,621,
  	8,47,10,47,12,47,624,9,47,1,48,1,48,1,48,3,48,629,8,48,1,48,1,48,1,48,
  	3,48,634,8,48,1,48,1,48,1,49,1,49,1,49,1,49,1,49,1,49,1,50,3,50,645,8,
  	50,1,50,1,50,1,50,1,50,3,50,651,8,50,1,50,1,50,1,50,1,50,1,50,1,50,1,
  	50,3,50,660,8,50,1,51,1,51,1,52,1,52,1,52,1,52,5,52,668,8,52,10,52,12,
  	52,671,9,52,1,52,1,52,1,52,3,52,676,8,52,1,52,1,52,1,53,1,53,5,53,682,
  	8,53,10,53,12,53,685,9,53,1,53,1,53,1,54,1,54,1,54,1,54,1,54,1,55,1,55,
  	1,55,5,55,697,8,55,10,55,12,55,700,9,55,1,55,1,55,1,56,1,56,1,56,1,56,
  	1,56,1,56,1,57,1,57,3,57,712,8,57,1,58,1,58,1,58,3,58,717,8,58,5,58,719,
  	8,58,10,58,12,58,722,9,58,1,59,1,59,1,59,1,59,1,59,1,59,1,59,1,59,5,59,
  	732,8,59,10,59,12,59,735,9,59,1,60,1,60,3,60,739,8,60,1,61,1,61,1,61,
  	1,566,1,6,62,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,
  	42,44,46,48,50,52,54,56,58,60,62,64,66,68,70,72,74,76,78,80,82,84,86,
  	88,90,92,94,96,98,100,102,104,106,108,110,112,114,116,118,120,122,0,9,
  	1,0,54,55,1,0,42,44,1,0,40,41,2,0,65,66,81,82,3,0,56,59,61,62,64,64,1,
  	0,31,34,2,0,67,67,71,72,1,0,68,70,3,0,35,35,40,44,54,55,811,0,127,1,0,
  	0,0,2,147,1,0,0,0,4,149,1,0,0,0,6,196,1,0,0,0,8,270,1,0,0,0,10,281,1,
  	0,0,0,12,294,1,0,0,0,14,300,1,0,0,0,16,302,1,0,0,0,18,306,1,0,0,0,20,
  	312,1,0,0,0,22,315,1,0,0,0,24,329,1,0,0,0,26,332,1,0,0,0,28,335,1,0,0,
  	0,30,343,1,0,0,0,32,349,1,0,0,0,34,352,1,0,0,0,36,358,1,0,0,0,38,366,
  	1,0,0,0,40,382,1,0,0,0,42,392,1,0,0,0,44,398,1,0,0,0,46,406,1,0,0,0,48,
  	415,1,0,0,0,50,424,1,0,0,0,52,426,1,0,0,0,54,428,1,0,0,0,56,436,1,0,0,
  	0,58,450,1,0,0,0,60,474,1,0,0,0,62,476,1,0,0,0,64,483,1,0,0,0,66,500,
  	1,0,0,0,68,503,1,0,0,0,70,508,1,0,0,0,72,528,1,0,0,0,74,531,1,0,0,0,76,
  	535,1,0,0,0,78,559,1,0,0,0,80,561,1,0,0,0,82,576,1,0,0,0,84,578,1,0,0,
  	0,86,587,1,0,0,0,88,594,1,0,0,0,90,601,1,0,0,0,92,603,1,0,0,0,94,617,
  	1,0,0,0,96,625,1,0,0,0,98,637,1,0,0,0,100,644,1,0,0,0,102,661,1,0,0,0,
  	104,663,1,0,0,0,106,679,1,0,0,0,108,688,1,0,0,0,110,693,1,0,0,0,112,703,
  	1,0,0,0,114,709,1,0,0,0,116,713,1,0,0,0,118,723,1,0,0,0,120,738,1,0,0,
  	0,122,740,1,0,0,0,124,126,3,2,1,0,125,124,1,0,0,0,126,129,1,0,0,0,127,
  	125,1,0,0,0,127,128,1,0,0,0,128,1,1,0,0,0,129,127,1,0,0,0,130,148,3,122,
  	61,0,131,132,3,64,32,0,132,133,5,60,0,0,133,148,1,0,0,0,134,148,3,12,
  	6,0,135,148,3,56,28,0,136,148,3,46,23,0,137,148,3,70,35,0,138,148,3,78,
  	39,0,139,148,3,48,24,0,140,148,3,30,15,0,141,148,3,112,56,0,142,148,3,
  	24,12,0,143,148,3,26,13,0,144,148,3,42,21,0,145,148,3,58,29,0,146,148,
  	3,32,16,0,147,130,1,0,0,0,147,131,1,0,0,0,147,134,1,0,0,0,147,135,1,0,
  	0,0,147,136,1,0,0,0,147,137,1,0,0,0,147,138,1,0,0,0,147,139,1,0,0,0,147,
  	140,1,0,0,0,147,141,1,0,0,0,147,142,1,0,0,0,147,143,1,0,0,0,147,144,1,
  	0,0,0,147,145,1,0,0,0,147,146,1,0,0,0,148,3,1,0,0,0,149,150,5,86,0,0,
  	150,151,5,61,0,0,151,152,3,6,3,0,152,5,1,0,0,0,153,154,6,3,-1,0,154,197,
  	3,122,61,0,155,156,5,83,0,0,156,197,3,6,3,26,157,158,7,0,0,0,158,197,
  	3,6,3,21,159,160,5,5,0,0,160,197,3,6,3,18,161,162,5,42,0,0,162,197,3,
  	6,3,17,163,164,5,6,0,0,164,169,3,6,3,0,165,166,5,3,0,0,166,168,3,6,3,
  	0,167,165,1,0,0,0,168,171,1,0,0,0,169,167,1,0,0,0,169,170,1,0,0,0,170,
  	172,1,0,0,0,171,169,1,0,0,0,172,173,5,7,0,0,173,197,1,0,0,0,174,175,5,
  	6,0,0,175,180,3,4,2,0,176,177,5,3,0,0,177,179,3,4,2,0,178,176,1,0,0,0,
  	179,182,1,0,0,0,180,178,1,0,0,0,180,181,1,0,0,0,181,183,1,0,0,0,182,180,
  	1,0,0,0,183,184,5,7,0,0,184,197,1,0,0,0,185,197,5,52,0,0,186,197,5,53,
  	0,0,187,188,5,45,0,0,188,189,3,6,3,0,189,190,5,46,0,0,190,197,1,0,0,0,
  	191,197,5,86,0,0,192,197,5,37,0,0,193,197,5,38,0,0,194,197,5,39,0,0,195,
  	197,5,85,0,0,196,153,1,0,0,0,196,155,1,0,0,0,196,157,1,0,0,0,196,159,
  	1,0,0,0,196,161,1,0,0,0,196,163,1,0,0,0,196,174,1,0,0,0,196,185,1,0,0,
  	0,196,186,1,0,0,0,196,187,1,0,0,0,196,191,1,0,0,0,196,192,1,0,0,0,196,
  	193,1,0,0,0,196,194,1,0,0,0,196,195,1,0,0,0,197,267,1,0,0,0,198,199,10,
  	31,0,0,199,200,5,80,0,0,200,266,3,6,3,32,201,202,10,30,0,0,202,203,5,
  	80,0,0,203,204,5,1,0,0,204,205,5,61,0,0,205,206,5,2,0,0,206,266,3,6,3,
  	31,207,208,10,25,0,0,208,209,5,30,0,0,209,266,3,6,3,26,210,211,10,24,
  	0,0,211,212,5,47,0,0,212,266,3,6,3,25,213,214,10,23,0,0,214,215,5,4,0,
  	0,215,266,3,6,3,24,216,217,10,20,0,0,217,218,7,1,0,0,218,266,3,6,3,21,
  	219,220,10,19,0,0,220,221,7,2,0,0,221,266,3,6,3,20,222,223,10,14,0,0,
  	223,224,7,3,0,0,224,266,3,6,3,15,225,226,10,13,0,0,226,227,5,8,0,0,227,
  	266,3,6,3,14,228,229,10,12,0,0,229,230,5,9,0,0,230,266,3,6,3,13,231,232,
  	10,11,0,0,232,233,5,9,0,0,233,266,3,6,3,12,234,235,10,10,0,0,235,236,
  	5,10,0,0,236,266,3,6,3,11,237,238,10,9,0,0,238,239,7,4,0,0,239,266,3,
  	6,3,9,240,242,10,29,0,0,241,243,3,8,4,0,242,241,1,0,0,0,242,243,1,0,0,
  	0,243,244,1,0,0,0,244,253,5,45,0,0,245,250,3,6,3,0,246,247,5,3,0,0,247,
  	249,3,6,3,0,248,246,1,0,0,0,249,252,1,0,0,0,250,248,1,0,0,0,250,251,1,
  	0,0,0,251,254,1,0,0,0,252,250,1,0,0,0,253,245,1,0,0,0,253,254,1,0,0,0,
  	254,255,1,0,0,0,255,266,5,46,0,0,256,257,10,28,0,0,257,258,5,1,0,0,258,
  	259,3,6,3,0,259,260,5,2,0,0,260,266,1,0,0,0,261,262,10,27,0,0,262,266,
  	3,8,4,0,263,264,10,22,0,0,264,266,7,0,0,0,265,198,1,0,0,0,265,201,1,0,
  	0,0,265,207,1,0,0,0,265,210,1,0,0,0,265,213,1,0,0,0,265,216,1,0,0,0,265,
  	219,1,0,0,0,265,222,1,0,0,0,265,225,1,0,0,0,265,228,1,0,0,0,265,231,1,
  	0,0,0,265,234,1,0,0,0,265,237,1,0,0,0,265,240,1,0,0,0,265,256,1,0,0,0,
  	265,261,1,0,0,0,265,263,1,0,0,0,266,269,1,0,0,0,267,265,1,0,0,0,267,268,
  	1,0,0,0,268,7,1,0,0,0,269,267,1,0,0,0,270,271,5,65,0,0,271,276,3,120,
  	60,0,272,273,5,3,0,0,273,275,3,120,60,0,274,272,1,0,0,0,275,278,1,0,0,
  	0,276,274,1,0,0,0,276,277,1,0,0,0,277,279,1,0,0,0,278,276,1,0,0,0,279,
  	280,5,66,0,0,280,9,1,0,0,0,281,282,5,65,0,0,282,283,5,78,0,0,283,289,
  	5,86,0,0,284,285,5,3,0,0,285,286,5,78,0,0,286,288,5,86,0,0,287,284,1,
  	0,0,0,288,291,1,0,0,0,289,287,1,0,0,0,289,290,1,0,0,0,290,292,1,0,0,0,
  	291,289,1,0,0,0,292,293,5,66,0,0,293,11,1,0,0,0,294,295,3,6,3,0,295,296,
  	5,11,0,0,296,297,3,84,42,0,297,13,1,0,0,0,298,301,3,6,3,0,299,301,3,64,
  	32,0,300,298,1,0,0,0,300,299,1,0,0,0,301,15,1,0,0,0,302,303,5,12,0,0,
  	303,304,3,6,3,0,304,305,5,60,0,0,305,17,1,0,0,0,306,307,5,50,0,0,307,
  	308,5,45,0,0,308,309,3,6,3,0,309,310,5,46,0,0,310,311,3,84,42,0,311,19,
  	1,0,0,0,312,313,5,51,0,0,313,314,3,84,42,0,314,21,1,0,0,0,315,316,5,49,
  	0,0,316,317,5,45,0,0,317,318,3,6,3,0,318,319,5,46,0,0,319,323,3,84,42,
  	0,320,322,3,18,9,0,321,320,1,0,0,0,322,325,1,0,0,0,323,321,1,0,0,0,323,
  	324,1,0,0,0,324,327,1,0,0,0,325,323,1,0,0,0,326,328,3,20,10,0,327,326,
  	1,0,0,0,327,328,1,0,0,0,328,23,1,0,0,0,329,330,5,76,0,0,330,331,5,60,
  	0,0,331,25,1,0,0,0,332,333,5,77,0,0,333,334,5,60,0,0,334,27,1,0,0,0,335,
  	340,5,86,0,0,336,337,5,3,0,0,337,339,5,86,0,0,338,336,1,0,0,0,339,342,
  	1,0,0,0,340,338,1,0,0,0,340,341,1,0,0,0,341,29,1,0,0,0,342,340,1,0,0,
  	0,343,344,5,13,0,0,344,345,5,86,0,0,345,346,5,6,0,0,346,347,3,28,14,0,
  	347,348,5,7,0,0,348,31,1,0,0,0,349,350,5,14,0,0,350,351,3,6,3,0,351,33,
  	1,0,0,0,352,353,5,15,0,0,353,354,5,45,0,0,354,355,3,6,3,0,355,356,5,46,
  	0,0,356,357,3,84,42,0,357,35,1,0,0,0,358,359,5,15,0,0,359,360,5,45,0,
  	0,360,361,3,6,3,0,361,362,5,47,0,0,362,363,5,86,0,0,363,364,5,46,0,0,
  	364,365,3,84,42,0,365,37,1,0,0,0,366,367,5,16,0,0,367,369,5,45,0,0,368,
  	370,3,14,7,0,369,368,1,0,0,0,369,370,1,0,0,0,370,371,1,0,0,0,371,373,
  	5,60,0,0,372,374,3,6,3,0,373,372,1,0,0,0,373,374,1,0,0,0,374,375,1,0,
  	0,0,375,377,5,60,0,0,376,378,3,6,3,0,377,376,1,0,0,0,377,378,1,0,0,0,
  	378,379,1,0,0,0,379,380,5,46,0,0,380,381,3,84,42,0,381,39,1,0,0,0,382,
  	386,5,6,0,0,383,385,3,70,35,0,384,383,1,0,0,0,385,388,1,0,0,0,386,384,
  	1,0,0,0,386,387,1,0,0,0,387,389,1,0,0,0,388,386,1,0,0,0,389,390,5,7,0,
  	0,390,41,1,0,0,0,391,393,3,86,43,0,392,391,1,0,0,0,392,393,1,0,0,0,393,
  	394,1,0,0,0,394,395,5,67,0,0,395,396,5,86,0,0,396,397,3,40,20,0,397,43,
  	1,0,0,0,398,399,5,17,0,0,399,400,5,45,0,0,400,401,5,86,0,0,401,402,5,
  	18,0,0,402,403,3,6,3,0,403,404,5,46,0,0,404,405,3,84,42,0,405,45,1,0,
  	0,0,406,407,5,28,0,0,407,412,5,86,0,0,408,409,5,30,0,0,409,411,5,86,0,
  	0,410,408,1,0,0,0,411,414,1,0,0,0,412,410,1,0,0,0,412,413,1,0,0,0,413,
  	47,1,0,0,0,414,412,1,0,0,0,415,416,5,29,0,0,416,421,5,86,0,0,417,418,
  	5,30,0,0,418,420,5,86,0,0,419,417,1,0,0,0,420,423,1,0,0,0,421,419,1,0,
  	0,0,421,422,1,0,0,0,422,49,1,0,0,0,423,421,1,0,0,0,424,425,3,84,42,0,
  	425,51,1,0,0,0,426,427,3,82,41,0,427,53,1,0,0,0,428,430,5,19,0,0,429,
  	431,3,120,60,0,430,429,1,0,0,0,430,431,1,0,0,0,431,434,1,0,0,0,432,435,
  	3,50,25,0,433,435,3,52,26,0,434,432,1,0,0,0,434,433,1,0,0,0,435,55,1,
  	0,0,0,436,445,5,45,0,0,437,442,3,6,3,0,438,439,5,3,0,0,439,441,3,6,3,
  	0,440,438,1,0,0,0,441,444,1,0,0,0,442,440,1,0,0,0,442,443,1,0,0,0,443,
  	446,1,0,0,0,444,442,1,0,0,0,445,437,1,0,0,0,445,446,1,0,0,0,446,447,1,
  	0,0,0,447,448,5,46,0,0,448,449,3,54,27,0,449,57,1,0,0,0,450,451,5,20,
  	0,0,451,452,3,84,42,0,452,453,5,15,0,0,453,454,5,45,0,0,454,455,3,6,3,
  	0,455,456,5,46,0,0,456,59,1,0,0,0,457,475,3,56,28,0,458,475,3,12,6,0,
  	459,475,3,22,11,0,460,475,3,34,17,0,461,475,3,38,19,0,462,475,3,36,18,
  	0,463,475,3,44,22,0,464,475,3,88,44,0,465,475,3,16,8,0,466,475,3,30,15,
  	0,467,475,3,112,56,0,468,475,3,24,12,0,469,475,3,26,13,0,470,475,3,78,
  	39,0,471,475,3,42,21,0,472,475,3,58,29,0,473,475,3,32,16,0,474,457,1,
  	0,0,0,474,458,1,0,0,0,474,459,1,0,0,0,474,460,1,0,0,0,474,461,1,0,0,0,
  	474,462,1,0,0,0,474,463,1,0,0,0,474,464,1,0,0,0,474,465,1,0,0,0,474,466,
  	1,0,0,0,474,467,1,0,0,0,474,468,1,0,0,0,474,469,1,0,0,0,474,470,1,0,0,
  	0,474,471,1,0,0,0,474,472,1,0,0,0,474,473,1,0,0,0,475,61,1,0,0,0,476,
  	480,5,32,0,0,477,478,5,1,0,0,478,479,5,37,0,0,479,481,5,2,0,0,480,477,
  	1,0,0,0,480,481,1,0,0,0,481,63,1,0,0,0,482,484,3,86,43,0,483,482,1,0,
  	0,0,483,484,1,0,0,0,484,489,1,0,0,0,485,490,5,31,0,0,486,490,5,34,0,0,
  	487,490,5,33,0,0,488,490,3,62,31,0,489,485,1,0,0,0,489,486,1,0,0,0,489,
  	487,1,0,0,0,489,488,1,0,0,0,490,493,1,0,0,0,491,492,5,21,0,0,492,494,
  	3,120,60,0,493,491,1,0,0,0,493,494,1,0,0,0,494,495,1,0,0,0,495,498,5,
  	86,0,0,496,497,5,61,0,0,497,499,3,6,3,0,498,496,1,0,0,0,498,499,1,0,0,
  	0,499,65,1,0,0,0,500,501,5,22,0,0,501,502,3,10,5,0,502,67,1,0,0,0,503,
  	504,7,5,0,0,504,505,5,21,0,0,505,506,3,120,60,0,506,69,1,0,0,0,507,509,
  	3,86,43,0,508,507,1,0,0,0,508,509,1,0,0,0,509,511,1,0,0,0,510,512,3,66,
  	33,0,511,510,1,0,0,0,511,512,1,0,0,0,512,513,1,0,0,0,513,514,5,35,0,0,
  	514,515,5,86,0,0,515,517,5,45,0,0,516,518,3,80,40,0,517,516,1,0,0,0,517,
  	518,1,0,0,0,518,519,1,0,0,0,519,522,5,46,0,0,520,521,5,47,0,0,521,523,
  	3,68,34,0,522,520,1,0,0,0,522,523,1,0,0,0,523,526,1,0,0,0,524,527,3,84,
  	42,0,525,527,5,60,0,0,526,524,1,0,0,0,526,525,1,0,0,0,527,71,1,0,0,0,
  	528,529,7,6,0,0,529,73,1,0,0,0,530,532,3,72,36,0,531,530,1,0,0,0,531,
  	532,1,0,0,0,532,533,1,0,0,0,533,534,3,120,60,0,534,75,1,0,0,0,535,536,
  	5,48,0,0,536,541,3,74,37,0,537,538,5,3,0,0,538,540,3,74,37,0,539,537,
  	1,0,0,0,540,543,1,0,0,0,541,539,1,0,0,0,541,542,1,0,0,0,542,77,1,0,0,
  	0,543,541,1,0,0,0,544,546,3,86,43,0,545,544,1,0,0,0,545,546,1,0,0,0,546,
  	547,1,0,0,0,547,548,5,78,0,0,548,550,5,86,0,0,549,551,3,10,5,0,550,549,
  	1,0,0,0,550,551,1,0,0,0,551,553,1,0,0,0,552,554,3,76,38,0,553,552,1,0,
  	0,0,553,554,1,0,0,0,554,555,1,0,0,0,555,560,3,106,53,0,556,557,5,78,0,
  	0,557,558,5,86,0,0,558,560,5,60,0,0,559,545,1,0,0,0,559,556,1,0,0,0,560,
  	79,1,0,0,0,561,566,3,64,32,0,562,563,5,3,0,0,563,565,3,64,32,0,564,562,
  	1,0,0,0,565,568,1,0,0,0,566,567,1,0,0,0,566,564,1,0,0,0,567,81,1,0,0,
  	0,568,566,1,0,0,0,569,577,3,60,30,0,570,573,3,6,3,0,571,573,3,64,32,0,
  	572,570,1,0,0,0,572,571,1,0,0,0,573,574,1,0,0,0,574,575,5,60,0,0,575,
  	577,1,0,0,0,576,569,1,0,0,0,576,572,1,0,0,0,577,83,1,0,0,0,578,582,5,
  	6,0,0,579,581,3,82,41,0,580,579,1,0,0,0,581,584,1,0,0,0,582,580,1,0,0,
  	0,582,583,1,0,0,0,583,585,1,0,0,0,584,582,1,0,0,0,585,586,5,7,0,0,586,
  	85,1,0,0,0,587,588,5,23,0,0,588,592,5,86,0,0,589,590,5,45,0,0,590,591,
  	5,86,0,0,591,593,5,46,0,0,592,589,1,0,0,0,592,593,1,0,0,0,593,87,1,0,
  	0,0,594,595,5,24,0,0,595,596,5,45,0,0,596,597,5,85,0,0,597,598,5,46,0,
  	0,598,89,1,0,0,0,599,602,3,54,27,0,600,602,3,84,42,0,601,599,1,0,0,0,
  	601,600,1,0,0,0,602,91,1,0,0,0,603,604,5,86,0,0,604,606,5,45,0,0,605,
  	607,3,6,3,0,606,605,1,0,0,0,606,607,1,0,0,0,607,612,1,0,0,0,608,609,5,
  	3,0,0,609,611,3,6,3,0,610,608,1,0,0,0,611,614,1,0,0,0,612,610,1,0,0,0,
  	612,613,1,0,0,0,613,615,1,0,0,0,614,612,1,0,0,0,615,616,5,46,0,0,616,
  	93,1,0,0,0,617,622,3,92,46,0,618,619,5,3,0,0,619,621,3,92,46,0,620,618,
  	1,0,0,0,621,624,1,0,0,0,622,620,1,0,0,0,622,623,1,0,0,0,623,95,1,0,0,
  	0,624,622,1,0,0,0,625,626,5,86,0,0,626,628,5,45,0,0,627,629,3,80,40,0,
  	628,627,1,0,0,0,628,629,1,0,0,0,629,630,1,0,0,0,630,633,5,46,0,0,631,
  	632,5,47,0,0,632,634,3,94,47,0,633,631,1,0,0,0,633,634,1,0,0,0,634,635,
  	1,0,0,0,635,636,3,90,45,0,636,97,1,0,0,0,637,638,5,25,0,0,638,639,5,86,
  	0,0,639,640,5,45,0,0,640,641,5,46,0,0,641,642,3,90,45,0,642,99,1,0,0,
  	0,643,645,7,7,0,0,644,643,1,0,0,0,644,645,1,0,0,0,645,650,1,0,0,0,646,
  	651,1,0,0,0,647,651,5,74,0,0,648,651,5,73,0,0,649,651,5,75,0,0,650,646,
  	1,0,0,0,650,647,1,0,0,0,650,648,1,0,0,0,650,649,1,0,0,0,650,651,1,0,0,
  	0,651,659,1,0,0,0,652,653,3,64,32,0,653,654,5,60,0,0,654,660,1,0,0,0,
  	655,660,3,104,52,0,656,660,3,70,35,0,657,660,3,96,48,0,658,660,3,98,49,
  	0,659,652,1,0,0,0,659,655,1,0,0,0,659,656,1,0,0,0,659,657,1,0,0,0,659,
  	658,1,0,0,0,660,101,1,0,0,0,661,662,7,8,0,0,662,103,1,0,0,0,663,664,5,
  	84,0,0,664,665,3,102,51,0,665,669,5,45,0,0,666,668,3,80,40,0,667,666,
  	1,0,0,0,668,671,1,0,0,0,669,667,1,0,0,0,669,670,1,0,0,0,670,672,1,0,0,
  	0,671,669,1,0,0,0,672,673,5,46,0,0,673,675,5,47,0,0,674,676,3,68,34,0,
  	675,674,1,0,0,0,675,676,1,0,0,0,676,677,1,0,0,0,677,678,3,84,42,0,678,
  	105,1,0,0,0,679,683,5,6,0,0,680,682,3,100,50,0,681,680,1,0,0,0,682,685,
  	1,0,0,0,683,681,1,0,0,0,683,684,1,0,0,0,684,686,1,0,0,0,685,683,1,0,0,
  	0,686,687,5,7,0,0,687,107,1,0,0,0,688,689,5,79,0,0,689,690,3,6,3,0,690,
  	691,5,21,0,0,691,692,3,90,45,0,692,109,1,0,0,0,693,694,5,6,0,0,694,698,
  	3,108,54,0,695,697,3,108,54,0,696,695,1,0,0,0,697,700,1,0,0,0,698,696,
  	1,0,0,0,698,699,1,0,0,0,699,701,1,0,0,0,700,698,1,0,0,0,701,702,5,7,0,
  	0,702,111,1,0,0,0,703,704,5,26,0,0,704,705,5,45,0,0,705,706,3,6,3,0,706,
  	707,5,46,0,0,707,708,3,110,55,0,708,113,1,0,0,0,709,711,5,86,0,0,710,
  	712,3,8,4,0,711,710,1,0,0,0,711,712,1,0,0,0,712,115,1,0,0,0,713,720,3,
  	114,57,0,714,716,5,30,0,0,715,717,3,114,57,0,716,715,1,0,0,0,716,717,
  	1,0,0,0,717,719,1,0,0,0,718,714,1,0,0,0,719,722,1,0,0,0,720,718,1,0,0,
  	0,720,721,1,0,0,0,721,117,1,0,0,0,722,720,1,0,0,0,723,724,5,86,0,0,724,
  	725,5,1,0,0,725,726,3,6,3,0,726,733,5,2,0,0,727,728,5,1,0,0,728,729,3,
  	6,3,0,729,730,5,2,0,0,730,732,1,0,0,0,731,727,1,0,0,0,732,735,1,0,0,0,
  	733,731,1,0,0,0,733,734,1,0,0,0,734,119,1,0,0,0,735,733,1,0,0,0,736,739,
  	3,116,58,0,737,739,3,118,59,0,738,736,1,0,0,0,738,737,1,0,0,0,739,121,
  	1,0,0,0,740,741,5,27,0,0,741,123,1,0,0,0,67,127,147,169,180,196,242,250,
  	253,265,267,276,289,300,323,327,340,369,373,377,386,392,412,421,430,434,
  	442,445,474,480,483,489,493,498,508,511,517,522,526,531,541,545,550,553,
  	559,566,572,576,582,592,601,606,612,622,628,633,644,650,659,669,675,683,
  	698,711,716,720,733,738
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  sealParserStaticData = staticData.release();
}

}

sealParser::sealParser(TokenStream *input) : sealParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

sealParser::sealParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  sealParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *sealParserStaticData->atn, sealParserStaticData->decisionToDFA, sealParserStaticData->sharedContextCache, options);
}

sealParser::~sealParser() {
  delete _interpreter;
}

const atn::ATN& sealParser::getATN() const {
  return *sealParserStaticData->atn;
}

std::string sealParser::getGrammarFileName() const {
  return "seal.g4";
}

const std::vector<std::string>& sealParser::getRuleNames() const {
  return sealParserStaticData->ruleNames;
}

const dfa::Vocabulary& sealParser::getVocabulary() const {
  return sealParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView sealParser::getSerializedATN() const {
  return sealParserStaticData->serializedATN;
}


//----------------- StartContext ------------------------------------------------------------------

sealParser::StartContext::StartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<sealParser::StatementBodyContext *> sealParser::StartContext::statementBody() {
  return getRuleContexts<sealParser::StatementBodyContext>();
}

sealParser::StatementBodyContext* sealParser::StartContext::statementBody(size_t i) {
  return getRuleContext<sealParser::StatementBodyContext>(i);
}


size_t sealParser::StartContext::getRuleIndex() const {
  return sealParser::RuleStart;
}


std::any sealParser::StartContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitStart(this);
  else
    return visitor->visitChildren(this);
}

sealParser::StartContext* sealParser::start() {
  StartContext *_localctx = _tracker.createInstance<StartContext>(_ctx, getState());
  enterRule(_localctx, 0, sealParser::RuleStart);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(127);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 67594606494113888) != 0) || ((((_la - 67) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 67)) & 855553) != 0)) {
      setState(124);
      statementBody();
      setState(129);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementBodyContext ------------------------------------------------------------------

sealParser::StatementBodyContext::StatementBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sealParser::CppLiteralContext* sealParser::StatementBodyContext::cppLiteral() {
  return getRuleContext<sealParser::CppLiteralContext>(0);
}

sealParser::VariableDefineContext* sealParser::StatementBodyContext::variableDefine() {
  return getRuleContext<sealParser::VariableDefineContext>(0);
}

tree::TerminalNode* sealParser::StatementBodyContext::End() {
  return getToken(sealParser::End, 0);
}

sealParser::NullAccessStatementContext* sealParser::StatementBodyContext::nullAccessStatement() {
  return getRuleContext<sealParser::NullAccessStatementContext>(0);
}

sealParser::LambdaStatementContext* sealParser::StatementBodyContext::lambdaStatement() {
  return getRuleContext<sealParser::LambdaStatementContext>(0);
}

sealParser::FromStatementContext* sealParser::StatementBodyContext::fromStatement() {
  return getRuleContext<sealParser::FromStatementContext>(0);
}

sealParser::FunctionDefineContext* sealParser::StatementBodyContext::functionDefine() {
  return getRuleContext<sealParser::FunctionDefineContext>(0);
}

sealParser::ClassDefineContext* sealParser::StatementBodyContext::classDefine() {
  return getRuleContext<sealParser::ClassDefineContext>(0);
}

sealParser::ModuleStatementContext* sealParser::StatementBodyContext::moduleStatement() {
  return getRuleContext<sealParser::ModuleStatementContext>(0);
}

sealParser::EnumStatementContext* sealParser::StatementBodyContext::enumStatement() {
  return getRuleContext<sealParser::EnumStatementContext>(0);
}

sealParser::WhereStatementContext* sealParser::StatementBodyContext::whereStatement() {
  return getRuleContext<sealParser::WhereStatementContext>(0);
}

sealParser::BreakStatementContext* sealParser::StatementBodyContext::breakStatement() {
  return getRuleContext<sealParser::BreakStatementContext>(0);
}

sealParser::ContinueStatementContext* sealParser::StatementBodyContext::continueStatement() {
  return getRuleContext<sealParser::ContinueStatementContext>(0);
}

sealParser::InterfaceStatementContext* sealParser::StatementBodyContext::interfaceStatement() {
  return getRuleContext<sealParser::InterfaceStatementContext>(0);
}

sealParser::DoWhileStatementContext* sealParser::StatementBodyContext::doWhileStatement() {
  return getRuleContext<sealParser::DoWhileStatementContext>(0);
}

sealParser::DeleteStatementContext* sealParser::StatementBodyContext::deleteStatement() {
  return getRuleContext<sealParser::DeleteStatementContext>(0);
}


size_t sealParser::StatementBodyContext::getRuleIndex() const {
  return sealParser::RuleStatementBody;
}


std::any sealParser::StatementBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitStatementBody(this);
  else
    return visitor->visitChildren(this);
}

sealParser::StatementBodyContext* sealParser::statementBody() {
  StatementBodyContext *_localctx = _tracker.createInstance<StatementBodyContext>(_ctx, getState());
  enterRule(_localctx, 2, sealParser::RuleStatementBody);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(147);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(130);
      cppLiteral();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(131);
      variableDefine();
      setState(132);
      match(sealParser::End);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(134);
      nullAccessStatement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(135);
      lambdaStatement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(136);
      fromStatement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(137);
      functionDefine();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(138);
      classDefine();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(139);
      moduleStatement();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(140);
      enumStatement();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(141);
      whereStatement();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(142);
      breakStatement();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(143);
      continueStatement();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(144);
      interfaceStatement();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(145);
      doWhileStatement();
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(146);
      deleteStatement();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitListObjectContext ------------------------------------------------------------------

sealParser::InitListObjectContext::InitListObjectContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sealParser::InitListObjectContext::Id() {
  return getToken(sealParser::Id, 0);
}

tree::TerminalNode* sealParser::InitListObjectContext::Equal() {
  return getToken(sealParser::Equal, 0);
}

sealParser::ExprContext* sealParser::InitListObjectContext::expr() {
  return getRuleContext<sealParser::ExprContext>(0);
}


size_t sealParser::InitListObjectContext::getRuleIndex() const {
  return sealParser::RuleInitListObject;
}


std::any sealParser::InitListObjectContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitInitListObject(this);
  else
    return visitor->visitChildren(this);
}

sealParser::InitListObjectContext* sealParser::initListObject() {
  InitListObjectContext *_localctx = _tracker.createInstance<InitListObjectContext>(_ctx, getState());
  enterRule(_localctx, 4, sealParser::RuleInitListObject);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(149);
    match(sealParser::Id);
    setState(150);
    match(sealParser::Equal);
    setState(151);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

sealParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t sealParser::ExprContext::getRuleIndex() const {
  return sealParser::RuleExpr;
}

void sealParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- FalseTypeContext ------------------------------------------------------------------

tree::TerminalNode* sealParser::FalseTypeContext::False() {
  return getToken(sealParser::False, 0);
}

sealParser::FalseTypeContext::FalseTypeContext(ExprContext *ctx) { copyFrom(ctx); }


std::any sealParser::FalseTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitFalseType(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CppContext ------------------------------------------------------------------

sealParser::CppLiteralContext* sealParser::CppContext::cppLiteral() {
  return getRuleContext<sealParser::CppLiteralContext>(0);
}

sealParser::CppContext::CppContext(ExprContext *ctx) { copyFrom(ctx); }


std::any sealParser::CppContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitCpp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- VisitorContext ------------------------------------------------------------------

std::vector<sealParser::ExprContext *> sealParser::VisitorContext::expr() {
  return getRuleContexts<sealParser::ExprContext>();
}

sealParser::ExprContext* sealParser::VisitorContext::expr(size_t i) {
  return getRuleContext<sealParser::ExprContext>(i);
}

sealParser::VisitorContext::VisitorContext(ExprContext *ctx) { copyFrom(ctx); }


std::any sealParser::VisitorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitVisitor(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LogicOpeartionContext ------------------------------------------------------------------

std::vector<sealParser::ExprContext *> sealParser::LogicOpeartionContext::expr() {
  return getRuleContexts<sealParser::ExprContext>();
}

sealParser::ExprContext* sealParser::LogicOpeartionContext::expr(size_t i) {
  return getRuleContext<sealParser::ExprContext>(i);
}

tree::TerminalNode* sealParser::LogicOpeartionContext::Leq() {
  return getToken(sealParser::Leq, 0);
}

tree::TerminalNode* sealParser::LogicOpeartionContext::Geq() {
  return getToken(sealParser::Geq, 0);
}

tree::TerminalNode* sealParser::LogicOpeartionContext::LTemplate() {
  return getToken(sealParser::LTemplate, 0);
}

tree::TerminalNode* sealParser::LogicOpeartionContext::RTemplate() {
  return getToken(sealParser::RTemplate, 0);
}

sealParser::LogicOpeartionContext::LogicOpeartionContext(ExprContext *ctx) { copyFrom(ctx); }


std::any sealParser::LogicOpeartionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitLogicOpeartion(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ConstantStringContext ------------------------------------------------------------------

tree::TerminalNode* sealParser::ConstantStringContext::String() {
  return getToken(sealParser::String, 0);
}

sealParser::ConstantStringContext::ConstantStringContext(ExprContext *ctx) { copyFrom(ctx); }


std::any sealParser::ConstantStringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitConstantString(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CallVariableContext ------------------------------------------------------------------

std::vector<sealParser::ExprContext *> sealParser::CallVariableContext::expr() {
  return getRuleContexts<sealParser::ExprContext>();
}

sealParser::ExprContext* sealParser::CallVariableContext::expr(size_t i) {
  return getRuleContext<sealParser::ExprContext>(i);
}

tree::TerminalNode* sealParser::CallVariableContext::Dot() {
  return getToken(sealParser::Dot, 0);
}

sealParser::CallVariableContext::CallVariableContext(ExprContext *ctx) { copyFrom(ctx); }


std::any sealParser::CallVariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitCallVariable(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RangeExpressionContext ------------------------------------------------------------------

std::vector<sealParser::ExprContext *> sealParser::RangeExpressionContext::expr() {
  return getRuleContexts<sealParser::ExprContext>();
}

sealParser::ExprContext* sealParser::RangeExpressionContext::expr(size_t i) {
  return getRuleContext<sealParser::ExprContext>(i);
}

tree::TerminalNode* sealParser::RangeExpressionContext::To() {
  return getToken(sealParser::To, 0);
}

sealParser::RangeExpressionContext::RangeExpressionContext(ExprContext *ctx) { copyFrom(ctx); }


std::any sealParser::RangeExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitRangeExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArrayCallContext ------------------------------------------------------------------

std::vector<sealParser::ExprContext *> sealParser::ArrayCallContext::expr() {
  return getRuleContexts<sealParser::ExprContext>();
}

sealParser::ExprContext* sealParser::ArrayCallContext::expr(size_t i) {
  return getRuleContext<sealParser::ExprContext>(i);
}

sealParser::ArrayCallContext::ArrayCallContext(ExprContext *ctx) { copyFrom(ctx); }


std::any sealParser::ArrayCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitArrayCall(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BackSelfOperationContext ------------------------------------------------------------------

sealParser::ExprContext* sealParser::BackSelfOperationContext::expr() {
  return getRuleContext<sealParser::ExprContext>(0);
}

tree::TerminalNode* sealParser::BackSelfOperationContext::DoubleAdd() {
  return getToken(sealParser::DoubleAdd, 0);
}

tree::TerminalNode* sealParser::BackSelfOperationContext::DoubleMinus() {
  return getToken(sealParser::DoubleMinus, 0);
}

sealParser::BackSelfOperationContext::BackSelfOperationContext(ExprContext *ctx) { copyFrom(ctx); }


std::any sealParser::BackSelfOperationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitBackSelfOperation(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TrueTypeContext ------------------------------------------------------------------

tree::TerminalNode* sealParser::TrueTypeContext::True() {
  return getToken(sealParser::True, 0);
}

sealParser::TrueTypeContext::TrueTypeContext(ExprContext *ctx) { copyFrom(ctx); }


std::any sealParser::TrueTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitTrueType(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TemplateContext ------------------------------------------------------------------

sealParser::ExprContext* sealParser::TemplateContext::expr() {
  return getRuleContext<sealParser::ExprContext>(0);
}

sealParser::TemplateCallStatementContext* sealParser::TemplateContext::templateCallStatement() {
  return getRuleContext<sealParser::TemplateCallStatementContext>(0);
}

sealParser::TemplateContext::TemplateContext(ExprContext *ctx) { copyFrom(ctx); }


std::any sealParser::TemplateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitTemplate(this);
  else
    return visitor->visitChildren(this);
}
//----------------- GetRefContext ------------------------------------------------------------------

tree::TerminalNode* sealParser::GetRefContext::RefOp() {
  return getToken(sealParser::RefOp, 0);
}

sealParser::ExprContext* sealParser::GetRefContext::expr() {
  return getRuleContext<sealParser::ExprContext>(0);
}

sealParser::GetRefContext::GetRefContext(ExprContext *ctx) { copyFrom(ctx); }


std::any sealParser::GetRefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitGetRef(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ConstantIntContext ------------------------------------------------------------------

tree::TerminalNode* sealParser::ConstantIntContext::Int() {
  return getToken(sealParser::Int, 0);
}

sealParser::ConstantIntContext::ConstantIntContext(ExprContext *ctx) { copyFrom(ctx); }


std::any sealParser::ConstantIntContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitConstantInt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AddOrMinusContext ------------------------------------------------------------------

std::vector<sealParser::ExprContext *> sealParser::AddOrMinusContext::expr() {
  return getRuleContexts<sealParser::ExprContext>();
}

sealParser::ExprContext* sealParser::AddOrMinusContext::expr(size_t i) {
  return getRuleContext<sealParser::ExprContext>(i);
}

tree::TerminalNode* sealParser::AddOrMinusContext::Plus() {
  return getToken(sealParser::Plus, 0);
}

tree::TerminalNode* sealParser::AddOrMinusContext::Minus() {
  return getToken(sealParser::Minus, 0);
}

sealParser::AddOrMinusContext::AddOrMinusContext(ExprContext *ctx) { copyFrom(ctx); }


std::any sealParser::AddOrMinusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitAddOrMinus(this);
  else
    return visitor->visitChildren(this);
}
//----------------- GetOriginContext ------------------------------------------------------------------

tree::TerminalNode* sealParser::GetOriginContext::Multiply() {
  return getToken(sealParser::Multiply, 0);
}

sealParser::ExprContext* sealParser::GetOriginContext::expr() {
  return getRuleContext<sealParser::ExprContext>(0);
}

sealParser::GetOriginContext::GetOriginContext(ExprContext *ctx) { copyFrom(ctx); }


std::any sealParser::GetOriginContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitGetOrigin(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FunctionCallContext ------------------------------------------------------------------

std::vector<sealParser::ExprContext *> sealParser::FunctionCallContext::expr() {
  return getRuleContexts<sealParser::ExprContext>();
}

sealParser::ExprContext* sealParser::FunctionCallContext::expr(size_t i) {
  return getRuleContext<sealParser::ExprContext>(i);
}

tree::TerminalNode* sealParser::FunctionCallContext::LParen() {
  return getToken(sealParser::LParen, 0);
}

tree::TerminalNode* sealParser::FunctionCallContext::RParen() {
  return getToken(sealParser::RParen, 0);
}

sealParser::TemplateCallStatementContext* sealParser::FunctionCallContext::templateCallStatement() {
  return getRuleContext<sealParser::TemplateCallStatementContext>(0);
}

sealParser::FunctionCallContext::FunctionCallContext(ExprContext *ctx) { copyFrom(ctx); }


std::any sealParser::FunctionCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitFunctionCall(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LogicAndContext ------------------------------------------------------------------

std::vector<sealParser::ExprContext *> sealParser::LogicAndContext::expr() {
  return getRuleContexts<sealParser::ExprContext>();
}

sealParser::ExprContext* sealParser::LogicAndContext::expr(size_t i) {
  return getRuleContext<sealParser::ExprContext>(i);
}

sealParser::LogicAndContext::LogicAndContext(ExprContext *ctx) { copyFrom(ctx); }


std::any sealParser::LogicAndContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitLogicAnd(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PreSelfOperationContext ------------------------------------------------------------------

sealParser::ExprContext* sealParser::PreSelfOperationContext::expr() {
  return getRuleContext<sealParser::ExprContext>(0);
}

tree::TerminalNode* sealParser::PreSelfOperationContext::DoubleAdd() {
  return getToken(sealParser::DoubleAdd, 0);
}

tree::TerminalNode* sealParser::PreSelfOperationContext::DoubleMinus() {
  return getToken(sealParser::DoubleMinus, 0);
}

sealParser::PreSelfOperationContext::PreSelfOperationContext(ExprContext *ctx) { copyFrom(ctx); }


std::any sealParser::PreSelfOperationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitPreSelfOperation(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LogicOrContext ------------------------------------------------------------------

std::vector<sealParser::ExprContext *> sealParser::LogicOrContext::expr() {
  return getRuleContexts<sealParser::ExprContext>();
}

sealParser::ExprContext* sealParser::LogicOrContext::expr(size_t i) {
  return getRuleContext<sealParser::ExprContext>(i);
}

sealParser::LogicOrContext::LogicOrContext(ExprContext *ctx) { copyFrom(ctx); }


std::any sealParser::LogicOrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitLogicOr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ConstantFloatContext ------------------------------------------------------------------

tree::TerminalNode* sealParser::ConstantFloatContext::Float() {
  return getToken(sealParser::Float, 0);
}

sealParser::ConstantFloatContext::ConstantFloatContext(ExprContext *ctx) { copyFrom(ctx); }


std::any sealParser::ConstantFloatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitConstantFloat(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NewContextContext ------------------------------------------------------------------

sealParser::ExprContext* sealParser::NewContextContext::expr() {
  return getRuleContext<sealParser::ExprContext>(0);
}

sealParser::NewContextContext::NewContextContext(ExprContext *ctx) { copyFrom(ctx); }


std::any sealParser::NewContextContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitNewContext(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RangeIncludeContext ------------------------------------------------------------------

std::vector<sealParser::ExprContext *> sealParser::RangeIncludeContext::expr() {
  return getRuleContexts<sealParser::ExprContext>();
}

sealParser::ExprContext* sealParser::RangeIncludeContext::expr(size_t i) {
  return getRuleContext<sealParser::ExprContext>(i);
}

tree::TerminalNode* sealParser::RangeIncludeContext::To() {
  return getToken(sealParser::To, 0);
}

tree::TerminalNode* sealParser::RangeIncludeContext::Equal() {
  return getToken(sealParser::Equal, 0);
}

sealParser::RangeIncludeContext::RangeIncludeContext(ExprContext *ctx) { copyFrom(ctx); }


std::any sealParser::RangeIncludeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitRangeInclude(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MulOrDivOrModContext ------------------------------------------------------------------

std::vector<sealParser::ExprContext *> sealParser::MulOrDivOrModContext::expr() {
  return getRuleContexts<sealParser::ExprContext>();
}

sealParser::ExprContext* sealParser::MulOrDivOrModContext::expr(size_t i) {
  return getRuleContext<sealParser::ExprContext>(i);
}

tree::TerminalNode* sealParser::MulOrDivOrModContext::Multiply() {
  return getToken(sealParser::Multiply, 0);
}

tree::TerminalNode* sealParser::MulOrDivOrModContext::Divide() {
  return getToken(sealParser::Divide, 0);
}

tree::TerminalNode* sealParser::MulOrDivOrModContext::Mod() {
  return getToken(sealParser::Mod, 0);
}

sealParser::MulOrDivOrModContext::MulOrDivOrModContext(ExprContext *ctx) { copyFrom(ctx); }


std::any sealParser::MulOrDivOrModContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitMulOrDivOrMod(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ConstantHexNumberContext ------------------------------------------------------------------

tree::TerminalNode* sealParser::ConstantHexNumberContext::HexNumber() {
  return getToken(sealParser::HexNumber, 0);
}

sealParser::ConstantHexNumberContext::ConstantHexNumberContext(ExprContext *ctx) { copyFrom(ctx); }


std::any sealParser::ConstantHexNumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitConstantHexNumber(this);
  else
    return visitor->visitChildren(this);
}
//----------------- InitListContext ------------------------------------------------------------------

std::vector<sealParser::ExprContext *> sealParser::InitListContext::expr() {
  return getRuleContexts<sealParser::ExprContext>();
}

sealParser::ExprContext* sealParser::InitListContext::expr(size_t i) {
  return getRuleContext<sealParser::ExprContext>(i);
}

sealParser::InitListContext::InitListContext(ExprContext *ctx) { copyFrom(ctx); }


std::any sealParser::InitListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitInitList(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IdExpressionContext ------------------------------------------------------------------

tree::TerminalNode* sealParser::IdExpressionContext::Id() {
  return getToken(sealParser::Id, 0);
}

sealParser::IdExpressionContext::IdExpressionContext(ExprContext *ctx) { copyFrom(ctx); }


std::any sealParser::IdExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitIdExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- EqualListContext ------------------------------------------------------------------

std::vector<sealParser::InitListObjectContext *> sealParser::EqualListContext::initListObject() {
  return getRuleContexts<sealParser::InitListObjectContext>();
}

sealParser::InitListObjectContext* sealParser::EqualListContext::initListObject(size_t i) {
  return getRuleContext<sealParser::InitListObjectContext>(i);
}

sealParser::EqualListContext::EqualListContext(ExprContext *ctx) { copyFrom(ctx); }


std::any sealParser::EqualListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitEqualList(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CallPointerContext ------------------------------------------------------------------

std::vector<sealParser::ExprContext *> sealParser::CallPointerContext::expr() {
  return getRuleContexts<sealParser::ExprContext>();
}

sealParser::ExprContext* sealParser::CallPointerContext::expr(size_t i) {
  return getRuleContext<sealParser::ExprContext>(i);
}

tree::TerminalNode* sealParser::CallPointerContext::LTo() {
  return getToken(sealParser::LTo, 0);
}

sealParser::CallPointerContext::CallPointerContext(ExprContext *ctx) { copyFrom(ctx); }


std::any sealParser::CallPointerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitCallPointer(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AssginContext ------------------------------------------------------------------

std::vector<sealParser::ExprContext *> sealParser::AssginContext::expr() {
  return getRuleContexts<sealParser::ExprContext>();
}

sealParser::ExprContext* sealParser::AssginContext::expr(size_t i) {
  return getRuleContext<sealParser::ExprContext>(i);
}

tree::TerminalNode* sealParser::AssginContext::Equal() {
  return getToken(sealParser::Equal, 0);
}

tree::TerminalNode* sealParser::AssginContext::AddEqual() {
  return getToken(sealParser::AddEqual, 0);
}

tree::TerminalNode* sealParser::AssginContext::MinusEqual() {
  return getToken(sealParser::MinusEqual, 0);
}

tree::TerminalNode* sealParser::AssginContext::MulEqual() {
  return getToken(sealParser::MulEqual, 0);
}

tree::TerminalNode* sealParser::AssginContext::DivEqual() {
  return getToken(sealParser::DivEqual, 0);
}

tree::TerminalNode* sealParser::AssginContext::EMol() {
  return getToken(sealParser::EMol, 0);
}

tree::TerminalNode* sealParser::AssginContext::NotEqual() {
  return getToken(sealParser::NotEqual, 0);
}

sealParser::AssginContext::AssginContext(ExprContext *ctx) { copyFrom(ctx); }


std::any sealParser::AssginContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitAssgin(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParenContext ------------------------------------------------------------------

tree::TerminalNode* sealParser::ParenContext::LParen() {
  return getToken(sealParser::LParen, 0);
}

sealParser::ExprContext* sealParser::ParenContext::expr() {
  return getRuleContext<sealParser::ExprContext>(0);
}

tree::TerminalNode* sealParser::ParenContext::RParen() {
  return getToken(sealParser::RParen, 0);
}

sealParser::ParenContext::ParenContext(ExprContext *ctx) { copyFrom(ctx); }


std::any sealParser::ParenContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitParen(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LogicCompareContext ------------------------------------------------------------------

std::vector<sealParser::ExprContext *> sealParser::LogicCompareContext::expr() {
  return getRuleContexts<sealParser::ExprContext>();
}

sealParser::ExprContext* sealParser::LogicCompareContext::expr(size_t i) {
  return getRuleContext<sealParser::ExprContext>(i);
}

sealParser::LogicCompareContext::LogicCompareContext(ExprContext *ctx) { copyFrom(ctx); }


std::any sealParser::LogicCompareContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitLogicCompare(this);
  else
    return visitor->visitChildren(this);
}

sealParser::ExprContext* sealParser::expr() {
   return expr(0);
}

sealParser::ExprContext* sealParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  sealParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  sealParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 6;
  enterRecursionRule(_localctx, 6, sealParser::RuleExpr, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(196);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<CppContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(154);
      cppLiteral();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<GetRefContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(155);
      match(sealParser::RefOp);
      setState(156);
      expr(26);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<BackSelfOperationContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(157);
      _la = _input->LA(1);
      if (!(_la == sealParser::DoubleAdd

      || _la == sealParser::DoubleMinus)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(158);
      expr(21);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<NewContextContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(159);
      match(sealParser::T__4);
      setState(160);
      expr(18);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<GetOriginContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(161);
      match(sealParser::Multiply);
      setState(162);
      expr(17);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<InitListContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(163);
      match(sealParser::T__5);
      setState(164);
      expr(0);
      setState(169);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == sealParser::T__2) {
        setState(165);
        match(sealParser::T__2);
        setState(166);
        expr(0);
        setState(171);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(172);
      match(sealParser::T__6);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<EqualListContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(174);
      match(sealParser::T__5);
      setState(175);
      initListObject();
      setState(180);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == sealParser::T__2) {
        setState(176);
        match(sealParser::T__2);
        setState(177);
        initListObject();
        setState(182);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(183);
      match(sealParser::T__6);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<TrueTypeContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(185);
      match(sealParser::True);
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<FalseTypeContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(186);
      match(sealParser::False);
      break;
    }

    case 10: {
      _localctx = _tracker.createInstance<ParenContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(187);
      match(sealParser::LParen);
      setState(188);
      expr(0);
      setState(189);
      match(sealParser::RParen);
      break;
    }

    case 11: {
      _localctx = _tracker.createInstance<IdExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(191);
      match(sealParser::Id);
      break;
    }

    case 12: {
      _localctx = _tracker.createInstance<ConstantIntContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(192);
      match(sealParser::Int);
      break;
    }

    case 13: {
      _localctx = _tracker.createInstance<ConstantFloatContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(193);
      match(sealParser::Float);
      break;
    }

    case 14: {
      _localctx = _tracker.createInstance<ConstantHexNumberContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(194);
      match(sealParser::HexNumber);
      break;
    }

    case 15: {
      _localctx = _tracker.createInstance<ConstantStringContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(195);
      match(sealParser::String);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(267);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(265);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<RangeExpressionContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(198);

          if (!(precpred(_ctx, 31))) throw FailedPredicateException(this, "precpred(_ctx, 31)");
          setState(199);
          match(sealParser::To);
          setState(200);
          expr(32);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<RangeIncludeContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(201);

          if (!(precpred(_ctx, 30))) throw FailedPredicateException(this, "precpred(_ctx, 30)");
          setState(202);
          match(sealParser::To);
          setState(203);
          match(sealParser::T__0);
          setState(204);
          match(sealParser::Equal);
          setState(205);
          match(sealParser::T__1);
          setState(206);
          expr(31);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<CallVariableContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(207);

          if (!(precpred(_ctx, 25))) throw FailedPredicateException(this, "precpred(_ctx, 25)");
          setState(208);
          match(sealParser::Dot);
          setState(209);
          expr(26);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<CallPointerContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(210);

          if (!(precpred(_ctx, 24))) throw FailedPredicateException(this, "precpred(_ctx, 24)");
          setState(211);
          match(sealParser::LTo);
          setState(212);
          expr(25);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<VisitorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(213);

          if (!(precpred(_ctx, 23))) throw FailedPredicateException(this, "precpred(_ctx, 23)");
          setState(214);
          match(sealParser::T__3);
          setState(215);
          expr(24);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<MulOrDivOrModContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(216);

          if (!(precpred(_ctx, 20))) throw FailedPredicateException(this, "precpred(_ctx, 20)");
          setState(217);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 30786325577728) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(218);
          expr(21);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<AddOrMinusContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(219);

          if (!(precpred(_ctx, 19))) throw FailedPredicateException(this, "precpred(_ctx, 19)");
          setState(220);
          _la = _input->LA(1);
          if (!(_la == sealParser::Plus

          || _la == sealParser::Minus)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(221);
          expr(20);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<LogicOpeartionContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(222);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(223);
          _la = _input->LA(1);
          if (!(((((_la - 65) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 65)) & 196611) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(224);
          expr(15);
          break;
        }

        case 9: {
          auto newContext = _tracker.createInstance<LogicCompareContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(225);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");

          setState(226);
          match(sealParser::T__7);
          setState(227);
          expr(14);
          break;
        }

        case 10: {
          auto newContext = _tracker.createInstance<LogicAndContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(228);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(229);
          match(sealParser::T__8);
          setState(230);
          expr(13);
          break;
        }

        case 11: {
          auto newContext = _tracker.createInstance<LogicAndContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(231);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(232);
          match(sealParser::T__8);
          setState(233);
          expr(12);
          break;
        }

        case 12: {
          auto newContext = _tracker.createInstance<LogicOrContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(234);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(235);
          match(sealParser::T__9);
          setState(236);
          expr(11);
          break;
        }

        case 13: {
          auto newContext = _tracker.createInstance<AssginContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(237);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(238);
          _la = _input->LA(1);
          if (!(((((_la - 56) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 56)) & 367) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(239);
          expr(9);
          break;
        }

        case 14: {
          auto newContext = _tracker.createInstance<FunctionCallContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(240);

          if (!(precpred(_ctx, 29))) throw FailedPredicateException(this, "precpred(_ctx, 29)");
          setState(242);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == sealParser::LTemplate) {
            setState(241);
            templateCallStatement();
          }
          setState(244);
          match(sealParser::LParen);
          setState(253);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 67594539036049504) != 0) || ((((_la - 83) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 83)) & 13) != 0)) {
            setState(245);
            expr(0);
            setState(250);
            _errHandler->sync(this);
            _la = _input->LA(1);
            while (_la == sealParser::T__2) {
              setState(246);
              match(sealParser::T__2);
              setState(247);
              expr(0);
              setState(252);
              _errHandler->sync(this);
              _la = _input->LA(1);
            }
          }
          setState(255);
          match(sealParser::RParen);
          break;
        }

        case 15: {
          auto newContext = _tracker.createInstance<ArrayCallContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(256);

          if (!(precpred(_ctx, 28))) throw FailedPredicateException(this, "precpred(_ctx, 28)");
          setState(257);
          match(sealParser::T__0);
          setState(258);
          expr(0);
          setState(259);
          match(sealParser::T__1);
          break;
        }

        case 16: {
          auto newContext = _tracker.createInstance<TemplateContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(261);

          if (!(precpred(_ctx, 27))) throw FailedPredicateException(this, "precpred(_ctx, 27)");
          setState(262);
          templateCallStatement();
          break;
        }

        case 17: {
          auto newContext = _tracker.createInstance<PreSelfOperationContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(263);

          if (!(precpred(_ctx, 22))) throw FailedPredicateException(this, "precpred(_ctx, 22)");
          setState(264);
          _la = _input->LA(1);
          if (!(_la == sealParser::DoubleAdd

          || _la == sealParser::DoubleMinus)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          break;
        }

        default:
          break;
        } 
      }
      setState(269);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- TemplateCallStatementContext ------------------------------------------------------------------

sealParser::TemplateCallStatementContext::TemplateCallStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sealParser::TemplateCallStatementContext::LTemplate() {
  return getToken(sealParser::LTemplate, 0);
}

std::vector<sealParser::TypeContext *> sealParser::TemplateCallStatementContext::type() {
  return getRuleContexts<sealParser::TypeContext>();
}

sealParser::TypeContext* sealParser::TemplateCallStatementContext::type(size_t i) {
  return getRuleContext<sealParser::TypeContext>(i);
}

tree::TerminalNode* sealParser::TemplateCallStatementContext::RTemplate() {
  return getToken(sealParser::RTemplate, 0);
}


size_t sealParser::TemplateCallStatementContext::getRuleIndex() const {
  return sealParser::RuleTemplateCallStatement;
}


std::any sealParser::TemplateCallStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitTemplateCallStatement(this);
  else
    return visitor->visitChildren(this);
}

sealParser::TemplateCallStatementContext* sealParser::templateCallStatement() {
  TemplateCallStatementContext *_localctx = _tracker.createInstance<TemplateCallStatementContext>(_ctx, getState());
  enterRule(_localctx, 8, sealParser::RuleTemplateCallStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(270);
    match(sealParser::LTemplate);
    setState(271);
    type();
    setState(276);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sealParser::T__2) {
      setState(272);
      match(sealParser::T__2);
      setState(273);
      type();
      setState(278);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(279);
    match(sealParser::RTemplate);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TemplateDefineStatementContext ------------------------------------------------------------------

sealParser::TemplateDefineStatementContext::TemplateDefineStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sealParser::TemplateDefineStatementContext::LTemplate() {
  return getToken(sealParser::LTemplate, 0);
}

std::vector<tree::TerminalNode *> sealParser::TemplateDefineStatementContext::Class() {
  return getTokens(sealParser::Class);
}

tree::TerminalNode* sealParser::TemplateDefineStatementContext::Class(size_t i) {
  return getToken(sealParser::Class, i);
}

std::vector<tree::TerminalNode *> sealParser::TemplateDefineStatementContext::Id() {
  return getTokens(sealParser::Id);
}

tree::TerminalNode* sealParser::TemplateDefineStatementContext::Id(size_t i) {
  return getToken(sealParser::Id, i);
}

tree::TerminalNode* sealParser::TemplateDefineStatementContext::RTemplate() {
  return getToken(sealParser::RTemplate, 0);
}


size_t sealParser::TemplateDefineStatementContext::getRuleIndex() const {
  return sealParser::RuleTemplateDefineStatement;
}


std::any sealParser::TemplateDefineStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitTemplateDefineStatement(this);
  else
    return visitor->visitChildren(this);
}

sealParser::TemplateDefineStatementContext* sealParser::templateDefineStatement() {
  TemplateDefineStatementContext *_localctx = _tracker.createInstance<TemplateDefineStatementContext>(_ctx, getState());
  enterRule(_localctx, 10, sealParser::RuleTemplateDefineStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(281);
    match(sealParser::LTemplate);
    setState(282);
    match(sealParser::Class);
    setState(283);
    match(sealParser::Id);
    setState(289);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sealParser::T__2) {
      setState(284);
      match(sealParser::T__2);
      setState(285);
      match(sealParser::Class);
      setState(286);
      match(sealParser::Id);
      setState(291);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(292);
    match(sealParser::RTemplate);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NullAccessStatementContext ------------------------------------------------------------------

sealParser::NullAccessStatementContext::NullAccessStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sealParser::ExprContext* sealParser::NullAccessStatementContext::expr() {
  return getRuleContext<sealParser::ExprContext>(0);
}

sealParser::FunctionBlockContext* sealParser::NullAccessStatementContext::functionBlock() {
  return getRuleContext<sealParser::FunctionBlockContext>(0);
}


size_t sealParser::NullAccessStatementContext::getRuleIndex() const {
  return sealParser::RuleNullAccessStatement;
}


std::any sealParser::NullAccessStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitNullAccessStatement(this);
  else
    return visitor->visitChildren(this);
}

sealParser::NullAccessStatementContext* sealParser::nullAccessStatement() {
  NullAccessStatementContext *_localctx = _tracker.createInstance<NullAccessStatementContext>(_ctx, getState());
  enterRule(_localctx, 12, sealParser::RuleNullAccessStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(294);
    expr(0);
    setState(295);
    match(sealParser::T__10);

    setState(296);
    functionBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitStatementContext ------------------------------------------------------------------

sealParser::InitStatementContext::InitStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sealParser::ExprContext* sealParser::InitStatementContext::expr() {
  return getRuleContext<sealParser::ExprContext>(0);
}

sealParser::VariableDefineContext* sealParser::InitStatementContext::variableDefine() {
  return getRuleContext<sealParser::VariableDefineContext>(0);
}


size_t sealParser::InitStatementContext::getRuleIndex() const {
  return sealParser::RuleInitStatement;
}


std::any sealParser::InitStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitInitStatement(this);
  else
    return visitor->visitChildren(this);
}

sealParser::InitStatementContext* sealParser::initStatement() {
  InitStatementContext *_localctx = _tracker.createInstance<InitStatementContext>(_ctx, getState());
  enterRule(_localctx, 14, sealParser::RuleInitStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(300);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case sealParser::T__4:
      case sealParser::T__5:
      case sealParser::CppRaw:
      case sealParser::Int:
      case sealParser::Float:
      case sealParser::HexNumber:
      case sealParser::Multiply:
      case sealParser::LParen:
      case sealParser::True:
      case sealParser::False:
      case sealParser::DoubleAdd:
      case sealParser::DoubleMinus:
      case sealParser::RefOp:
      case sealParser::String:
      case sealParser::Id: {
        enterOuterAlt(_localctx, 1);
        setState(298);
        expr(0);
        break;
      }

      case sealParser::T__22:
      case sealParser::Var:
      case sealParser::Ptr:
      case sealParser::Let:
      case sealParser::Ref: {
        enterOuterAlt(_localctx, 2);
        setState(299);
        variableDefine();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnStatementContext ------------------------------------------------------------------

sealParser::ReturnStatementContext::ReturnStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sealParser::ExprContext* sealParser::ReturnStatementContext::expr() {
  return getRuleContext<sealParser::ExprContext>(0);
}

tree::TerminalNode* sealParser::ReturnStatementContext::End() {
  return getToken(sealParser::End, 0);
}


size_t sealParser::ReturnStatementContext::getRuleIndex() const {
  return sealParser::RuleReturnStatement;
}


std::any sealParser::ReturnStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitReturnStatement(this);
  else
    return visitor->visitChildren(this);
}

sealParser::ReturnStatementContext* sealParser::returnStatement() {
  ReturnStatementContext *_localctx = _tracker.createInstance<ReturnStatementContext>(_ctx, getState());
  enterRule(_localctx, 16, sealParser::RuleReturnStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(302);
    match(sealParser::T__11);
    setState(303);
    expr(0);
    setState(304);
    match(sealParser::End);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElifStatementContext ------------------------------------------------------------------

sealParser::ElifStatementContext::ElifStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sealParser::ElifStatementContext::Elif() {
  return getToken(sealParser::Elif, 0);
}

tree::TerminalNode* sealParser::ElifStatementContext::LParen() {
  return getToken(sealParser::LParen, 0);
}

sealParser::ExprContext* sealParser::ElifStatementContext::expr() {
  return getRuleContext<sealParser::ExprContext>(0);
}

tree::TerminalNode* sealParser::ElifStatementContext::RParen() {
  return getToken(sealParser::RParen, 0);
}

sealParser::FunctionBlockContext* sealParser::ElifStatementContext::functionBlock() {
  return getRuleContext<sealParser::FunctionBlockContext>(0);
}


size_t sealParser::ElifStatementContext::getRuleIndex() const {
  return sealParser::RuleElifStatement;
}


std::any sealParser::ElifStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitElifStatement(this);
  else
    return visitor->visitChildren(this);
}

sealParser::ElifStatementContext* sealParser::elifStatement() {
  ElifStatementContext *_localctx = _tracker.createInstance<ElifStatementContext>(_ctx, getState());
  enterRule(_localctx, 18, sealParser::RuleElifStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(306);
    match(sealParser::Elif);
    setState(307);
    match(sealParser::LParen);
    setState(308);
    expr(0);
    setState(309);
    match(sealParser::RParen);
    setState(310);
    functionBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElseStatementContext ------------------------------------------------------------------

sealParser::ElseStatementContext::ElseStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sealParser::ElseStatementContext::Else() {
  return getToken(sealParser::Else, 0);
}

sealParser::FunctionBlockContext* sealParser::ElseStatementContext::functionBlock() {
  return getRuleContext<sealParser::FunctionBlockContext>(0);
}


size_t sealParser::ElseStatementContext::getRuleIndex() const {
  return sealParser::RuleElseStatement;
}


std::any sealParser::ElseStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitElseStatement(this);
  else
    return visitor->visitChildren(this);
}

sealParser::ElseStatementContext* sealParser::elseStatement() {
  ElseStatementContext *_localctx = _tracker.createInstance<ElseStatementContext>(_ctx, getState());
  enterRule(_localctx, 20, sealParser::RuleElseStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(312);
    match(sealParser::Else);
    setState(313);
    functionBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStatementContext ------------------------------------------------------------------

sealParser::IfStatementContext::IfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sealParser::IfStatementContext::If() {
  return getToken(sealParser::If, 0);
}

tree::TerminalNode* sealParser::IfStatementContext::LParen() {
  return getToken(sealParser::LParen, 0);
}

sealParser::ExprContext* sealParser::IfStatementContext::expr() {
  return getRuleContext<sealParser::ExprContext>(0);
}

tree::TerminalNode* sealParser::IfStatementContext::RParen() {
  return getToken(sealParser::RParen, 0);
}

sealParser::FunctionBlockContext* sealParser::IfStatementContext::functionBlock() {
  return getRuleContext<sealParser::FunctionBlockContext>(0);
}

std::vector<sealParser::ElifStatementContext *> sealParser::IfStatementContext::elifStatement() {
  return getRuleContexts<sealParser::ElifStatementContext>();
}

sealParser::ElifStatementContext* sealParser::IfStatementContext::elifStatement(size_t i) {
  return getRuleContext<sealParser::ElifStatementContext>(i);
}

sealParser::ElseStatementContext* sealParser::IfStatementContext::elseStatement() {
  return getRuleContext<sealParser::ElseStatementContext>(0);
}


size_t sealParser::IfStatementContext::getRuleIndex() const {
  return sealParser::RuleIfStatement;
}


std::any sealParser::IfStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitIfStatement(this);
  else
    return visitor->visitChildren(this);
}

sealParser::IfStatementContext* sealParser::ifStatement() {
  IfStatementContext *_localctx = _tracker.createInstance<IfStatementContext>(_ctx, getState());
  enterRule(_localctx, 22, sealParser::RuleIfStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(315);
    match(sealParser::If);
    setState(316);
    match(sealParser::LParen);
    setState(317);
    expr(0);
    setState(318);
    match(sealParser::RParen);
    setState(319);
    functionBlock();
    setState(323);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sealParser::Elif) {
      setState(320);
      elifStatement();
      setState(325);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(327);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == sealParser::Else) {
      setState(326);
      elseStatement();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BreakStatementContext ------------------------------------------------------------------

sealParser::BreakStatementContext::BreakStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sealParser::BreakStatementContext::Break() {
  return getToken(sealParser::Break, 0);
}

tree::TerminalNode* sealParser::BreakStatementContext::End() {
  return getToken(sealParser::End, 0);
}


size_t sealParser::BreakStatementContext::getRuleIndex() const {
  return sealParser::RuleBreakStatement;
}


std::any sealParser::BreakStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitBreakStatement(this);
  else
    return visitor->visitChildren(this);
}

sealParser::BreakStatementContext* sealParser::breakStatement() {
  BreakStatementContext *_localctx = _tracker.createInstance<BreakStatementContext>(_ctx, getState());
  enterRule(_localctx, 24, sealParser::RuleBreakStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(329);
    match(sealParser::Break);
    setState(330);
    match(sealParser::End);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ContinueStatementContext ------------------------------------------------------------------

sealParser::ContinueStatementContext::ContinueStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sealParser::ContinueStatementContext::Continue() {
  return getToken(sealParser::Continue, 0);
}

tree::TerminalNode* sealParser::ContinueStatementContext::End() {
  return getToken(sealParser::End, 0);
}


size_t sealParser::ContinueStatementContext::getRuleIndex() const {
  return sealParser::RuleContinueStatement;
}


std::any sealParser::ContinueStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitContinueStatement(this);
  else
    return visitor->visitChildren(this);
}

sealParser::ContinueStatementContext* sealParser::continueStatement() {
  ContinueStatementContext *_localctx = _tracker.createInstance<ContinueStatementContext>(_ctx, getState());
  enterRule(_localctx, 26, sealParser::RuleContinueStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(332);
    match(sealParser::Continue);
    setState(333);
    match(sealParser::End);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumEntryContext ------------------------------------------------------------------

sealParser::EnumEntryContext::EnumEntryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> sealParser::EnumEntryContext::Id() {
  return getTokens(sealParser::Id);
}

tree::TerminalNode* sealParser::EnumEntryContext::Id(size_t i) {
  return getToken(sealParser::Id, i);
}


size_t sealParser::EnumEntryContext::getRuleIndex() const {
  return sealParser::RuleEnumEntry;
}


std::any sealParser::EnumEntryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitEnumEntry(this);
  else
    return visitor->visitChildren(this);
}

sealParser::EnumEntryContext* sealParser::enumEntry() {
  EnumEntryContext *_localctx = _tracker.createInstance<EnumEntryContext>(_ctx, getState());
  enterRule(_localctx, 28, sealParser::RuleEnumEntry);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(335);
    match(sealParser::Id);
    setState(340);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sealParser::T__2) {
      setState(336);
      match(sealParser::T__2);
      setState(337);
      match(sealParser::Id);
      setState(342);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumStatementContext ------------------------------------------------------------------

sealParser::EnumStatementContext::EnumStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sealParser::EnumStatementContext::Id() {
  return getToken(sealParser::Id, 0);
}

sealParser::EnumEntryContext* sealParser::EnumStatementContext::enumEntry() {
  return getRuleContext<sealParser::EnumEntryContext>(0);
}


size_t sealParser::EnumStatementContext::getRuleIndex() const {
  return sealParser::RuleEnumStatement;
}


std::any sealParser::EnumStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitEnumStatement(this);
  else
    return visitor->visitChildren(this);
}

sealParser::EnumStatementContext* sealParser::enumStatement() {
  EnumStatementContext *_localctx = _tracker.createInstance<EnumStatementContext>(_ctx, getState());
  enterRule(_localctx, 30, sealParser::RuleEnumStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(343);
    match(sealParser::T__12);
    setState(344);
    match(sealParser::Id);
    setState(345);
    match(sealParser::T__5);
    setState(346);
    enumEntry();
    setState(347);
    match(sealParser::T__6);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeleteStatementContext ------------------------------------------------------------------

sealParser::DeleteStatementContext::DeleteStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sealParser::ExprContext* sealParser::DeleteStatementContext::expr() {
  return getRuleContext<sealParser::ExprContext>(0);
}


size_t sealParser::DeleteStatementContext::getRuleIndex() const {
  return sealParser::RuleDeleteStatement;
}


std::any sealParser::DeleteStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitDeleteStatement(this);
  else
    return visitor->visitChildren(this);
}

sealParser::DeleteStatementContext* sealParser::deleteStatement() {
  DeleteStatementContext *_localctx = _tracker.createInstance<DeleteStatementContext>(_ctx, getState());
  enterRule(_localctx, 32, sealParser::RuleDeleteStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(349);
    match(sealParser::T__13);
    setState(350);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileStatementContext ------------------------------------------------------------------

sealParser::WhileStatementContext::WhileStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sealParser::WhileStatementContext::LParen() {
  return getToken(sealParser::LParen, 0);
}

sealParser::ExprContext* sealParser::WhileStatementContext::expr() {
  return getRuleContext<sealParser::ExprContext>(0);
}

tree::TerminalNode* sealParser::WhileStatementContext::RParen() {
  return getToken(sealParser::RParen, 0);
}

sealParser::FunctionBlockContext* sealParser::WhileStatementContext::functionBlock() {
  return getRuleContext<sealParser::FunctionBlockContext>(0);
}


size_t sealParser::WhileStatementContext::getRuleIndex() const {
  return sealParser::RuleWhileStatement;
}


std::any sealParser::WhileStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitWhileStatement(this);
  else
    return visitor->visitChildren(this);
}

sealParser::WhileStatementContext* sealParser::whileStatement() {
  WhileStatementContext *_localctx = _tracker.createInstance<WhileStatementContext>(_ctx, getState());
  enterRule(_localctx, 34, sealParser::RuleWhileStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(352);
    match(sealParser::T__14);
    setState(353);
    match(sealParser::LParen);
    setState(354);
    expr(0);
    setState(355);
    match(sealParser::RParen);
    setState(356);
    functionBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RangeWhileStatementContext ------------------------------------------------------------------

sealParser::RangeWhileStatementContext::RangeWhileStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sealParser::RangeWhileStatementContext::LParen() {
  return getToken(sealParser::LParen, 0);
}

sealParser::ExprContext* sealParser::RangeWhileStatementContext::expr() {
  return getRuleContext<sealParser::ExprContext>(0);
}

tree::TerminalNode* sealParser::RangeWhileStatementContext::LTo() {
  return getToken(sealParser::LTo, 0);
}

tree::TerminalNode* sealParser::RangeWhileStatementContext::Id() {
  return getToken(sealParser::Id, 0);
}

tree::TerminalNode* sealParser::RangeWhileStatementContext::RParen() {
  return getToken(sealParser::RParen, 0);
}

sealParser::FunctionBlockContext* sealParser::RangeWhileStatementContext::functionBlock() {
  return getRuleContext<sealParser::FunctionBlockContext>(0);
}


size_t sealParser::RangeWhileStatementContext::getRuleIndex() const {
  return sealParser::RuleRangeWhileStatement;
}


std::any sealParser::RangeWhileStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitRangeWhileStatement(this);
  else
    return visitor->visitChildren(this);
}

sealParser::RangeWhileStatementContext* sealParser::rangeWhileStatement() {
  RangeWhileStatementContext *_localctx = _tracker.createInstance<RangeWhileStatementContext>(_ctx, getState());
  enterRule(_localctx, 36, sealParser::RuleRangeWhileStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(358);
    match(sealParser::T__14);
    setState(359);
    match(sealParser::LParen);
    setState(360);
    expr(0);
    setState(361);
    match(sealParser::LTo);
    setState(362);
    match(sealParser::Id);
    setState(363);
    match(sealParser::RParen);
    setState(364);
    functionBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForStatementContext ------------------------------------------------------------------

sealParser::ForStatementContext::ForStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sealParser::ForStatementContext::LParen() {
  return getToken(sealParser::LParen, 0);
}

std::vector<tree::TerminalNode *> sealParser::ForStatementContext::End() {
  return getTokens(sealParser::End);
}

tree::TerminalNode* sealParser::ForStatementContext::End(size_t i) {
  return getToken(sealParser::End, i);
}

tree::TerminalNode* sealParser::ForStatementContext::RParen() {
  return getToken(sealParser::RParen, 0);
}

sealParser::FunctionBlockContext* sealParser::ForStatementContext::functionBlock() {
  return getRuleContext<sealParser::FunctionBlockContext>(0);
}

sealParser::InitStatementContext* sealParser::ForStatementContext::initStatement() {
  return getRuleContext<sealParser::InitStatementContext>(0);
}

std::vector<sealParser::ExprContext *> sealParser::ForStatementContext::expr() {
  return getRuleContexts<sealParser::ExprContext>();
}

sealParser::ExprContext* sealParser::ForStatementContext::expr(size_t i) {
  return getRuleContext<sealParser::ExprContext>(i);
}


size_t sealParser::ForStatementContext::getRuleIndex() const {
  return sealParser::RuleForStatement;
}


std::any sealParser::ForStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitForStatement(this);
  else
    return visitor->visitChildren(this);
}

sealParser::ForStatementContext* sealParser::forStatement() {
  ForStatementContext *_localctx = _tracker.createInstance<ForStatementContext>(_ctx, getState());
  enterRule(_localctx, 38, sealParser::RuleForStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(366);
    match(sealParser::T__15);
    setState(367);
    match(sealParser::LParen);
    setState(369);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 67594571256692832) != 0) || ((((_la - 83) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 83)) & 13) != 0)) {
      setState(368);
      initStatement();
    }
    setState(371);
    match(sealParser::End);
    setState(373);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 67594539036049504) != 0) || ((((_la - 83) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 83)) & 13) != 0)) {
      setState(372);
      expr(0);
    }
    setState(375);
    match(sealParser::End);
    setState(377);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 67594539036049504) != 0) || ((((_la - 83) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 83)) & 13) != 0)) {
      setState(376);
      expr(0);
    }
    setState(379);
    match(sealParser::RParen);
    setState(380);
    functionBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterfaceBlockContext ------------------------------------------------------------------

sealParser::InterfaceBlockContext::InterfaceBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<sealParser::FunctionDefineContext *> sealParser::InterfaceBlockContext::functionDefine() {
  return getRuleContexts<sealParser::FunctionDefineContext>();
}

sealParser::FunctionDefineContext* sealParser::InterfaceBlockContext::functionDefine(size_t i) {
  return getRuleContext<sealParser::FunctionDefineContext>(i);
}


size_t sealParser::InterfaceBlockContext::getRuleIndex() const {
  return sealParser::RuleInterfaceBlock;
}


std::any sealParser::InterfaceBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitInterfaceBlock(this);
  else
    return visitor->visitChildren(this);
}

sealParser::InterfaceBlockContext* sealParser::interfaceBlock() {
  InterfaceBlockContext *_localctx = _tracker.createInstance<InterfaceBlockContext>(_ctx, getState());
  enterRule(_localctx, 40, sealParser::RuleInterfaceBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(382);
    match(sealParser::T__5);
    setState(386);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 34372321280) != 0)) {
      setState(383);
      functionDefine();
      setState(388);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(389);
    match(sealParser::T__6);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterfaceStatementContext ------------------------------------------------------------------

sealParser::InterfaceStatementContext::InterfaceStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sealParser::InterfaceStatementContext::Interface() {
  return getToken(sealParser::Interface, 0);
}

tree::TerminalNode* sealParser::InterfaceStatementContext::Id() {
  return getToken(sealParser::Id, 0);
}

sealParser::InterfaceBlockContext* sealParser::InterfaceStatementContext::interfaceBlock() {
  return getRuleContext<sealParser::InterfaceBlockContext>(0);
}

sealParser::DecoratorContext* sealParser::InterfaceStatementContext::decorator() {
  return getRuleContext<sealParser::DecoratorContext>(0);
}


size_t sealParser::InterfaceStatementContext::getRuleIndex() const {
  return sealParser::RuleInterfaceStatement;
}


std::any sealParser::InterfaceStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitInterfaceStatement(this);
  else
    return visitor->visitChildren(this);
}

sealParser::InterfaceStatementContext* sealParser::interfaceStatement() {
  InterfaceStatementContext *_localctx = _tracker.createInstance<InterfaceStatementContext>(_ctx, getState());
  enterRule(_localctx, 42, sealParser::RuleInterfaceStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(392);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == sealParser::T__22) {
      setState(391);
      decorator();
    }
    setState(394);
    match(sealParser::Interface);
    setState(395);
    match(sealParser::Id);
    setState(396);
    interfaceBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForeachStatementContext ------------------------------------------------------------------

sealParser::ForeachStatementContext::ForeachStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sealParser::ForeachStatementContext::LParen() {
  return getToken(sealParser::LParen, 0);
}

tree::TerminalNode* sealParser::ForeachStatementContext::Id() {
  return getToken(sealParser::Id, 0);
}

sealParser::ExprContext* sealParser::ForeachStatementContext::expr() {
  return getRuleContext<sealParser::ExprContext>(0);
}

tree::TerminalNode* sealParser::ForeachStatementContext::RParen() {
  return getToken(sealParser::RParen, 0);
}

sealParser::FunctionBlockContext* sealParser::ForeachStatementContext::functionBlock() {
  return getRuleContext<sealParser::FunctionBlockContext>(0);
}


size_t sealParser::ForeachStatementContext::getRuleIndex() const {
  return sealParser::RuleForeachStatement;
}


std::any sealParser::ForeachStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitForeachStatement(this);
  else
    return visitor->visitChildren(this);
}

sealParser::ForeachStatementContext* sealParser::foreachStatement() {
  ForeachStatementContext *_localctx = _tracker.createInstance<ForeachStatementContext>(_ctx, getState());
  enterRule(_localctx, 44, sealParser::RuleForeachStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(398);
    match(sealParser::T__16);
    setState(399);
    match(sealParser::LParen);
    setState(400);
    match(sealParser::Id);
    setState(401);
    match(sealParser::T__17);
    setState(402);
    expr(0);
    setState(403);
    match(sealParser::RParen);
    setState(404);
    functionBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FromStatementContext ------------------------------------------------------------------

sealParser::FromStatementContext::FromStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sealParser::FromStatementContext::FromLabel() {
  return getToken(sealParser::FromLabel, 0);
}

std::vector<tree::TerminalNode *> sealParser::FromStatementContext::Id() {
  return getTokens(sealParser::Id);
}

tree::TerminalNode* sealParser::FromStatementContext::Id(size_t i) {
  return getToken(sealParser::Id, i);
}

std::vector<tree::TerminalNode *> sealParser::FromStatementContext::Dot() {
  return getTokens(sealParser::Dot);
}

tree::TerminalNode* sealParser::FromStatementContext::Dot(size_t i) {
  return getToken(sealParser::Dot, i);
}


size_t sealParser::FromStatementContext::getRuleIndex() const {
  return sealParser::RuleFromStatement;
}


std::any sealParser::FromStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitFromStatement(this);
  else
    return visitor->visitChildren(this);
}

sealParser::FromStatementContext* sealParser::fromStatement() {
  FromStatementContext *_localctx = _tracker.createInstance<FromStatementContext>(_ctx, getState());
  enterRule(_localctx, 46, sealParser::RuleFromStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(406);
    match(sealParser::FromLabel);
    setState(407);
    match(sealParser::Id);
    setState(412);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sealParser::Dot) {
      setState(408);
      match(sealParser::Dot);
      setState(409);
      match(sealParser::Id);
      setState(414);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ModuleStatementContext ------------------------------------------------------------------

sealParser::ModuleStatementContext::ModuleStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sealParser::ModuleStatementContext::ModuleLabel() {
  return getToken(sealParser::ModuleLabel, 0);
}

std::vector<tree::TerminalNode *> sealParser::ModuleStatementContext::Id() {
  return getTokens(sealParser::Id);
}

tree::TerminalNode* sealParser::ModuleStatementContext::Id(size_t i) {
  return getToken(sealParser::Id, i);
}

std::vector<tree::TerminalNode *> sealParser::ModuleStatementContext::Dot() {
  return getTokens(sealParser::Dot);
}

tree::TerminalNode* sealParser::ModuleStatementContext::Dot(size_t i) {
  return getToken(sealParser::Dot, i);
}


size_t sealParser::ModuleStatementContext::getRuleIndex() const {
  return sealParser::RuleModuleStatement;
}


std::any sealParser::ModuleStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitModuleStatement(this);
  else
    return visitor->visitChildren(this);
}

sealParser::ModuleStatementContext* sealParser::moduleStatement() {
  ModuleStatementContext *_localctx = _tracker.createInstance<ModuleStatementContext>(_ctx, getState());
  enterRule(_localctx, 48, sealParser::RuleModuleStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(415);
    match(sealParser::ModuleLabel);
    setState(416);
    match(sealParser::Id);
    setState(421);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sealParser::Dot) {
      setState(417);
      match(sealParser::Dot);
      setState(418);
      match(sealParser::Id);
      setState(423);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LambdaMulLineContext ------------------------------------------------------------------

sealParser::LambdaMulLineContext::LambdaMulLineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sealParser::FunctionBlockContext* sealParser::LambdaMulLineContext::functionBlock() {
  return getRuleContext<sealParser::FunctionBlockContext>(0);
}


size_t sealParser::LambdaMulLineContext::getRuleIndex() const {
  return sealParser::RuleLambdaMulLine;
}


std::any sealParser::LambdaMulLineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitLambdaMulLine(this);
  else
    return visitor->visitChildren(this);
}

sealParser::LambdaMulLineContext* sealParser::lambdaMulLine() {
  LambdaMulLineContext *_localctx = _tracker.createInstance<LambdaMulLineContext>(_ctx, getState());
  enterRule(_localctx, 50, sealParser::RuleLambdaMulLine);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(424);
    functionBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LambdaSingleLineContext ------------------------------------------------------------------

sealParser::LambdaSingleLineContext::LambdaSingleLineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sealParser::FunctionBlockEntryContext* sealParser::LambdaSingleLineContext::functionBlockEntry() {
  return getRuleContext<sealParser::FunctionBlockEntryContext>(0);
}


size_t sealParser::LambdaSingleLineContext::getRuleIndex() const {
  return sealParser::RuleLambdaSingleLine;
}


std::any sealParser::LambdaSingleLineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitLambdaSingleLine(this);
  else
    return visitor->visitChildren(this);
}

sealParser::LambdaSingleLineContext* sealParser::lambdaSingleLine() {
  LambdaSingleLineContext *_localctx = _tracker.createInstance<LambdaSingleLineContext>(_ctx, getState());
  enterRule(_localctx, 52, sealParser::RuleLambdaSingleLine);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(426);
    functionBlockEntry();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LambdaBlockContext ------------------------------------------------------------------

sealParser::LambdaBlockContext::LambdaBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sealParser::LambdaMulLineContext* sealParser::LambdaBlockContext::lambdaMulLine() {
  return getRuleContext<sealParser::LambdaMulLineContext>(0);
}

sealParser::LambdaSingleLineContext* sealParser::LambdaBlockContext::lambdaSingleLine() {
  return getRuleContext<sealParser::LambdaSingleLineContext>(0);
}

sealParser::TypeContext* sealParser::LambdaBlockContext::type() {
  return getRuleContext<sealParser::TypeContext>(0);
}


size_t sealParser::LambdaBlockContext::getRuleIndex() const {
  return sealParser::RuleLambdaBlock;
}


std::any sealParser::LambdaBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitLambdaBlock(this);
  else
    return visitor->visitChildren(this);
}

sealParser::LambdaBlockContext* sealParser::lambdaBlock() {
  LambdaBlockContext *_localctx = _tracker.createInstance<LambdaBlockContext>(_ctx, getState());
  enterRule(_localctx, 54, sealParser::RuleLambdaBlock);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(428);
    match(sealParser::T__18);
    setState(430);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
    case 1: {
      setState(429);
      type();
      break;
    }

    default:
      break;
    }
    setState(434);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
    case 1: {
      setState(432);
      lambdaMulLine();
      break;
    }

    case 2: {
      setState(433);
      lambdaSingleLine();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LambdaStatementContext ------------------------------------------------------------------

sealParser::LambdaStatementContext::LambdaStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sealParser::LambdaStatementContext::LParen() {
  return getToken(sealParser::LParen, 0);
}

tree::TerminalNode* sealParser::LambdaStatementContext::RParen() {
  return getToken(sealParser::RParen, 0);
}

sealParser::LambdaBlockContext* sealParser::LambdaStatementContext::lambdaBlock() {
  return getRuleContext<sealParser::LambdaBlockContext>(0);
}

std::vector<sealParser::ExprContext *> sealParser::LambdaStatementContext::expr() {
  return getRuleContexts<sealParser::ExprContext>();
}

sealParser::ExprContext* sealParser::LambdaStatementContext::expr(size_t i) {
  return getRuleContext<sealParser::ExprContext>(i);
}


size_t sealParser::LambdaStatementContext::getRuleIndex() const {
  return sealParser::RuleLambdaStatement;
}


std::any sealParser::LambdaStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitLambdaStatement(this);
  else
    return visitor->visitChildren(this);
}

sealParser::LambdaStatementContext* sealParser::lambdaStatement() {
  LambdaStatementContext *_localctx = _tracker.createInstance<LambdaStatementContext>(_ctx, getState());
  enterRule(_localctx, 56, sealParser::RuleLambdaStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(436);
    match(sealParser::LParen);
    setState(445);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 67594539036049504) != 0) || ((((_la - 83) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 83)) & 13) != 0)) {
      setState(437);
      expr(0);
      setState(442);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == sealParser::T__2) {
        setState(438);
        match(sealParser::T__2);
        setState(439);
        expr(0);
        setState(444);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(447);
    match(sealParser::RParen);
    setState(448);
    lambdaBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DoWhileStatementContext ------------------------------------------------------------------

sealParser::DoWhileStatementContext::DoWhileStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sealParser::FunctionBlockContext* sealParser::DoWhileStatementContext::functionBlock() {
  return getRuleContext<sealParser::FunctionBlockContext>(0);
}

tree::TerminalNode* sealParser::DoWhileStatementContext::LParen() {
  return getToken(sealParser::LParen, 0);
}

sealParser::ExprContext* sealParser::DoWhileStatementContext::expr() {
  return getRuleContext<sealParser::ExprContext>(0);
}

tree::TerminalNode* sealParser::DoWhileStatementContext::RParen() {
  return getToken(sealParser::RParen, 0);
}


size_t sealParser::DoWhileStatementContext::getRuleIndex() const {
  return sealParser::RuleDoWhileStatement;
}


std::any sealParser::DoWhileStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitDoWhileStatement(this);
  else
    return visitor->visitChildren(this);
}

sealParser::DoWhileStatementContext* sealParser::doWhileStatement() {
  DoWhileStatementContext *_localctx = _tracker.createInstance<DoWhileStatementContext>(_ctx, getState());
  enterRule(_localctx, 58, sealParser::RuleDoWhileStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(450);
    match(sealParser::T__19);
    setState(451);
    functionBlock();
    setState(452);
    match(sealParser::T__14);
    setState(453);
    match(sealParser::LParen);
    setState(454);
    expr(0);
    setState(455);
    match(sealParser::RParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

sealParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sealParser::LambdaStatementContext* sealParser::StatementContext::lambdaStatement() {
  return getRuleContext<sealParser::LambdaStatementContext>(0);
}

sealParser::NullAccessStatementContext* sealParser::StatementContext::nullAccessStatement() {
  return getRuleContext<sealParser::NullAccessStatementContext>(0);
}

sealParser::IfStatementContext* sealParser::StatementContext::ifStatement() {
  return getRuleContext<sealParser::IfStatementContext>(0);
}

sealParser::WhileStatementContext* sealParser::StatementContext::whileStatement() {
  return getRuleContext<sealParser::WhileStatementContext>(0);
}

sealParser::ForStatementContext* sealParser::StatementContext::forStatement() {
  return getRuleContext<sealParser::ForStatementContext>(0);
}

sealParser::RangeWhileStatementContext* sealParser::StatementContext::rangeWhileStatement() {
  return getRuleContext<sealParser::RangeWhileStatementContext>(0);
}

sealParser::ForeachStatementContext* sealParser::StatementContext::foreachStatement() {
  return getRuleContext<sealParser::ForeachStatementContext>(0);
}

sealParser::CppgptStatementContext* sealParser::StatementContext::cppgptStatement() {
  return getRuleContext<sealParser::CppgptStatementContext>(0);
}

sealParser::ReturnStatementContext* sealParser::StatementContext::returnStatement() {
  return getRuleContext<sealParser::ReturnStatementContext>(0);
}

sealParser::EnumStatementContext* sealParser::StatementContext::enumStatement() {
  return getRuleContext<sealParser::EnumStatementContext>(0);
}

sealParser::WhereStatementContext* sealParser::StatementContext::whereStatement() {
  return getRuleContext<sealParser::WhereStatementContext>(0);
}

sealParser::BreakStatementContext* sealParser::StatementContext::breakStatement() {
  return getRuleContext<sealParser::BreakStatementContext>(0);
}

sealParser::ContinueStatementContext* sealParser::StatementContext::continueStatement() {
  return getRuleContext<sealParser::ContinueStatementContext>(0);
}

sealParser::ClassDefineContext* sealParser::StatementContext::classDefine() {
  return getRuleContext<sealParser::ClassDefineContext>(0);
}

sealParser::InterfaceStatementContext* sealParser::StatementContext::interfaceStatement() {
  return getRuleContext<sealParser::InterfaceStatementContext>(0);
}

sealParser::DoWhileStatementContext* sealParser::StatementContext::doWhileStatement() {
  return getRuleContext<sealParser::DoWhileStatementContext>(0);
}

sealParser::DeleteStatementContext* sealParser::StatementContext::deleteStatement() {
  return getRuleContext<sealParser::DeleteStatementContext>(0);
}


size_t sealParser::StatementContext::getRuleIndex() const {
  return sealParser::RuleStatement;
}


std::any sealParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

sealParser::StatementContext* sealParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 60, sealParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(474);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(457);
      lambdaStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(458);
      nullAccessStatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(459);
      ifStatement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(460);
      whileStatement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(461);
      forStatement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(462);
      rangeWhileStatement();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(463);
      foreachStatement();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(464);
      cppgptStatement();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(465);
      returnStatement();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(466);
      enumStatement();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(467);
      whereStatement();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(468);
      breakStatement();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(469);
      continueStatement();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(470);
      classDefine();
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(471);
      interfaceStatement();
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(472);
      doWhileStatement();
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(473);
      deleteStatement();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PointerDefineContext ------------------------------------------------------------------

sealParser::PointerDefineContext::PointerDefineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sealParser::PointerDefineContext::Ptr() {
  return getToken(sealParser::Ptr, 0);
}

tree::TerminalNode* sealParser::PointerDefineContext::Int() {
  return getToken(sealParser::Int, 0);
}


size_t sealParser::PointerDefineContext::getRuleIndex() const {
  return sealParser::RulePointerDefine;
}


std::any sealParser::PointerDefineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitPointerDefine(this);
  else
    return visitor->visitChildren(this);
}

sealParser::PointerDefineContext* sealParser::pointerDefine() {
  PointerDefineContext *_localctx = _tracker.createInstance<PointerDefineContext>(_ctx, getState());
  enterRule(_localctx, 62, sealParser::RulePointerDefine);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(476);
    match(sealParser::Ptr);
    setState(480);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == sealParser::T__0) {
      setState(477);
      match(sealParser::T__0);
      setState(478);
      match(sealParser::Int);
      setState(479);
      match(sealParser::T__1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDefineContext ------------------------------------------------------------------

sealParser::VariableDefineContext::VariableDefineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sealParser::VariableDefineContext::Id() {
  return getToken(sealParser::Id, 0);
}

tree::TerminalNode* sealParser::VariableDefineContext::Var() {
  return getToken(sealParser::Var, 0);
}

tree::TerminalNode* sealParser::VariableDefineContext::Ref() {
  return getToken(sealParser::Ref, 0);
}

tree::TerminalNode* sealParser::VariableDefineContext::Let() {
  return getToken(sealParser::Let, 0);
}

sealParser::PointerDefineContext* sealParser::VariableDefineContext::pointerDefine() {
  return getRuleContext<sealParser::PointerDefineContext>(0);
}

sealParser::DecoratorContext* sealParser::VariableDefineContext::decorator() {
  return getRuleContext<sealParser::DecoratorContext>(0);
}

sealParser::TypeContext* sealParser::VariableDefineContext::type() {
  return getRuleContext<sealParser::TypeContext>(0);
}

tree::TerminalNode* sealParser::VariableDefineContext::Equal() {
  return getToken(sealParser::Equal, 0);
}

sealParser::ExprContext* sealParser::VariableDefineContext::expr() {
  return getRuleContext<sealParser::ExprContext>(0);
}


size_t sealParser::VariableDefineContext::getRuleIndex() const {
  return sealParser::RuleVariableDefine;
}


std::any sealParser::VariableDefineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitVariableDefine(this);
  else
    return visitor->visitChildren(this);
}

sealParser::VariableDefineContext* sealParser::variableDefine() {
  VariableDefineContext *_localctx = _tracker.createInstance<VariableDefineContext>(_ctx, getState());
  enterRule(_localctx, 64, sealParser::RuleVariableDefine);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(483);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == sealParser::T__22) {
      setState(482);
      decorator();
    }
    setState(489);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case sealParser::Var: {
        setState(485);
        match(sealParser::Var);
        break;
      }

      case sealParser::Ref: {
        setState(486);
        match(sealParser::Ref);
        break;
      }

      case sealParser::Let: {
        setState(487);
        match(sealParser::Let);
        break;
      }

      case sealParser::Ptr: {
        setState(488);
        pointerDefine();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(493);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == sealParser::T__20) {
      setState(491);
      match(sealParser::T__20);
      setState(492);
      type();
    }
    setState(495);
    match(sealParser::Id);
    setState(498);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == sealParser::Equal) {
      setState(496);
      match(sealParser::Equal);
      setState(497);
      expr(0);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionTemplateContext ------------------------------------------------------------------

sealParser::FunctionTemplateContext::FunctionTemplateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sealParser::TemplateDefineStatementContext* sealParser::FunctionTemplateContext::templateDefineStatement() {
  return getRuleContext<sealParser::TemplateDefineStatementContext>(0);
}


size_t sealParser::FunctionTemplateContext::getRuleIndex() const {
  return sealParser::RuleFunctionTemplate;
}


std::any sealParser::FunctionTemplateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitFunctionTemplate(this);
  else
    return visitor->visitChildren(this);
}

sealParser::FunctionTemplateContext* sealParser::functionTemplate() {
  FunctionTemplateContext *_localctx = _tracker.createInstance<FunctionTemplateContext>(_ctx, getState());
  enterRule(_localctx, 66, sealParser::RuleFunctionTemplate);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(500);
    match(sealParser::T__21);
    setState(501);
    templateDefineStatement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionReturnTypeContext ------------------------------------------------------------------

sealParser::FunctionReturnTypeContext::FunctionReturnTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sealParser::FunctionReturnTypeContext::Var() {
  return getToken(sealParser::Var, 0);
}

tree::TerminalNode* sealParser::FunctionReturnTypeContext::Ref() {
  return getToken(sealParser::Ref, 0);
}

tree::TerminalNode* sealParser::FunctionReturnTypeContext::Let() {
  return getToken(sealParser::Let, 0);
}

tree::TerminalNode* sealParser::FunctionReturnTypeContext::Ptr() {
  return getToken(sealParser::Ptr, 0);
}

sealParser::TypeContext* sealParser::FunctionReturnTypeContext::type() {
  return getRuleContext<sealParser::TypeContext>(0);
}


size_t sealParser::FunctionReturnTypeContext::getRuleIndex() const {
  return sealParser::RuleFunctionReturnType;
}


std::any sealParser::FunctionReturnTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitFunctionReturnType(this);
  else
    return visitor->visitChildren(this);
}

sealParser::FunctionReturnTypeContext* sealParser::functionReturnType() {
  FunctionReturnTypeContext *_localctx = _tracker.createInstance<FunctionReturnTypeContext>(_ctx, getState());
  enterRule(_localctx, 68, sealParser::RuleFunctionReturnType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(503);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 32212254720) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }

    setState(504);
    match(sealParser::T__20);
    setState(505);
    type();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDefineContext ------------------------------------------------------------------

sealParser::FunctionDefineContext::FunctionDefineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sealParser::FunctionDefineContext::Fn() {
  return getToken(sealParser::Fn, 0);
}

tree::TerminalNode* sealParser::FunctionDefineContext::Id() {
  return getToken(sealParser::Id, 0);
}

tree::TerminalNode* sealParser::FunctionDefineContext::LParen() {
  return getToken(sealParser::LParen, 0);
}

tree::TerminalNode* sealParser::FunctionDefineContext::RParen() {
  return getToken(sealParser::RParen, 0);
}

sealParser::FunctionBlockContext* sealParser::FunctionDefineContext::functionBlock() {
  return getRuleContext<sealParser::FunctionBlockContext>(0);
}

tree::TerminalNode* sealParser::FunctionDefineContext::End() {
  return getToken(sealParser::End, 0);
}

sealParser::DecoratorContext* sealParser::FunctionDefineContext::decorator() {
  return getRuleContext<sealParser::DecoratorContext>(0);
}

sealParser::FunctionTemplateContext* sealParser::FunctionDefineContext::functionTemplate() {
  return getRuleContext<sealParser::FunctionTemplateContext>(0);
}

sealParser::AgrumentListContext* sealParser::FunctionDefineContext::agrumentList() {
  return getRuleContext<sealParser::AgrumentListContext>(0);
}

tree::TerminalNode* sealParser::FunctionDefineContext::LTo() {
  return getToken(sealParser::LTo, 0);
}

sealParser::FunctionReturnTypeContext* sealParser::FunctionDefineContext::functionReturnType() {
  return getRuleContext<sealParser::FunctionReturnTypeContext>(0);
}


size_t sealParser::FunctionDefineContext::getRuleIndex() const {
  return sealParser::RuleFunctionDefine;
}


std::any sealParser::FunctionDefineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitFunctionDefine(this);
  else
    return visitor->visitChildren(this);
}

sealParser::FunctionDefineContext* sealParser::functionDefine() {
  FunctionDefineContext *_localctx = _tracker.createInstance<FunctionDefineContext>(_ctx, getState());
  enterRule(_localctx, 70, sealParser::RuleFunctionDefine);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(508);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == sealParser::T__22) {
      setState(507);
      decorator();
    }
    setState(511);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == sealParser::T__21) {
      setState(510);
      functionTemplate();
    }
    setState(513);
    match(sealParser::Fn);
    setState(514);
    match(sealParser::Id);
    setState(515);
    match(sealParser::LParen);
    setState(517);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 32220643328) != 0)) {
      setState(516);
      agrumentList();
    }
    setState(519);
    match(sealParser::RParen);
    setState(522);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == sealParser::LTo) {
      setState(520);
      match(sealParser::LTo);
      setState(521);
      functionReturnType();
    }
    setState(526);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case sealParser::T__5: {
        setState(524);
        functionBlock();
        break;
      }

      case sealParser::End: {
        setState(525);
        match(sealParser::End);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassInherfTypeContext ------------------------------------------------------------------

sealParser::ClassInherfTypeContext::ClassInherfTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sealParser::ClassInherfTypeContext::InherfPublic() {
  return getToken(sealParser::InherfPublic, 0);
}

tree::TerminalNode* sealParser::ClassInherfTypeContext::InherfPrivate() {
  return getToken(sealParser::InherfPrivate, 0);
}

tree::TerminalNode* sealParser::ClassInherfTypeContext::Interface() {
  return getToken(sealParser::Interface, 0);
}


size_t sealParser::ClassInherfTypeContext::getRuleIndex() const {
  return sealParser::RuleClassInherfType;
}


std::any sealParser::ClassInherfTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitClassInherfType(this);
  else
    return visitor->visitChildren(this);
}

sealParser::ClassInherfTypeContext* sealParser::classInherfType() {
  ClassInherfTypeContext *_localctx = _tracker.createInstance<ClassInherfTypeContext>(_ctx, getState());
  enterRule(_localctx, 72, sealParser::RuleClassInherfType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(528);
    _la = _input->LA(1);
    if (!(((((_la - 67) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 67)) & 49) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassInherfEntryContext ------------------------------------------------------------------

sealParser::ClassInherfEntryContext::ClassInherfEntryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sealParser::TypeContext* sealParser::ClassInherfEntryContext::type() {
  return getRuleContext<sealParser::TypeContext>(0);
}

sealParser::ClassInherfTypeContext* sealParser::ClassInherfEntryContext::classInherfType() {
  return getRuleContext<sealParser::ClassInherfTypeContext>(0);
}


size_t sealParser::ClassInherfEntryContext::getRuleIndex() const {
  return sealParser::RuleClassInherfEntry;
}


std::any sealParser::ClassInherfEntryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitClassInherfEntry(this);
  else
    return visitor->visitChildren(this);
}

sealParser::ClassInherfEntryContext* sealParser::classInherfEntry() {
  ClassInherfEntryContext *_localctx = _tracker.createInstance<ClassInherfEntryContext>(_ctx, getState());
  enterRule(_localctx, 74, sealParser::RuleClassInherfEntry);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(531);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 67) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 67)) & 49) != 0)) {
      setState(530);
      classInherfType();
    }
    setState(533);
    type();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassInherfContext ------------------------------------------------------------------

sealParser::ClassInherfContext::ClassInherfContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sealParser::ClassInherfContext::RTo() {
  return getToken(sealParser::RTo, 0);
}

std::vector<sealParser::ClassInherfEntryContext *> sealParser::ClassInherfContext::classInherfEntry() {
  return getRuleContexts<sealParser::ClassInherfEntryContext>();
}

sealParser::ClassInherfEntryContext* sealParser::ClassInherfContext::classInherfEntry(size_t i) {
  return getRuleContext<sealParser::ClassInherfEntryContext>(i);
}


size_t sealParser::ClassInherfContext::getRuleIndex() const {
  return sealParser::RuleClassInherf;
}


std::any sealParser::ClassInherfContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitClassInherf(this);
  else
    return visitor->visitChildren(this);
}

sealParser::ClassInherfContext* sealParser::classInherf() {
  ClassInherfContext *_localctx = _tracker.createInstance<ClassInherfContext>(_ctx, getState());
  enterRule(_localctx, 76, sealParser::RuleClassInherf);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(535);
    match(sealParser::RTo);
    setState(536);
    classInherfEntry();
    setState(541);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sealParser::T__2) {
      setState(537);
      match(sealParser::T__2);
      setState(538);
      classInherfEntry();
      setState(543);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassDefineContext ------------------------------------------------------------------

sealParser::ClassDefineContext::ClassDefineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t sealParser::ClassDefineContext::getRuleIndex() const {
  return sealParser::RuleClassDefine;
}

void sealParser::ClassDefineContext::copyFrom(ClassDefineContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- DefineContext ------------------------------------------------------------------

tree::TerminalNode* sealParser::DefineContext::Class() {
  return getToken(sealParser::Class, 0);
}

tree::TerminalNode* sealParser::DefineContext::Id() {
  return getToken(sealParser::Id, 0);
}

sealParser::ClassBlockContext* sealParser::DefineContext::classBlock() {
  return getRuleContext<sealParser::ClassBlockContext>(0);
}

sealParser::DecoratorContext* sealParser::DefineContext::decorator() {
  return getRuleContext<sealParser::DecoratorContext>(0);
}

sealParser::TemplateDefineStatementContext* sealParser::DefineContext::templateDefineStatement() {
  return getRuleContext<sealParser::TemplateDefineStatementContext>(0);
}

sealParser::ClassInherfContext* sealParser::DefineContext::classInherf() {
  return getRuleContext<sealParser::ClassInherfContext>(0);
}

sealParser::DefineContext::DefineContext(ClassDefineContext *ctx) { copyFrom(ctx); }


std::any sealParser::DefineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitDefine(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PreDefineContext ------------------------------------------------------------------

tree::TerminalNode* sealParser::PreDefineContext::Class() {
  return getToken(sealParser::Class, 0);
}

tree::TerminalNode* sealParser::PreDefineContext::Id() {
  return getToken(sealParser::Id, 0);
}

tree::TerminalNode* sealParser::PreDefineContext::End() {
  return getToken(sealParser::End, 0);
}

sealParser::PreDefineContext::PreDefineContext(ClassDefineContext *ctx) { copyFrom(ctx); }


std::any sealParser::PreDefineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitPreDefine(this);
  else
    return visitor->visitChildren(this);
}
sealParser::ClassDefineContext* sealParser::classDefine() {
  ClassDefineContext *_localctx = _tracker.createInstance<ClassDefineContext>(_ctx, getState());
  enterRule(_localctx, 78, sealParser::RuleClassDefine);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(559);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<sealParser::DefineContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(545);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == sealParser::T__22) {
        setState(544);
        decorator();
      }

      setState(547);
      match(sealParser::Class);
      setState(548);
      match(sealParser::Id);
      setState(550);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == sealParser::LTemplate) {
        setState(549);
        templateDefineStatement();
      }
      setState(553);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == sealParser::RTo) {
        setState(552);
        classInherf();
      }
      setState(555);
      classBlock();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<sealParser::PreDefineContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(556);
      match(sealParser::Class);
      setState(557);
      match(sealParser::Id);
      setState(558);
      match(sealParser::End);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AgrumentListContext ------------------------------------------------------------------

sealParser::AgrumentListContext::AgrumentListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<sealParser::VariableDefineContext *> sealParser::AgrumentListContext::variableDefine() {
  return getRuleContexts<sealParser::VariableDefineContext>();
}

sealParser::VariableDefineContext* sealParser::AgrumentListContext::variableDefine(size_t i) {
  return getRuleContext<sealParser::VariableDefineContext>(i);
}


size_t sealParser::AgrumentListContext::getRuleIndex() const {
  return sealParser::RuleAgrumentList;
}


std::any sealParser::AgrumentListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitAgrumentList(this);
  else
    return visitor->visitChildren(this);
}

sealParser::AgrumentListContext* sealParser::agrumentList() {
  AgrumentListContext *_localctx = _tracker.createInstance<AgrumentListContext>(_ctx, getState());
  enterRule(_localctx, 80, sealParser::RuleAgrumentList);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(561);
    variableDefine();
    setState(566);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx);
    while (alt != 1 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1 + 1) {
        setState(562);
        match(sealParser::T__2);
        setState(563);
        variableDefine(); 
      }
      setState(568);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionBlockEntryContext ------------------------------------------------------------------

sealParser::FunctionBlockEntryContext::FunctionBlockEntryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sealParser::StatementContext* sealParser::FunctionBlockEntryContext::statement() {
  return getRuleContext<sealParser::StatementContext>(0);
}

tree::TerminalNode* sealParser::FunctionBlockEntryContext::End() {
  return getToken(sealParser::End, 0);
}

sealParser::ExprContext* sealParser::FunctionBlockEntryContext::expr() {
  return getRuleContext<sealParser::ExprContext>(0);
}

sealParser::VariableDefineContext* sealParser::FunctionBlockEntryContext::variableDefine() {
  return getRuleContext<sealParser::VariableDefineContext>(0);
}


size_t sealParser::FunctionBlockEntryContext::getRuleIndex() const {
  return sealParser::RuleFunctionBlockEntry;
}


std::any sealParser::FunctionBlockEntryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitFunctionBlockEntry(this);
  else
    return visitor->visitChildren(this);
}

sealParser::FunctionBlockEntryContext* sealParser::functionBlockEntry() {
  FunctionBlockEntryContext *_localctx = _tracker.createInstance<FunctionBlockEntryContext>(_ctx, getState());
  enterRule(_localctx, 82, sealParser::RuleFunctionBlockEntry);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(576);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(569);
      statement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(572);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case sealParser::T__4:
        case sealParser::T__5:
        case sealParser::CppRaw:
        case sealParser::Int:
        case sealParser::Float:
        case sealParser::HexNumber:
        case sealParser::Multiply:
        case sealParser::LParen:
        case sealParser::True:
        case sealParser::False:
        case sealParser::DoubleAdd:
        case sealParser::DoubleMinus:
        case sealParser::RefOp:
        case sealParser::String:
        case sealParser::Id: {
          setState(570);
          expr(0);
          break;
        }

        case sealParser::T__22:
        case sealParser::Var:
        case sealParser::Ptr:
        case sealParser::Let:
        case sealParser::Ref: {
          setState(571);
          variableDefine();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(574);
      match(sealParser::End);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionBlockContext ------------------------------------------------------------------

sealParser::FunctionBlockContext::FunctionBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<sealParser::FunctionBlockEntryContext *> sealParser::FunctionBlockContext::functionBlockEntry() {
  return getRuleContexts<sealParser::FunctionBlockEntryContext>();
}

sealParser::FunctionBlockEntryContext* sealParser::FunctionBlockContext::functionBlockEntry(size_t i) {
  return getRuleContext<sealParser::FunctionBlockEntryContext>(i);
}


size_t sealParser::FunctionBlockContext::getRuleIndex() const {
  return sealParser::RuleFunctionBlock;
}


std::any sealParser::FunctionBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitFunctionBlock(this);
  else
    return visitor->visitChildren(this);
}

sealParser::FunctionBlockContext* sealParser::functionBlock() {
  FunctionBlockContext *_localctx = _tracker.createInstance<FunctionBlockContext>(_ctx, getState());
  enterRule(_localctx, 84, sealParser::RuleFunctionBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(578);
    match(sealParser::T__5);
    setState(582);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 68157521295306848) != 0) || ((((_la - 67) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 67)) & 855553) != 0)) {
      setState(579);
      functionBlockEntry();
      setState(584);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(585);
    match(sealParser::T__6);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DecoratorContext ------------------------------------------------------------------

sealParser::DecoratorContext::DecoratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> sealParser::DecoratorContext::Id() {
  return getTokens(sealParser::Id);
}

tree::TerminalNode* sealParser::DecoratorContext::Id(size_t i) {
  return getToken(sealParser::Id, i);
}

tree::TerminalNode* sealParser::DecoratorContext::LParen() {
  return getToken(sealParser::LParen, 0);
}

tree::TerminalNode* sealParser::DecoratorContext::RParen() {
  return getToken(sealParser::RParen, 0);
}


size_t sealParser::DecoratorContext::getRuleIndex() const {
  return sealParser::RuleDecorator;
}


std::any sealParser::DecoratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitDecorator(this);
  else
    return visitor->visitChildren(this);
}

sealParser::DecoratorContext* sealParser::decorator() {
  DecoratorContext *_localctx = _tracker.createInstance<DecoratorContext>(_ctx, getState());
  enterRule(_localctx, 86, sealParser::RuleDecorator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(587);
    match(sealParser::T__22);
    setState(588);
    match(sealParser::Id);
    setState(592);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == sealParser::LParen) {
      setState(589);
      match(sealParser::LParen);
      setState(590);
      match(sealParser::Id);
      setState(591);
      match(sealParser::RParen);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CppgptStatementContext ------------------------------------------------------------------

sealParser::CppgptStatementContext::CppgptStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sealParser::CppgptStatementContext::LParen() {
  return getToken(sealParser::LParen, 0);
}

tree::TerminalNode* sealParser::CppgptStatementContext::String() {
  return getToken(sealParser::String, 0);
}

tree::TerminalNode* sealParser::CppgptStatementContext::RParen() {
  return getToken(sealParser::RParen, 0);
}


size_t sealParser::CppgptStatementContext::getRuleIndex() const {
  return sealParser::RuleCppgptStatement;
}


std::any sealParser::CppgptStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitCppgptStatement(this);
  else
    return visitor->visitChildren(this);
}

sealParser::CppgptStatementContext* sealParser::cppgptStatement() {
  CppgptStatementContext *_localctx = _tracker.createInstance<CppgptStatementContext>(_ctx, getState());
  enterRule(_localctx, 88, sealParser::RuleCppgptStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(594);
    match(sealParser::T__23);
    setState(595);
    match(sealParser::LParen);
    setState(596);
    match(sealParser::String);
    setState(597);
    match(sealParser::RParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LambdaOrFunctionContext ------------------------------------------------------------------

sealParser::LambdaOrFunctionContext::LambdaOrFunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sealParser::LambdaBlockContext* sealParser::LambdaOrFunctionContext::lambdaBlock() {
  return getRuleContext<sealParser::LambdaBlockContext>(0);
}

sealParser::FunctionBlockContext* sealParser::LambdaOrFunctionContext::functionBlock() {
  return getRuleContext<sealParser::FunctionBlockContext>(0);
}


size_t sealParser::LambdaOrFunctionContext::getRuleIndex() const {
  return sealParser::RuleLambdaOrFunction;
}


std::any sealParser::LambdaOrFunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitLambdaOrFunction(this);
  else
    return visitor->visitChildren(this);
}

sealParser::LambdaOrFunctionContext* sealParser::lambdaOrFunction() {
  LambdaOrFunctionContext *_localctx = _tracker.createInstance<LambdaOrFunctionContext>(_ctx, getState());
  enterRule(_localctx, 90, sealParser::RuleLambdaOrFunction);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(601);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case sealParser::T__18: {
        enterOuterAlt(_localctx, 1);
        setState(599);
        lambdaBlock();
        break;
      }

      case sealParser::T__5: {
        enterOuterAlt(_localctx, 2);
        setState(600);
        functionBlock();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassInitInstanceContext ------------------------------------------------------------------

sealParser::ClassInitInstanceContext::ClassInitInstanceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sealParser::ClassInitInstanceContext::Id() {
  return getToken(sealParser::Id, 0);
}

tree::TerminalNode* sealParser::ClassInitInstanceContext::LParen() {
  return getToken(sealParser::LParen, 0);
}

tree::TerminalNode* sealParser::ClassInitInstanceContext::RParen() {
  return getToken(sealParser::RParen, 0);
}

std::vector<sealParser::ExprContext *> sealParser::ClassInitInstanceContext::expr() {
  return getRuleContexts<sealParser::ExprContext>();
}

sealParser::ExprContext* sealParser::ClassInitInstanceContext::expr(size_t i) {
  return getRuleContext<sealParser::ExprContext>(i);
}


size_t sealParser::ClassInitInstanceContext::getRuleIndex() const {
  return sealParser::RuleClassInitInstance;
}


std::any sealParser::ClassInitInstanceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitClassInitInstance(this);
  else
    return visitor->visitChildren(this);
}

sealParser::ClassInitInstanceContext* sealParser::classInitInstance() {
  ClassInitInstanceContext *_localctx = _tracker.createInstance<ClassInitInstanceContext>(_ctx, getState());
  enterRule(_localctx, 92, sealParser::RuleClassInitInstance);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(603);
    match(sealParser::Id);
    setState(604);
    match(sealParser::LParen);
    setState(606);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 67594539036049504) != 0) || ((((_la - 83) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 83)) & 13) != 0)) {
      setState(605);
      expr(0);
    }
    setState(612);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sealParser::T__2) {
      setState(608);
      match(sealParser::T__2);
      setState(609);
      expr(0);
      setState(614);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(615);
    match(sealParser::RParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassInitListContext ------------------------------------------------------------------

sealParser::ClassInitListContext::ClassInitListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<sealParser::ClassInitInstanceContext *> sealParser::ClassInitListContext::classInitInstance() {
  return getRuleContexts<sealParser::ClassInitInstanceContext>();
}

sealParser::ClassInitInstanceContext* sealParser::ClassInitListContext::classInitInstance(size_t i) {
  return getRuleContext<sealParser::ClassInitInstanceContext>(i);
}


size_t sealParser::ClassInitListContext::getRuleIndex() const {
  return sealParser::RuleClassInitList;
}


std::any sealParser::ClassInitListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitClassInitList(this);
  else
    return visitor->visitChildren(this);
}

sealParser::ClassInitListContext* sealParser::classInitList() {
  ClassInitListContext *_localctx = _tracker.createInstance<ClassInitListContext>(_ctx, getState());
  enterRule(_localctx, 94, sealParser::RuleClassInitList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(617);
    classInitInstance();
    setState(622);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sealParser::T__2) {
      setState(618);
      match(sealParser::T__2);
      setState(619);
      classInitInstance();
      setState(624);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassBuildFunctionContext ------------------------------------------------------------------

sealParser::ClassBuildFunctionContext::ClassBuildFunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sealParser::ClassBuildFunctionContext::Id() {
  return getToken(sealParser::Id, 0);
}

tree::TerminalNode* sealParser::ClassBuildFunctionContext::LParen() {
  return getToken(sealParser::LParen, 0);
}

tree::TerminalNode* sealParser::ClassBuildFunctionContext::RParen() {
  return getToken(sealParser::RParen, 0);
}

sealParser::LambdaOrFunctionContext* sealParser::ClassBuildFunctionContext::lambdaOrFunction() {
  return getRuleContext<sealParser::LambdaOrFunctionContext>(0);
}

sealParser::AgrumentListContext* sealParser::ClassBuildFunctionContext::agrumentList() {
  return getRuleContext<sealParser::AgrumentListContext>(0);
}

tree::TerminalNode* sealParser::ClassBuildFunctionContext::LTo() {
  return getToken(sealParser::LTo, 0);
}

sealParser::ClassInitListContext* sealParser::ClassBuildFunctionContext::classInitList() {
  return getRuleContext<sealParser::ClassInitListContext>(0);
}


size_t sealParser::ClassBuildFunctionContext::getRuleIndex() const {
  return sealParser::RuleClassBuildFunction;
}


std::any sealParser::ClassBuildFunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitClassBuildFunction(this);
  else
    return visitor->visitChildren(this);
}

sealParser::ClassBuildFunctionContext* sealParser::classBuildFunction() {
  ClassBuildFunctionContext *_localctx = _tracker.createInstance<ClassBuildFunctionContext>(_ctx, getState());
  enterRule(_localctx, 96, sealParser::RuleClassBuildFunction);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(625);
    match(sealParser::Id);
    setState(626);
    match(sealParser::LParen);
    setState(628);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 32220643328) != 0)) {
      setState(627);
      agrumentList();
    }
    setState(630);
    match(sealParser::RParen);
    setState(633);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == sealParser::LTo) {
      setState(631);
      match(sealParser::LTo);
      setState(632);
      classInitList();
    }
    setState(635);
    lambdaOrFunction();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassDesotryFunctionContext ------------------------------------------------------------------

sealParser::ClassDesotryFunctionContext::ClassDesotryFunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sealParser::ClassDesotryFunctionContext::Id() {
  return getToken(sealParser::Id, 0);
}

tree::TerminalNode* sealParser::ClassDesotryFunctionContext::LParen() {
  return getToken(sealParser::LParen, 0);
}

tree::TerminalNode* sealParser::ClassDesotryFunctionContext::RParen() {
  return getToken(sealParser::RParen, 0);
}

sealParser::LambdaOrFunctionContext* sealParser::ClassDesotryFunctionContext::lambdaOrFunction() {
  return getRuleContext<sealParser::LambdaOrFunctionContext>(0);
}


size_t sealParser::ClassDesotryFunctionContext::getRuleIndex() const {
  return sealParser::RuleClassDesotryFunction;
}


std::any sealParser::ClassDesotryFunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitClassDesotryFunction(this);
  else
    return visitor->visitChildren(this);
}

sealParser::ClassDesotryFunctionContext* sealParser::classDesotryFunction() {
  ClassDesotryFunctionContext *_localctx = _tracker.createInstance<ClassDesotryFunctionContext>(_ctx, getState());
  enterRule(_localctx, 98, sealParser::RuleClassDesotryFunction);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(637);
    match(sealParser::T__24);
    setState(638);
    match(sealParser::Id);
    setState(639);
    match(sealParser::LParen);
    setState(640);
    match(sealParser::RParen);
    setState(641);
    lambdaOrFunction();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassBlockEntryContext ------------------------------------------------------------------

sealParser::ClassBlockEntryContext::ClassBlockEntryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sealParser::VariableDefineContext* sealParser::ClassBlockEntryContext::variableDefine() {
  return getRuleContext<sealParser::VariableDefineContext>(0);
}

tree::TerminalNode* sealParser::ClassBlockEntryContext::End() {
  return getToken(sealParser::End, 0);
}

sealParser::OperatorEntryContext* sealParser::ClassBlockEntryContext::operatorEntry() {
  return getRuleContext<sealParser::OperatorEntryContext>(0);
}

sealParser::FunctionDefineContext* sealParser::ClassBlockEntryContext::functionDefine() {
  return getRuleContext<sealParser::FunctionDefineContext>(0);
}

sealParser::ClassBuildFunctionContext* sealParser::ClassBlockEntryContext::classBuildFunction() {
  return getRuleContext<sealParser::ClassBuildFunctionContext>(0);
}

sealParser::ClassDesotryFunctionContext* sealParser::ClassBlockEntryContext::classDesotryFunction() {
  return getRuleContext<sealParser::ClassDesotryFunctionContext>(0);
}

tree::TerminalNode* sealParser::ClassBlockEntryContext::Override() {
  return getToken(sealParser::Override, 0);
}

tree::TerminalNode* sealParser::ClassBlockEntryContext::Virtual() {
  return getToken(sealParser::Virtual, 0);
}

tree::TerminalNode* sealParser::ClassBlockEntryContext::Static() {
  return getToken(sealParser::Static, 0);
}

tree::TerminalNode* sealParser::ClassBlockEntryContext::Public() {
  return getToken(sealParser::Public, 0);
}

tree::TerminalNode* sealParser::ClassBlockEntryContext::Private() {
  return getToken(sealParser::Private, 0);
}

tree::TerminalNode* sealParser::ClassBlockEntryContext::Protected() {
  return getToken(sealParser::Protected, 0);
}


size_t sealParser::ClassBlockEntryContext::getRuleIndex() const {
  return sealParser::RuleClassBlockEntry;
}


std::any sealParser::ClassBlockEntryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitClassBlockEntry(this);
  else
    return visitor->visitChildren(this);
}

sealParser::ClassBlockEntryContext* sealParser::classBlockEntry() {
  ClassBlockEntryContext *_localctx = _tracker.createInstance<ClassBlockEntryContext>(_ctx, getState());
  enterRule(_localctx, 100, sealParser::RuleClassBlockEntry);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(644);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & 7) != 0)) {
      setState(643);
      _la = _input->LA(1);
      if (!(((((_la - 68) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 68)) & 7) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
    setState(650);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 56, _ctx)) {
    case 1: {
      break;
    }

    case 2: {
      setState(647);
      match(sealParser::Override);
      break;
    }

    case 3: {
      setState(648);
      match(sealParser::Virtual);
      break;
    }

    case 4: {
      setState(649);
      match(sealParser::Static);
      break;
    }

    default:
      break;
    }
    setState(659);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 57, _ctx)) {
    case 1: {
      setState(652);
      variableDefine();
      setState(653);
      match(sealParser::End);
      break;
    }

    case 2: {
      setState(655);
      operatorEntry();
      break;
    }

    case 3: {
      setState(656);
      functionDefine();
      break;
    }

    case 4: {
      setState(657);
      classBuildFunction();
      break;
    }

    case 5: {
      setState(658);
      classDesotryFunction();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperatbleSymbolContext ------------------------------------------------------------------

sealParser::OperatbleSymbolContext::OperatbleSymbolContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sealParser::OperatbleSymbolContext::DoubleAdd() {
  return getToken(sealParser::DoubleAdd, 0);
}

tree::TerminalNode* sealParser::OperatbleSymbolContext::DoubleMinus() {
  return getToken(sealParser::DoubleMinus, 0);
}

tree::TerminalNode* sealParser::OperatbleSymbolContext::Plus() {
  return getToken(sealParser::Plus, 0);
}

tree::TerminalNode* sealParser::OperatbleSymbolContext::Minus() {
  return getToken(sealParser::Minus, 0);
}

tree::TerminalNode* sealParser::OperatbleSymbolContext::Multiply() {
  return getToken(sealParser::Multiply, 0);
}

tree::TerminalNode* sealParser::OperatbleSymbolContext::Divide() {
  return getToken(sealParser::Divide, 0);
}

tree::TerminalNode* sealParser::OperatbleSymbolContext::Mod() {
  return getToken(sealParser::Mod, 0);
}

tree::TerminalNode* sealParser::OperatbleSymbolContext::Fn() {
  return getToken(sealParser::Fn, 0);
}


size_t sealParser::OperatbleSymbolContext::getRuleIndex() const {
  return sealParser::RuleOperatbleSymbol;
}


std::any sealParser::OperatbleSymbolContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitOperatbleSymbol(this);
  else
    return visitor->visitChildren(this);
}

sealParser::OperatbleSymbolContext* sealParser::operatbleSymbol() {
  OperatbleSymbolContext *_localctx = _tracker.createInstance<OperatbleSymbolContext>(_ctx, getState());
  enterRule(_localctx, 102, sealParser::RuleOperatbleSymbol);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(661);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 54077314748645376) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperatorEntryContext ------------------------------------------------------------------

sealParser::OperatorEntryContext::OperatorEntryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sealParser::OperatorEntryContext::Opeartor() {
  return getToken(sealParser::Opeartor, 0);
}

sealParser::OperatbleSymbolContext* sealParser::OperatorEntryContext::operatbleSymbol() {
  return getRuleContext<sealParser::OperatbleSymbolContext>(0);
}

tree::TerminalNode* sealParser::OperatorEntryContext::LParen() {
  return getToken(sealParser::LParen, 0);
}

tree::TerminalNode* sealParser::OperatorEntryContext::RParen() {
  return getToken(sealParser::RParen, 0);
}

tree::TerminalNode* sealParser::OperatorEntryContext::LTo() {
  return getToken(sealParser::LTo, 0);
}

sealParser::FunctionBlockContext* sealParser::OperatorEntryContext::functionBlock() {
  return getRuleContext<sealParser::FunctionBlockContext>(0);
}

std::vector<sealParser::AgrumentListContext *> sealParser::OperatorEntryContext::agrumentList() {
  return getRuleContexts<sealParser::AgrumentListContext>();
}

sealParser::AgrumentListContext* sealParser::OperatorEntryContext::agrumentList(size_t i) {
  return getRuleContext<sealParser::AgrumentListContext>(i);
}

sealParser::FunctionReturnTypeContext* sealParser::OperatorEntryContext::functionReturnType() {
  return getRuleContext<sealParser::FunctionReturnTypeContext>(0);
}


size_t sealParser::OperatorEntryContext::getRuleIndex() const {
  return sealParser::RuleOperatorEntry;
}


std::any sealParser::OperatorEntryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitOperatorEntry(this);
  else
    return visitor->visitChildren(this);
}

sealParser::OperatorEntryContext* sealParser::operatorEntry() {
  OperatorEntryContext *_localctx = _tracker.createInstance<OperatorEntryContext>(_ctx, getState());
  enterRule(_localctx, 104, sealParser::RuleOperatorEntry);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(663);
    match(sealParser::Opeartor);
    setState(664);
    operatbleSymbol();
    setState(665);
    match(sealParser::LParen);
    setState(669);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 32220643328) != 0)) {
      setState(666);
      agrumentList();
      setState(671);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(672);
    match(sealParser::RParen);
    setState(673);
    match(sealParser::LTo);
    setState(675);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 32212254720) != 0)) {
      setState(674);
      functionReturnType();
    }
    setState(677);
    functionBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassBlockContext ------------------------------------------------------------------

sealParser::ClassBlockContext::ClassBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<sealParser::ClassBlockEntryContext *> sealParser::ClassBlockContext::classBlockEntry() {
  return getRuleContexts<sealParser::ClassBlockEntryContext>();
}

sealParser::ClassBlockEntryContext* sealParser::ClassBlockContext::classBlockEntry(size_t i) {
  return getRuleContext<sealParser::ClassBlockEntryContext>(i);
}


size_t sealParser::ClassBlockContext::getRuleIndex() const {
  return sealParser::RuleClassBlock;
}


std::any sealParser::ClassBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitClassBlock(this);
  else
    return visitor->visitChildren(this);
}

sealParser::ClassBlockContext* sealParser::classBlock() {
  ClassBlockContext *_localctx = _tracker.createInstance<ClassBlockContext>(_ctx, getState());
  enterRule(_localctx, 106, sealParser::RuleClassBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(679);
    match(sealParser::T__5);
    setState(683);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 66618130432) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & 327911) != 0)) {
      setState(680);
      classBlockEntry();
      setState(685);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(686);
    match(sealParser::T__6);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhereCaseContext ------------------------------------------------------------------

sealParser::WhereCaseContext::WhereCaseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sealParser::WhereCaseContext::Case() {
  return getToken(sealParser::Case, 0);
}

sealParser::ExprContext* sealParser::WhereCaseContext::expr() {
  return getRuleContext<sealParser::ExprContext>(0);
}

sealParser::LambdaOrFunctionContext* sealParser::WhereCaseContext::lambdaOrFunction() {
  return getRuleContext<sealParser::LambdaOrFunctionContext>(0);
}


size_t sealParser::WhereCaseContext::getRuleIndex() const {
  return sealParser::RuleWhereCase;
}


std::any sealParser::WhereCaseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitWhereCase(this);
  else
    return visitor->visitChildren(this);
}

sealParser::WhereCaseContext* sealParser::whereCase() {
  WhereCaseContext *_localctx = _tracker.createInstance<WhereCaseContext>(_ctx, getState());
  enterRule(_localctx, 108, sealParser::RuleWhereCase);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(688);
    match(sealParser::Case);
    setState(689);
    expr(0);
    setState(690);
    match(sealParser::T__20);
    setState(691);
    lambdaOrFunction();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhereBlockContext ------------------------------------------------------------------

sealParser::WhereBlockContext::WhereBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<sealParser::WhereCaseContext *> sealParser::WhereBlockContext::whereCase() {
  return getRuleContexts<sealParser::WhereCaseContext>();
}

sealParser::WhereCaseContext* sealParser::WhereBlockContext::whereCase(size_t i) {
  return getRuleContext<sealParser::WhereCaseContext>(i);
}


size_t sealParser::WhereBlockContext::getRuleIndex() const {
  return sealParser::RuleWhereBlock;
}


std::any sealParser::WhereBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitWhereBlock(this);
  else
    return visitor->visitChildren(this);
}

sealParser::WhereBlockContext* sealParser::whereBlock() {
  WhereBlockContext *_localctx = _tracker.createInstance<WhereBlockContext>(_ctx, getState());
  enterRule(_localctx, 110, sealParser::RuleWhereBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(693);
    match(sealParser::T__5);
    setState(694);
    whereCase();
    setState(698);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sealParser::Case) {
      setState(695);
      whereCase();
      setState(700);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(701);
    match(sealParser::T__6);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhereStatementContext ------------------------------------------------------------------

sealParser::WhereStatementContext::WhereStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sealParser::WhereStatementContext::LParen() {
  return getToken(sealParser::LParen, 0);
}

sealParser::ExprContext* sealParser::WhereStatementContext::expr() {
  return getRuleContext<sealParser::ExprContext>(0);
}

tree::TerminalNode* sealParser::WhereStatementContext::RParen() {
  return getToken(sealParser::RParen, 0);
}

sealParser::WhereBlockContext* sealParser::WhereStatementContext::whereBlock() {
  return getRuleContext<sealParser::WhereBlockContext>(0);
}


size_t sealParser::WhereStatementContext::getRuleIndex() const {
  return sealParser::RuleWhereStatement;
}


std::any sealParser::WhereStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitWhereStatement(this);
  else
    return visitor->visitChildren(this);
}

sealParser::WhereStatementContext* sealParser::whereStatement() {
  WhereStatementContext *_localctx = _tracker.createInstance<WhereStatementContext>(_ctx, getState());
  enterRule(_localctx, 112, sealParser::RuleWhereStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(703);
    match(sealParser::T__25);
    setState(704);
    match(sealParser::LParen);
    setState(705);
    expr(0);
    setState(706);
    match(sealParser::RParen);
    setState(707);
    whereBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SingleTypeContext ------------------------------------------------------------------

sealParser::SingleTypeContext::SingleTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sealParser::SingleTypeContext::Id() {
  return getToken(sealParser::Id, 0);
}

sealParser::TemplateCallStatementContext* sealParser::SingleTypeContext::templateCallStatement() {
  return getRuleContext<sealParser::TemplateCallStatementContext>(0);
}


size_t sealParser::SingleTypeContext::getRuleIndex() const {
  return sealParser::RuleSingleType;
}


std::any sealParser::SingleTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitSingleType(this);
  else
    return visitor->visitChildren(this);
}

sealParser::SingleTypeContext* sealParser::singleType() {
  SingleTypeContext *_localctx = _tracker.createInstance<SingleTypeContext>(_ctx, getState());
  enterRule(_localctx, 114, sealParser::RuleSingleType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(709);
    match(sealParser::Id);
    setState(711);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == sealParser::LTemplate) {
      setState(710);
      templateCallStatement();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NormalTypeContext ------------------------------------------------------------------

sealParser::NormalTypeContext::NormalTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<sealParser::SingleTypeContext *> sealParser::NormalTypeContext::singleType() {
  return getRuleContexts<sealParser::SingleTypeContext>();
}

sealParser::SingleTypeContext* sealParser::NormalTypeContext::singleType(size_t i) {
  return getRuleContext<sealParser::SingleTypeContext>(i);
}

std::vector<tree::TerminalNode *> sealParser::NormalTypeContext::Dot() {
  return getTokens(sealParser::Dot);
}

tree::TerminalNode* sealParser::NormalTypeContext::Dot(size_t i) {
  return getToken(sealParser::Dot, i);
}


size_t sealParser::NormalTypeContext::getRuleIndex() const {
  return sealParser::RuleNormalType;
}


std::any sealParser::NormalTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitNormalType(this);
  else
    return visitor->visitChildren(this);
}

sealParser::NormalTypeContext* sealParser::normalType() {
  NormalTypeContext *_localctx = _tracker.createInstance<NormalTypeContext>(_ctx, getState());
  enterRule(_localctx, 116, sealParser::RuleNormalType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(713);
    singleType();
    setState(720);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sealParser::Dot) {
      setState(714);
      match(sealParser::Dot);
      setState(716);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx)) {
      case 1: {
        setState(715);
        singleType();
        break;
      }

      default:
        break;
      }
      setState(722);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayTypeContext ------------------------------------------------------------------

sealParser::ArrayTypeContext::ArrayTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sealParser::ArrayTypeContext::Id() {
  return getToken(sealParser::Id, 0);
}

std::vector<sealParser::ExprContext *> sealParser::ArrayTypeContext::expr() {
  return getRuleContexts<sealParser::ExprContext>();
}

sealParser::ExprContext* sealParser::ArrayTypeContext::expr(size_t i) {
  return getRuleContext<sealParser::ExprContext>(i);
}


size_t sealParser::ArrayTypeContext::getRuleIndex() const {
  return sealParser::RuleArrayType;
}


std::any sealParser::ArrayTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitArrayType(this);
  else
    return visitor->visitChildren(this);
}

sealParser::ArrayTypeContext* sealParser::arrayType() {
  ArrayTypeContext *_localctx = _tracker.createInstance<ArrayTypeContext>(_ctx, getState());
  enterRule(_localctx, 118, sealParser::RuleArrayType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(723);
    match(sealParser::Id);
    setState(724);
    match(sealParser::T__0);
    setState(725);
    expr(0);
    setState(726);
    match(sealParser::T__1);
    setState(733);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sealParser::T__0) {
      setState(727);
      match(sealParser::T__0);
      setState(728);
      expr(0);
      setState(729);
      match(sealParser::T__1);
      setState(735);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

sealParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sealParser::NormalTypeContext* sealParser::TypeContext::normalType() {
  return getRuleContext<sealParser::NormalTypeContext>(0);
}

sealParser::ArrayTypeContext* sealParser::TypeContext::arrayType() {
  return getRuleContext<sealParser::ArrayTypeContext>(0);
}


size_t sealParser::TypeContext::getRuleIndex() const {
  return sealParser::RuleType;
}


std::any sealParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

sealParser::TypeContext* sealParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 120, sealParser::RuleType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(738);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 66, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(736);
      normalType();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(737);
      arrayType();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CppLiteralContext ------------------------------------------------------------------

sealParser::CppLiteralContext::CppLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sealParser::CppLiteralContext::CppRaw() {
  return getToken(sealParser::CppRaw, 0);
}


size_t sealParser::CppLiteralContext::getRuleIndex() const {
  return sealParser::RuleCppLiteral;
}


std::any sealParser::CppLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sealVisitor*>(visitor))
    return parserVisitor->visitCppLiteral(this);
  else
    return visitor->visitChildren(this);
}

sealParser::CppLiteralContext* sealParser::cppLiteral() {
  CppLiteralContext *_localctx = _tracker.createInstance<CppLiteralContext>(_ctx, getState());
  enterRule(_localctx, 122, sealParser::RuleCppLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(740);
    match(sealParser::CppRaw);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool sealParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 3: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool sealParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 31);
    case 1: return precpred(_ctx, 30);
    case 2: return precpred(_ctx, 25);
    case 3: return precpred(_ctx, 24);
    case 4: return precpred(_ctx, 23);
    case 5: return precpred(_ctx, 20);
    case 6: return precpred(_ctx, 19);
    case 7: return precpred(_ctx, 14);
    case 8: return precpred(_ctx, 13);
    case 9: return precpred(_ctx, 12);
    case 10: return precpred(_ctx, 11);
    case 11: return precpred(_ctx, 10);
    case 12: return precpred(_ctx, 9);
    case 13: return precpred(_ctx, 29);
    case 14: return precpred(_ctx, 28);
    case 15: return precpred(_ctx, 27);
    case 16: return precpred(_ctx, 22);

  default:
    break;
  }
  return true;
}

void sealParser::initialize() {
  ::antlr4::internal::call_once(sealParserOnceFlag, sealParserInitialize);
}
