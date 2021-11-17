#pragma once

#include "Point.h"

class Ghost {
	enum { UP = 0, DOWN, LEFT, RIGHT, STAY };
	Point location;
	char figure = '$';
	//Color color;
	int direction = STAY;

public:

	Ghost(int _x, int _y) : location(_x, _y) {}			// c'tor to init the ghost 
	int getDirection();									// get a random direction	
	void setDirection(int dir) { direction = dir; }		
	void move(char prevCell);							//move the ghost according the direction
	const Point& getPoint() const { return location; }	// get the location at that moment
	bool notAGoodMove();
	//void setColor(Color c) {
	//	color = c;
	//}

};