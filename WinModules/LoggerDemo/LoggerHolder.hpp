#pragma once
#ifndef LOGGER_HOLDER_HPP_
#define LOGGER_HOLDER_HPP_

#include "LoggerWin.hpp"

#include <memory>


class LoggerHolder {

private: // fields

	std::unique_ptr<LoggerWin> mLoggerWin;

public: // interface

	void log();

public: // factory

	LoggerHolder();
	~LoggerHolder();

public: // factory (delete)

	LoggerHolder(const LoggerHolder&) = delete;
	LoggerHolder(LoggerHolder&&) = delete;

	LoggerHolder& operator=(const LoggerHolder&) = delete;
	LoggerHolder& operator=(LoggerHolder&&) = delete;
};


#endif // LOGGER_HOLDER_HPP_
