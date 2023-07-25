#include "sealCommandParser.h"

int main(int argc, char* agruments[])
{
	sealCommandParser parser(argc, agruments);
	auto buildTask = parser.getBuildTask();
	if (buildTask != nullptr) {
		buildTask->startBuilding();

		delete buildTask;
	}
	else {
		_log.print(logColor::cyan, "SEAL Compiler [v1.0.0]\n");
		_log.print(logColor::magenta, "Usage:");
		_log.print(logColor::white, "\t\t-m <file name> : Specify main file");
		_log.print(logColor::white, "\t\t-d : Compiler debug mode");
		_log.print(logColor::white, "\t\t-s : Enable static compile");
		_log.print(logColor::white, "\t\t<file name> : Specify file\n");
		_log.print(logColor::magenta, "Example:");
		_log.print(logColor::white, "\t\tseal -main main.se module.se -static");
	}

	return 0;
}