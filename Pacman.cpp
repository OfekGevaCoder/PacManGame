#include "Pacman.h"

int Pacman :: getDirection(char c) {

	if (c == 'w' || c == 'W') {
		return UP;
	}
	else if (c == 'x' || c == 'X') {
		return DOWN;
	}
	else if (c == 'a' || c == 'A') {
		return LEFT;
	}
	else if (c == 'd' || c == 'D') {
		return RIGHT;
	}
	else if (c == 's' || c == 'S') {
		return STAY;
	}
}

void Pacman::move() {

	location.move(this->direction);
	location.draw(figure);
}