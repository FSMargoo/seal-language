#include "sealLog.h"

sealLog _log;

sealLog::sealLog() {
	std::ios::sync_with_stdio(false);
}
void sealLog::print(const logColor& color, const std::string& log) {
	std::cout << std::format("\x1B[{}m{}\033[0m\n", std::to_string((int)color), log);
}