#include "sealConstant.h"
#include "sealHelper.h"

const char* sealTrueConstant = "true";
const char* sealFalseConstant = "false";

std::string anyCast(const std::any& anyObject) {
	if (anyObject.type() == typeid(const char*)) {
		return std::any_cast<const char*>(anyObject);
	}
	if (anyObject.type() == typeid(char*)) {
		return std::any_cast<char*>(anyObject);
	}

	return std::any_cast<std::string>(anyObject);
}