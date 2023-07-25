#pragma once

#include <iostream>
#include <string>
#include <format>

enum class logColor {
	black = 30,
	red = 31,
	green = 32,
	yellow = 33,
	blue = 34,
	magenta = 35,
	cyan = 36,
	white = 37
};

class sealLog {
public:
	sealLog();

public:
	void print(const logColor& color, const std::string& log);
};

extern sealLog _log;