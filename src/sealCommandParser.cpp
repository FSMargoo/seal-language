#include "sealCommandParser.h"

sealCommandParser::sealCommandParser(int argc, char* agruments[]) {
	if (argc != 1) {
		agrument = { agruments + 1, agruments + argc };
	}
}
sealBuildTask* sealCommandParser::getBuildTask() {
	if (agrument.empty()) {
		return nullptr;
	}

	sealBuildTask* task = new sealBuildTask;

	for (auto arg = agrument.begin(); arg != agrument.end(); ++arg) {
		if (*arg == "-o") {
			++arg;
			task->setOuput(*arg);
		}
		else if (*arg == "-m") {
			++arg;
			task->setMainFile(*arg);
		}
		else if (*arg == "-d") {
			task->setDetalied(true);
		}
		else if (*arg == "-s") {
			task->staticCompile(true);
		}
		else {
			task->addFile(*arg);
		}
	}

	return task;
}