#pragma once
#include <string>
using std::string;
#include <SDL_log.h>

enum class LogCategory
{
	Application = SDL_LOG_CATEGORY_APPLICATION, // Enums are actually ints, from 0 by default.
	Assert = SDL_LOG_CATEGORY_ASSERT,
	Audio = SDL_LOG_CATEGORY_AUDIO,
	Error = SDL_LOG_CATEGORY_ERROR,
	Input = SDL_LOG_CATEGORY_INPUT,
	Render = SDL_LOG_CATEGORY_RENDER,
	System = SDL_LOG_CATEGORY_SYSTEM,
	Test = SDL_LOG_CATEGORY_TEST,
	Video = SDL_LOG_CATEGORY_VIDEO


};

class Log
{
public:
	Log() = delete; // We delete all these so they cannot be used.
	// Copy Constructor
	Log(const Log&) = delete;
	// Assignment Operator
	Log& operator=(const Log&) = delete;

	static void info(const string& message); // Static functions can be called without instantiating.
	static void error(LogCategory category, const string& message);

};

