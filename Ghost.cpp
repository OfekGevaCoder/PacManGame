#include "Ghost.h"

int Ghost::getDirection() {
	int dir = rand() % 4;			// get random value
	return dir;
}

void Ghost::move(char prevCell) {

	int dir = getDirection();				
	setDirection(dir);
		//setTextColor(color);
	location.draw(prevCell);			// draw what was before the ghost got there on the board
	location.move(this->direction);		// move the ghost location	
	location.draw(figure);				// print the ghost in the new location
}

bool Ghost :: notAGoodMove() {
	
	
	return true;
}
