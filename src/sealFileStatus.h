#pragma once

#include "sealHelper.h"
#include "sealConstant.h"

#include <map>

enum class runtimeTypeInfo {
	_variable, _class, _function, _lambda, _enum, _module
};

struct sealFileStatus {
	bool inModule;
	std::string moduleName;

	sealFileStatus();
};