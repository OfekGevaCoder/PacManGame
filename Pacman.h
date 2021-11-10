#pragma once

#include "Point.h"

class  Pacman {
	enum {UP=0 , DOWN , LEFT , RIGHT , STAY};
	enum {startPoint=1};
	Point location;
	char figure='@';
	int direction = STAY;

public:
	
	Pacman() : location(startPoint,startPoint) {}
	void pacVsGhost() { location.set(startPoint, startPoint); }
	int getDirection(char c);
	void setDirection(int dir) { direction = dir; }
	void move();

};
