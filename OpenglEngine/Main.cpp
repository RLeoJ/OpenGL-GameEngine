#include <SDL.h>
#include "Game.h"

int main(int arg, char** argv)
{
	bool isGameInit = Game::instance().initialize();
	if (isGameInit)
	{
		Game::instance().loop();
	}
	Game::instance().close();
	return 0;
} 



///////// WE ARE ON PAGE 13 //////////////