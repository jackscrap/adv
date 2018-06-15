#include <SDL2/SDL.h>
#include <GL/glew.h>

#include <iostream>

#include "game.h"

int main(int argc, char** argv) {
	SDL_Init(SDL_INIT_EVERYTHING);

	Game game;
	game.run();

	return 0;
}
