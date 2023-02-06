#include "Game.h"

bool Game::initialize()
{
    bool isWindowInit = window.initialize();
    bool isRenderInit = renderer->initialize(window);
    return isWindowInit && isRenderInit;
}

void Game::loop()
{
    while (isRunning)
    {
        processInput();
        update();
        render();
    }
}

void Game::close()
{
    renderer.close();
    window.close();
    SDL_Quit();
}

void Game::processInput()
{   
    SDL_Event event;
    while (SDL_PollEvent(&event))
    {
        switch (event.type)
        {
        case SDL_QUIT:
            isRunning = false;
            break;
        }
    }
    const Uint8* keyboardState = SDL_GetKeyboardState(nullptr);
    if (keyboardState[SDL_SCANCODE_ESCAPE])
    {
        isRunning = false;
    }
}

void Game::update()
{
}

void Game::render()
{
    renderer.beginDraw();
    renderer.endDraw();
}
