#pragma once

#include "Point.h"

class Ghosts {
	enum {UP=0 , DOWN , LEFT , RIGHT , STAY};
	Point location;
	char figure='$';
	Color color;

	int direction = STAY;
  int x,y;

public:
	
  Ghosts() : location(int _x , int _y ) {x=_x; y=_y;}
	int getDirection(char c);
	void setDirection(int dir) { direction = dir; }
	void move();
	void setColor(Color c) {
		color = c;
	}

};
