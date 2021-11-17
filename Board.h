#pragma once

#include "io_utils.h"
#include "Point.h"
#include "Ghost.h"
using namespace std;

#define B '.' // -> Bread Crumbs
#define W '#' // -> Walls
#define S ' ' // -> Space

class Board {

	enum {HEIGHT=23 , WIDTH=80};
	char board[HEIGHT][WIDTH];
	unsigned int point=0;

public:
	Board();						// c'tor to init the board
	void print();					
	void points();					// print the point and update after every step
	void remainingLife();			// print the remaining life 
	void eatBreadcrumbs(const Point& pacPrevLoc );				// check if the pacMan eat breadcrumbs and update thr board after the pacman move
	void checkNextPacMove(Point p, int& dir);						// check if the next move of the pacMan is not a wall
	char getCell(Point p) { return board[p.getY()][p.getX()]; }	// return what in char in the cell that we ask for
	void checkNextGhostMove(Ghost g);							// check if the next move of the ghost availabe in the board				

};