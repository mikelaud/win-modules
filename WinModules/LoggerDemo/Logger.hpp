#pragma once
#ifndef LOGGER_HPP_
#define LOGGER_HPP_


class Logger {
public: // iface
	void log();
public: // ctor
	Logger();
public: // Rule of Zero (Rule of the Five defaults)
	~Logger() = default;

	Logger(const Logger&) = default;
	Logger(Logger&&) = default;

	Logger& operator=(const Logger&) = default;
	Logger& operator=(Logger&&) = default;
};

#endif // LOGGER_HPP_
