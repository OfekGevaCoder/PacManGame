#pragma once

#include "io_utils.h"
using namespace std;

#define S '.'
#define H '#'
#define O ' '

class Board {
	enum {HEIGHT=23 , WIDTH=80};

	char board[HEIGHT][WIDTH]
	{ H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,O,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,
	 H,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,H,
	 H,S,H,H,H,H,H,H,H,H,H,H,S,H,H,H,H,H,H,H,H,S,H,H,H,S,S,S,H,H,S,S,S,H,H,H,S,S,S,H,S,S,S,S,S,H,S,S,H,H,S,S,H,S,S,S,S,H,S,H,H,H,H,H,H,H,H,S,H,H,H,H,H,H,H,H,H,H,S,H,
	 H,S,H,H,H,H,H,H,H,H,H,H,S,H,H,H,H,H,H,H,H,S,H,S,S,H,S,H,S,S,H,S,H,S,S,S,S,S,S,H,H,S,S,S,H,H,S,H,S,S,H,S,H,H,S,S,S,H,S,H,H,H,H,H,H,H,H,S,H,H,H,H,H,H,H,H,H,H,S,H,
	 H,S,S,S,S,S,H,H,S,S,S,S,S,H,H,H,H,H,H,H,H,S,H,S,S,H,S,H,S,S,H,S,H,S,S,S,S,S,S,H,S,H,S,H,S,H,S,H,S,S,H,S,H,S,H,S,S,H,S,H,H,H,H,H,H,H,H,S,S,S,S,S,H,H,S,S,S,S,S,H,
	 H,S,H,H,H,S,H,H,S,H,H,H,H,H,H,H,S,S,S,S,S,S,H,H,H,S,S,H,H,H,H,S,H,S,S,S,S,S,S,H,S,S,H,S,S,H,S,H,H,H,H,S,H,S,S,H,S,H,S,S,S,S,S,S,H,H,H,H,H,H,H,S,H,H,S,H,H,H,S,H,
	 H,S,H,H,H,S,H,H,S,H,H,H,H,H,H,H,S,H,H,H,H,S,H,S,S,S,S,H,S,S,H,S,H,S,S,S,S,S,S,H,S,S,S,S,S,H,S,H,S,S,H,S,H,S,S,S,H,H,S,H,H,H,H,S,H,H,H,H,H,H,H,S,H,H,S,H,H,H,S,H,
	 H,S,H,H,H,S,H,H,S,H,H,H,H,H,H,H,S,H,H,H,H,S,H,S,S,S,S,H,S,S,H,S,S,H,H,H,S,S,S,H,S,S,S,S,S,H,S,H,S,S,H,S,H,S,S,S,S,H,S,H,H,H,H,S,H,H,H,H,H,H,H,S,H,H,S,H,H,H,S,H,
	 H,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,H,H,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,H,H,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,H,
	 H,S,H,H,H,H,H,H,H,H,H,H,H,H,H,H,S,H,H,S,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,S,S,S,S,S,S,S,S,S,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,S,H,H,S,H,H,H,H,H,H,H,H,H,H,H,H,H,H,S,H,
	 O,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,H,H,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,H,H,S,S,S,H,H,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,H,H,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,O,
	 H,S,H,H,H,H,H,H,H,H,S,H,H,H,H,H,S,H,H,S,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,S,H,H,H,H,H,H,H,S,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,S,H,H,S,H,H,H,H,S,H,H,H,H,H,H,H,H,H,S,H,
	 H,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,H,H,H,H,H,H,S,S,S,S,S,S,S,S,S,H,H,H,H,H,H,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,H,
	 H,S,H,H,H,H,H,H,H,H,S,H,H,H,H,H,H,H,H,H,H,S,H,H,S,H,H,H,S,H,H,H,H,H,H,S,H,H,H,S,H,H,H,S,H,H,H,H,H,H,S,H,H,H,H,S,H,H,S,H,H,H,H,H,H,H,S,S,S,H,H,H,H,H,H,H,H,H,S,H,
	 H,S,H,H,H,H,H,H,H,H,S,H,H,H,H,H,H,H,H,H,H,S,H,H,S,H,H,H,S,H,H,S,S,S,S,S,H,H,H,S,H,H,H,S,S,S,S,S,H,H,S,H,H,H,H,S,H,H,S,H,H,H,H,H,H,H,H,S,S,H,H,H,H,H,H,H,H,H,S,H,
	 H,S,H,H,S,S,S,S,H,H,S,H,H,S,S,S,S,S,S,S,S,S,H,H,S,H,H,H,S,H,H,S,H,H,H,H,H,H,H,S,H,H,H,H,H,H,H,S,H,H,S,H,H,H,H,S,H,H,S,H,H,S,S,S,S,S,H,H,S,H,S,S,S,S,S,S,H,H,S,H,
	 H,S,H,H,S,S,S,S,H,H,S,H,H,S,S,H,H,H,H,H,H,S,H,H,S,H,H,H,S,H,H,S,H,H,H,H,H,H,H,S,H,H,H,H,H,H,H,S,H,H,S,H,H,H,H,S,H,H,S,H,H,S,S,S,S,S,H,H,S,H,H,H,H,H,H,H,H,S,S,H,
	 H,S,H,H,S,S,S,S,H,H,S,H,H,S,S,H,H,H,H,H,H,S,H,H,S,H,H,H,S,H,H,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,H,H,S,H,H,H,H,S,H,H,S,H,H,S,S,S,S,S,H,H,S,H,H,H,H,H,H,H,H,S,S,H,
	 H,S,H,H,S,S,S,S,H,H,S,H,H,S,S,S,S,S,S,H,H,S,H,H,S,H,H,H,S,H,H,S,H,H,H,H,H,H,H,S,H,H,H,H,H,H,H,S,H,H,S,H,H,H,H,S,H,H,S,H,H,S,S,S,S,S,H,H,S,H,S,S,S,S,S,S,H,H,S,H,
	 H,S,H,H,H,H,H,H,H,H,S,H,H,H,H,H,H,H,H,H,H,S,S,S,S,H,H,H,S,H,H,S,H,H,H,H,H,H,H,S,H,H,H,H,H,H,H,S,H,H,S,H,H,H,H,S,S,S,S,H,H,H,H,H,H,H,H,S,S,H,H,H,H,H,H,H,H,H,S,H,
	 H,S,H,H,H,H,H,H,H,H,S,H,H,H,H,H,H,H,H,H,H,S,H,H,S,H,H,H,S,H,H,S,H,H,S,S,S,S,S,S,S,S,S,S,S,H,H,S,H,H,S,H,H,H,H,S,H,H,S,H,H,H,H,H,H,H,S,S,S,H,H,H,H,H,H,H,H,H,S,H,
	 H,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,H,H,S,S,S,S,S,S,S,S,S,S,S,H,H,H,H,S,H,H,H,H,S,S,S,S,S,S,S,S,S,S,S,S,H,H,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,H,
	 H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,O,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H

	};

public:
	//void initBoard();
	void print();
	void points();
	void remainingLife();

private:
	//void frame();
	//void insideWalls();
	

};
