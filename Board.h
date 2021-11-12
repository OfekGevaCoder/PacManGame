#pragma once

#include "io_utils.h"
#include "Point.h"
using namespace std;

#define B '.' // -> Bread Crumbs
#define W '#' // -> Walls
#define S ' ' // -> Space

class Board {

	enum {HEIGHT=23 , WIDTH=80};
	char board[HEIGHT][WIDTH];
	unsigned int point=0;

public:
	Board();
	void print();
	void points();
	void remainingLife();
	void eatBreadcrumbs(const Point& pacPrevLoc );
	//friend bool nextMove(const Point& pacNextMove);
};