#pragma once
#ifndef LOGGER_HPP_
#define LOGGER_HPP_

#include "LoggerHolder.hpp"

#include <memory>


class Logger {

private: // fields

	std::shared_ptr<LoggerHolder> mHolder;

public: // interface

	inline void log() { mHolder->log(); }

public: // factory

	Logger() : mHolder(std::make_shared<LoggerHolder>()) {}
	~Logger() = default;

public: // factory (default)

	Logger(const Logger&) = default;
	Logger(Logger&&) = default;

	Logger& operator=(const Logger&) = default;
	Logger& operator=(Logger&&) = default;
};


#endif // LOGGER_HPP_
