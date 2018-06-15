#pragma once

#include <SDL2/SDL.h>
#include <GL/glew.h>

enum class State {
	PLAY,
	EXIT
};

class Game {
	private:
		SDL_Window* _window;

		int _w,
				_h;

		State _state;

		void init();
		void loop();
		void processInput();

	public:
		Game();
		~Game();

		void run();
};
