#include "sealBuildTask.h"

#include <filesystem>
#include <string>

sealBuildTask::sealBuildTask() {
	staticLinker = false;
	detalied = false;
	output = "a.exe";
}
sealBuildTask::~sealBuildTask() {

}
void sealBuildTask::startBuilding() {
	printLog(logColor::white, "Startup building...");
	if (mainFile.empty()) {
		_log.print(logColor::yellow, "[Compiler] : No main file specified, trying to find \'main.se\'...");
		int count = 0;
		for (auto& file : files) {
			printLog(logColor::cyan, std::format("Scanned file <{}>", file));
			if (file == "main.se") {
				_log.print(logColor::green, "[Compiler] : Found the main file, continue compiling...");

				mainFile = "main.se";
				files.erase(files.begin() + count);

				break;
			}

			++count;
		}

		if (mainFile.empty()) {
			_log.print(logColor::red, "[Compiler] : No main file founded! Compile task end.");

			return;
		}
	}

	(_mkdir("./tmp") == 0);

	for (auto& moduleName : files) {
		if (!sealTransformer::transform(moduleName, false)) {
			return;
		}
		if (detalied) {
			_log.print(logColor::green, std::format("[Compiler] : Sucessful deal file {}", moduleName));
		}
	}

	if (!sealTransformer::transform(mainFile, true)) {
		return;
	}

	if (detalied) {
		_log.print(logColor::green, std::format("[Compiler] : Sucessful deal file {}", mainFile));
	}

	sealCompiler::compile("./tmp/main.cpp", output, staticLinker);

	if (!detalied) { system("rd /s /q .\\tmp"); }
}

void sealBuildTask::printLog(const logColor& color, const std::string& logString) {
	if (detalied) {
		_log.print(color, "[Compiler] : " + logString);
	}
}

sealTransformer::sealTransformer() {
}
bool sealTransformer::transform(const std::string& file, const bool& isExecute) {
	sealErrorListener listener;
	listener.fileName = file;

	std::ifstream readStream(file);
	antlr4::ANTLRInputStream antlrStream(readStream);
	sealLexer lexer(&antlrStream);
	antlr4::CommonTokenStream tokensStream(&lexer);

	sealParser parser(&tokensStream);
	parser.removeErrorListeners();
	parser.addErrorListener(&listener);

	if (listener.exisitsError) {
		return false;
	}

	std::string fileName = "./tmp/";

	sealASTVisitor transformer;
	auto code = transformer.visitNode(parser.start());
	if (transformer.status.inModule) {
		for (auto& characeter : transformer.status.moduleName) {
			if (characeter != '.') {
				fileName.push_back(characeter);
			}
			else {
				fileName.push_back('_');
			}
		}

		fileName.append(".hpp");
	}
	else {
		fileName = "./tmp/main.cpp";
	}
	std::ofstream outStream(fileName);
	parser.removeErrorListeners();
	parser.addErrorListener(&listener);
	if (listener.exisitsError) {
		outStream.close();
		return false;
	}
	outStream << code;
	outStream.close();

	return true;
}

void sealCompiler::compile(const std::string& compileFile, const std::string& output, bool staticCompile) {
	wchar_t LocalPath[MAX_PATH + 1] = { 0 };
	GetModuleFileName(NULL, LocalPath, MAX_PATH);
	_bstr_t ConvertString = LocalPath;
	std::string PathString = (char*)ConvertString;
	PathString = PathString.substr(0, PathString.find_last_of("\\"));
	std::string staticString = PathString + "\\backend\\include\\seallib-static.pch";
	std::string dynamicString = PathString + "\\backend\\include\\seallib.pch";
	std::string executeAgrument;
	std::ifstream stream(PathString + "\\lib.config");
	std::string libContext;
	std::getline(stream, libContext);
	stream.close();
	libContext = PathString + libContext;

	_log.print(logColor::green, PathString);

	if (staticCompile) {
		executeAgrument = std::format("{} -o {} -I./tmp -std=c++20 -fuse-ld=lld -static {} -lpolyfill -lpthread -leasyx -Wno-pragma-pack", compileFile, output, libContext);
	}
	else {
		executeAgrument = std::format("{} -o {} -I./tmp -std=c++20 -fuse-ld=lld {} -lpolyfill -lpthread -leasyx -Wno-pragma-pack", compileFile, output, libContext);

		_log.print(logColor::yellow, "This seal program IS NOT in static compile, make sure you have a libc++ and g++ runtime enviroment in your PC.");
		_log.print(logColor::yellow, "Or you can use -static flag to static link the file to avoid the problem.");
	}

	SECURITY_ATTRIBUTES saAttr;
	saAttr.nLength = sizeof(SECURITY_ATTRIBUTES);
	saAttr.bInheritHandle = TRUE;
	saAttr.lpSecurityDescriptor = NULL;

	HANDLE hReadPipe, hWritePipe;

	if (!CreatePipe(&hReadPipe, &hWritePipe, &saAttr, 0)) {
		_log.print(logColor::red, "Error creating pipe.");
		return;
	}

	if (!SetHandleInformation(hReadPipe, HANDLE_FLAG_INHERIT, 0)) {
		_log.print(logColor::red, "Error setting pipe handle information.");
		return;
	}

	_bstr_t string = (executeAgrument).c_str();

	PROCESS_INFORMATION pi;
	ZeroMemory(&pi, sizeof(PROCESS_INFORMATION));

	STARTUPINFO si;
	ZeroMemory(&si, sizeof(STARTUPINFO));
	si.cb = sizeof(STARTUPINFO);
	si.hStdOutput = hWritePipe;
	si.hStdError = hWritePipe;
	si.dwFlags |= STARTF_USESTDHANDLES;

	if (!CreateProcess(NULL, L"backend\\bin\\cper++.exe " + string, NULL, NULL, TRUE, 0, NULL, NULL, &si, &pi)) {
		return;
	}

	CloseHandle(hWritePipe);

	const int MAX_BUFFER_SIZE = 4096;
	char buffer[MAX_BUFFER_SIZE];
	DWORD bytesRead;

	while (ReadFile(hReadPipe, buffer, sizeof(buffer) - 1, &bytesRead, NULL) && bytesRead != 0) {
		buffer[bytesRead] = '\0';
		_log.print(logColor::red, buffer);
	}

	CloseHandle(hReadPipe);
	CloseHandle(pi.hProcess);
	CloseHandle(pi.hThread);
}