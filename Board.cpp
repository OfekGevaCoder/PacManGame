#include "Board.h"

Board::Board() : board{
	W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, S, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W,
	W, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, W,
	W, B, W, W, W, W, W, W, W, W, W, W, B, W, W, W, W, W, W, W, W, B, W, W, W, B, B, B, W, W, B, B, B, W, W, W, B, B, B, W, B, B, B, B, B, W, B, B, W, W, B, B, W, B, B, B, B, W, B, W, W, W, W, W, W, W, W, B, W, W, W, W, W, W, W, W, W, W, B, W,
	W, B, W, W, W, W, W, W, W, W, W, W, B, W, W, W, W, W, W, W, W, B, W, S, S, W, B, W, S, S, W, B, W, B, B, B, B, B, B, W, W, B, B, B, W, W, B, W, S, S, W, B, W, W, B, B, B, W, B, W, W, W, W, W, W, W, W, B, W, W, W, W, W, W, W, W, W, W, B, W,
	W, B, B, B, B, B, W, W, B, B, B, B, B, W, W, W, W, W, W, W, W, B, W, S, S, W, B, W, S, S, W, B, W, B, B, B, B, B, B, W, B, W, B, W, B, W, B, W, S, S, W, B, W, B, W, B, B, W, B, W, W, W, W, W, W, W, W, B, B, B, B, B, W, W, B, B, B, B, B, W,
	W, B, W, W, W, B, W, W, B, W, W, W, W, W, W, W, B, B, B, B, B, B, W, W, W, B, B, W, W, W, W, B, W, B, B, B, B, B, B, W, B, B, W, B, B, W, B, W, W, W, W, B, W, B, B, W, B, W, B, B, B, B, B, B, W, W, W, W, W, W, W, B, W, W, B, W, W, W, B, W,
	W, B, W, W, W, B, W, W, B, W, W, W, W, W, W, W, B, W, W, W, W, B, W, B, B, B, B, W, B, B, W, B, W, B, B, B, B, B, B, W, B, B, B, B, B, W, B, W, B, B, W, B, W, B, B, B, W, W, B, W, W, W, W, B, W, W, W, W, W, W, W, B, W, W, B, W, W, W, B, W,
	W, B, W, W, W, B, W, W, B, W, W, W, W, W, W, W, B, W, W, W, W, B, W, B, B, B, B, W, B, B, W, B, B, W, W, W, B, B, B, W, B, B, B, B, B, W, B, W, B, B, W, B, W, B, B, B, B, W, B, W, W, W, W, B, W, W, W, W, W, W, W, B, W, W, B, W, W, W, B, W,
	W, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, W, W, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, W, W, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, W,
	W, B, W, W, W, W, W, W, W, W, W, W, W, W, W, W, B, W, W, B, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, B, B, B, B, B, B, B, B, B, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, B, W, W, B, W, W, W, W, W, W, W, W, W, W, W, W, W, W, B, W,
	W, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, W, W, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, W, W, B, B, B, W, W, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, W, W, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, W,
	S, B, W, W, W, W, W, W, W, W, B, W, W, W, W, W, B, W, W, B, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, B, W, W, W, W, W, W, W, B, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, B, W, W, B, W, W, W, W, B, W, W, W, W, W, W, W, W, W, B, S,
	W, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, W, W, W, W, W, W, B, B, B, B, B, B, B, B, B, W, W, W, W, W, W, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, W,
	W, B, W, W, W, W, W, W, W, W, B, W, W, W, W, W, W, W, W, W, W, B, W, W, B, W, W, W, B, W, W, W, W, W, W, B, W, W, W, B, W, W, W, B, W, W, W, W, W, W, B, W, W, W, W, B, W, W, B, W, W, W, W, W, W, W, B, B, B, W, W, W, W, W, W, W, W, W, B, W,
	W, B, W, W, W, W, W, W, W, W, B, W, W, W, W, W, W, W, W, W, W, B, W, W, B, W, W, W, B, W, W, B, B, B, B, B, W, W, W, B, W, W, W, B, B, B, B, B, W, W, B, W, W, W, W, B, W, W, B, W, W, W, W, W, W, W, W, B, B, W, W, W, W, W, W, W, W, W, B, W,
	W, B, W, W, S, S, S, S, W, W, B, W, W, B, B, B, B, B, B, B, B, B, W, W, B, W, W, W, B, W, W, B, W, W, W, W, W, W, W, B, W, W, W, W, W, W, W, B, W, W, B, W, W, W, W, B, W, W, B, W, W, S, S, S, S, S, W, W, B, W, S, S, S, S, S, S, W, W, B, W,
	W, B, W, W, S, S, S, S, W, W, B, W, W, B, B, W, W, W, W, W, W, B, W, W, B, W, W, W, B, W, W, B, W, W, W, W, W, W, W, B, W, W, W, W, W, W, W, B, W, W, B, W, W, W, W, B, W, W, B, W, W, S, S, S, S, S, W, W, B, W, W, W, W, W, W, W, W, B, B, W,
	W, B, W, W, S, S, S, S, W, W, B, W, W, B, B, W, W, W, W, W, W, B, W, W, B, W, W, W, B, W, W, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, W, W, B, W, W, W, W, B, W, W, B, W, W, S, S, S, S, S, W, W, B, W, W, W, W, W, W, W, W, B, B, W,
	W, B, W, W, S, S, S, S, W, W, B, W, W, B, B, B, B, B, B, W, W, B, W, W, B, W, W, W, B, W, W, B, W, W, W, W, W, W, W, B, W, W, W, W, W, W, W, B, W, W, B, W, W, W, W, B, W, W, B, W, W, S, S, S, S, S, W, W, B, W, S, S, S, S, S, S, W, W, B, W,
	W, B, W, W, W, W, W, W, W, W, B, W, W, W, W, W, W, W, W, W, W, B, B, B, B, W, W, W, B, W, W, B, W, W, W, W, W, W, W, B, W, W, W, W, W, W, W, B, W, W, B, W, W, W, W, B, B, B, B, W, W, W, W, W, W, W, W, B, B, W, W, W, W, W, W, W, W, W, B, W,
	W, B, W, W, W, W, W, W, W, W, B, W, W, W, W, W, W, W, W, W, W, B, W, W, B, W, W, W, B, W, W, B, W, W, B, B, B, B, B, B, B, B, B, B, B, W, W, B, W, W, B, W, W, W, W, B, W, W, B, W, W, W, W, W, W, W, B, B, B, W, W, W, W, W, W, W, W, W, B, W,
	W, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, W, W, B, B, B, B, B, B, B, B, B, B, B, W, W, W, W, B, B, B, W, W, B, B, B, B, B, B, B, B, B, B, B, B, W, W, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, W,
	W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, S, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W } {}



