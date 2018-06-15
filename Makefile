CC=g++

make: main.cpp
		$(CC) main.cpp game.h game.cpp -std=c++11 -LC:/PATH_TO_SDL -lSDL2main -lSDL2
