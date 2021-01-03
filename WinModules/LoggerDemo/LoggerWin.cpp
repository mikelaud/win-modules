#include "LoggerWin.hpp"

#include <iostream>


LoggerWin::LoggerWin()
{
	std::cout << "[Logger] ctor" << std::endl;
}

LoggerWin::~LoggerWin()
{
	std::cout << "[Logger] dtor" << std::endl;
}

void LoggerWin::log()
{
	std::cout << "[Logger] log" << std::endl;
}