void Board :: print() {					// print the board , the points and the life of the game

	for (int i = 0; i < HEIGHT; i++) {
		for (int j = 0; j < WIDTH; j++) {
			cout << board[i][j];
		}
		cout << endl;
	}
	points();
	remainingLife();
	gotoxy(0, HEIGHT + 3);
}

void Board :: points() {

	gotoxy(0, HEIGHT + 1);
	cout << "YOUR POINTS: " << point;

}

void Board::remainingLife() {
	
	unsigned int life = 3;
	
	gotoxy(0, HEIGHT + 2);
	cout << "REMAINING LIFE: " << life;

}

void Board :: eatBreadcrumbs( const Point& pacPrevLoc) {
	
	if (board[pacPrevLoc.getY()][pacPrevLoc.getX()] == B) {		// check if the pacman on bread crumb
		this->point++;											// if he is so add plus 1 to points 
		board[pacPrevLoc.getY()][pacPrevLoc.getX()] = S;			// and update the board in that point to space 
	}
	pacPrevLoc.draw(S);											// draw space before he move to next location 
	points();												
}

void Board :: checkNextPacMove(Point p, int& dir){

	p.move(dir);							// get p by val so do not change the pac in the game function 

	if (board[p.getY()][p.getX()] == W) {	// check if wall
		dir = 4;							// if it is so the direction turn to STAY
	}
}

void Board::checkNextGhostMove(Ghost g) {

	Point p = g.getPoint();
	int dir = g.getDirection();
	p.move(dir);

	if (board[p.getY()][p.getX()] == W  /* function that check if we need to switch the direction of the ghost*/) {

		switch (dir) {}

			// לחלק למקרים על פי דיר ולהפוך לו את התנועה מהצעד הבא 
			
	}


}