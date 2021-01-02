#include "Logger.hpp"

#include <iostream>


Logger::Logger()
{
	std::cout << "[Logger] ctor" << std::endl;
}

void Logger::log()
{
	std::cout << "[Logger] log" << std::endl;
}
