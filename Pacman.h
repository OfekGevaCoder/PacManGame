#pragma once

#include "Point.h"

class  Pacman {

	enum {startPoint=1};
	Point location;
	char figure='@';

public:
	//void pacman();
	Pacman(const Point& p) : location(startPoint,startPoint) {}
	void pacVsGhost() { location.set(startPoint, startPoint); }
};