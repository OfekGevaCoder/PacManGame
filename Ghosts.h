#pragma once

#include "Point.h"

class  Ghosts {

	enum {startPoinGhostX=12,startPointFirstGhostY=40,startPointSecondGhostY=41};
	Point location;
	char figure='$';
  direction= 'W';
public:
	Ghosts(x,y) : location(x=_x, y=_y) {}
  int getDirection(char c);
  int setDirection(char c){
  direction= c};
	void move();
  
};
