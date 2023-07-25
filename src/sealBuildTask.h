#pragma once

#include "sealLexer.h"
#include "sealParser.h"
#include "sealLog.h"
#include "sealASTVisitor.h"

#include <windows.h>
#include <direct.h>
#include <shellapi.h>
#include <comutil.h>

#ifdef _DEBUG
#	pragma comment(lib, "./antlr4-enviroment/debug/antlr4-runtime.lib")
#else
#	pragma comment(lib, "./antlr4-enviroment/release/antlr4-runtime.lib")
#endif
#pragma comment(lib, "comsuppw.lib")
#pragma comment(lib, "Shell32.lib")

class sealBuildTask
{
public:
	sealBuildTask();
	~sealBuildTask();

public:
	void addFile(const std::string& filePath)	  { files.push_back(filePath); }
	void staticCompile(const bool& compileMode)   { staticLinker = compileMode; }
	void setOuput(const std::string& outputPath)  { output = outputPath; }
	void setDetalied(const bool& detaliedInfo)	  { detalied = detaliedInfo; }
	void setMainFile(const std::string& file)	  { mainFile = file; }

public:
	void startBuilding();

private:
	void printLog(const logColor& color, const std::string& logString);

private:
	std::vector<std::string> files;
	std::string output;
	std::string mainFile;
	bool staticLinker;
	bool detalied;
};

class sealErrorListener : public antlr4::BaseErrorListener {
public:
	sealErrorListener() {
		exisitsError = false;
	}
	void syntaxError(antlr4::Recognizer* recognizer, antlr4::Token* offendingSymbol, size_t line,
		size_t charPositionInLine, const std::string& msg, std::exception_ptr e) override {
		_log.print(logColor::red, std::format("SyntaxError(File : {}) At line {}, {} : {}!", fileName, line, charPositionInLine, msg));

		exisitsError = true;
	}

public:
	std::string fileName;
	bool exisitsError;
};

class sealTransformer {
public:
	sealTransformer();
	static bool transform(const std::string& file, const bool& isExecute);
};

class sealCompiler {
public:
	static void compile(const std::string& compileFile, const std::string& output, bool staticCompile);
};