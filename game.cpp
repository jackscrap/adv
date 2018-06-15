#include "game.h"

#include <iostream>

Game::Game() {
	_window = nullptr;
	_w = 800;
	_h = 600;
	_state = State::PLAY;
}

Game::~Game() {
}

void Game::run() {
	init();

	loop();
}

void Game::init() {
	SDL_Init(SDL_INIT_EVERYTHING);

	_window = SDL_CreateWindow("Engine", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, _w, _h, SDL_WINDOW_OPENGL);
}

void Game::loop() {
	while (_state != State::EXIT) {
		processInput();
	}
}

void Game::processInput() {
	SDL_Event event;

	while (SDL_PollEvent(&event)) {
		switch (event.type) {
			case SDL_QUIT:
				_state = State::EXIT;

				break;

			case SDL_MOUSEMOTION:
				std::cout << event.motion.x << ", " << event.motion.y << std::endl;

				break;
		}
	}
}
