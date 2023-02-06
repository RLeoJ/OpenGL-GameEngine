#pragma once
#include <SDL.h>

const int WINDOW_WIDTH = 1900;
const int WINDOW_HEIGHT = 600;


class Window
{
public:
	Window();	
	Window(const Window&) = delete;
	Window& operator=(const Window&) = delete;

	bool initialize();
	void close();

	SDL_Window* getSDLWindow() const { return SDLWindow; }
	int getHeight() const { return height; }
	int getWidth() const { return width; }

private:
	SDL_Window* SDLWindow;
	int height;
	int width;

};