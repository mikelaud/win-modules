#include "LoggerHolder.hpp"

#include <iostream>
#include <memory>


LoggerHolder::LoggerHolder() : mLoggerWin(std::make_unique<LoggerWin>())
{
	// void
}

LoggerHolder::~LoggerHolder()
{
	// void
}

void LoggerHolder::log()
{
	mLoggerWin->log();
}
