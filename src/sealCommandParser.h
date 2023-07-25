#pragma once

#include "sealBuildTask.h"

#include <string>
#include <vector>

class sealCommandParser {
public:
	sealCommandParser(int argc, char* agruments[]);

public:
	sealBuildTask* getBuildTask();

private:
	std::vector<std::string> agrument;
};