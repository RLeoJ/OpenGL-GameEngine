#include "Renderer.h"
#include "Log.h"

Renderer::Renderer() : SDLRenderer(nullptr)
{
}

bool Renderer::initialize(Window& window)
{
	SDLRenderer = SDL_CreateRenderer(window.getSDLWindow(), -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
	if (!SDLRenderer)
	{
		Log::error(LogCategory::Video, "Failed to create renderer");
		return false;
	}
	return true;
}

void Renderer::beginDraw()
{
	SDL_SetRenderDrawColor(SDLRenderer, 120, 120, 255, 255);
	SDL_RenderClear(SDLRenderer);
}

void Renderer::drawRect(Rectangle& Rect)
{
	SDL_SetRenderDrawColor(SDLRenderer, 255, 255, 255, 255);
	SDL_Rect SDLRect = Rect.toSDLRect();
	SDL_RenderFillRect(SDLRenderer, &SDLRect);
}

void Renderer::endDraw()
{
	SDL_RenderPresent(SDLRenderer);
}

void Renderer::close()
{
	SDL_DestroyRenderer(SDLRenderer);
}



