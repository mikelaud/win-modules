#include "Logger.hpp"

#include <iostream>


Logger::Logger()
{
	std::cout << "[Logger] ctor";
}

void Logger::log()
{
	std::cout << "[Logger] log";
}
