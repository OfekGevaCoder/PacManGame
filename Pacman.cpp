#include "Pacman.h"

int Pacman :: getDirection(char c) {		// get direction according the user choice

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
	else
		return -1;
}

void Pacman::move(Point ghost , const int& dir) {
	
	setDirection(dir);
	location.move(this->direction);		// move the point
		if (location.pacManVSghost(ghost)==false)
			pacVsGhost();

	location.draw(figure);				// print the pigure in the new point
}
