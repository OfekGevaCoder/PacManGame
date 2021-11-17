#pragma once

#include "Point.h"

class  Pacman {
	enum {UP=0 , DOWN , LEFT , RIGHT , STAY};
	enum {startPoint=1};
	Point location;
	char figure='@';
	int direction = STAY;

public:
	
	Pacman() : location(startPoint,startPoint) {}					// c'tor to init the pacMan to his start point 
	void pacVsGhost() { location.set(startPoint, startPoint); }		// turn on when the pacMan colides ghost
	int getDirection(char c);										// get direction according the user choice
	void setDirection(int dir) { direction = dir; }					// set the direction of the pacMan if it's legal direction
	void move(const int& dir);									
	const Point& getPoint() const { return location; }				// returning the location of the pacMan at that moment 

};
