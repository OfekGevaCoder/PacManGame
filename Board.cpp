#include "Board.h"

Board::Board() : board{
	W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, S, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W,
	W, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, W,
	W, B, W, W, W, W, W, W, W, W, W, W, B, W, W, W, W, W, W, W, W, B, W, W, W, B, B, B, W, W, B, B, B, W, W, W, B, B, B, W, B, B, B, B, B, W, B, B, W, W, B, B, W, B, B, B, B, W, B, W, W, W, W, W, W, W, W, B, W, W, W, W, W, W, W, W, W, W, B, W,
	W, B, W, W, W, W, W, W, W, W, W, W, B, W, W, W, W, W, W, W, W, B, W, B, B, W, B, W, B, B, W, B, W, B, B, B, B, B, B, W, W, B, B, B, W, W, B, W, B, B, W, B, W, W, B, B, B, W, B, W, W, W, W, W, W, W, W, B, W, W, W, W, W, W, W, W, W, W, B, W,
	W, B, B, B, B, B, W, W, B, B, B, B, B, W, W, W, W, W, W, W, W, B, W, B, B, W, B, W, B, B, W, B, W, B, B, B, B, B, B, W, B, W, B, W, B, W, B, W, B, B, W, B, W, B, W, B, B, W, B, W, W, W, W, W, W, W, W, B, B, B, B, B, W, W, B, B, B, B, B, W,
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
	W, B, W, W, B, B, B, B, W, W, B, W, W, B, B, B, B, B, B, B, B, B, W, W, B, W, W, W, B, W, W, B, W, W, W, W, W, W, W, B, W, W, W, W, W, W, W, B, W, W, B, W, W, W, W, B, W, W, B, W, W, B, B, B, B, B, W, W, B, W, B, B, B, B, B, B, W, W, B, W,
	W, B, W, W, B, B, B, B, W, W, B, W, W, B, B, W, W, W, W, W, W, B, W, W, B, W, W, W, B, W, W, B, W, W, W, W, W, W, W, B, W, W, W, W, W, W, W, B, W, W, B, W, W, W, W, B, W, W, B, W, W, B, B, B, B, B, W, W, B, W, W, W, W, W, W, W, W, B, B, W,
	W, B, W, W, B, B, B, B, W, W, B, W, W, B, B, W, W, W, W, W, W, B, W, W, B, W, W, W, B, W, W, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, W, W, B, W, W, W, W, B, W, W, B, W, W, B, B, B, B, B, W, W, B, W, W, W, W, W, W, W, W, B, B, W,
	W, B, W, W, B, B, B, B, W, W, B, W, W, B, B, B, B, B, B, W, W, B, W, W, B, W, W, W, B, W, W, B, W, W, W, W, W, W, W, B, W, W, W, W, W, W, W, B, W, W, B, W, W, W, W, B, W, W, B, W, W, B, B, B, B, B, W, W, B, W, B, B, B, B, B, B, W, W, B, W,
	W, B, W, W, W, W, W, W, W, W, B, W, W, W, W, W, W, W, W, W, W, B, B, B, B, W, W, W, B, W, W, B, W, W, W, W, W, W, W, B, W, W, W, W, W, W, W, B, W, W, B, W, W, W, W, B, B, B, B, W, W, W, W, W, W, W, W, B, B, W, W, W, W, W, W, W, W, W, B, W,
	W, B, W, W, W, W, W, W, W, W, B, W, W, W, W, W, W, W, W, W, W, B, W, W, B, W, W, W, B, W, W, B, W, W, B, B, B, B, B, B, B, B, B, B, B, W, W, B, W, W, B, W, W, W, W, B, W, W, B, W, W, W, W, W, W, W, B, B, B, W, W, W, W, W, W, W, W, W, B, W,
	W, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, W, W, B, B, B, B, B, B, B, B, B, B, B, W, W, W, W, B, W, W, W, W, B, B, B, B, B, B, B, B, B, B, B, B, W, W, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, B, W,
	W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, S, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W, W } {}


void Board :: print() {

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
	
	if (board[pacPrevLoc.getY()][pacPrevLoc.getX()] == B) {
		this->point++;
	}
	board[pacPrevLoc.getY()][pacPrevLoc.getX()] = S;
	
	pacPrevLoc.draw(S);
	points();
}

/*bool  nextMove(const Point& pacNextMove) {
	
	if (Board :: board[pacNextMove.getY()][pacNextMove.getX()] == W) {
		return false;
	}
	return true;
}*/