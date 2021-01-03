#pragma once
#ifndef LOGGER_WIN_HPP_
#define LOGGER_WIN_HPP_


class LoggerWin {

private: // fields

	// void

public: // interface

	void log();

public: // factory

	LoggerWin();
	~LoggerWin();

public: // factory (delete)

	LoggerWin(const LoggerWin&) = delete;
	LoggerWin(LoggerWin&&) = delete;

	LoggerWin& operator=(const LoggerWin&) = delete;
	LoggerWin& operator=(LoggerWin&&) = delete;
};


#endif // LOGGER_WIN_HPP_
