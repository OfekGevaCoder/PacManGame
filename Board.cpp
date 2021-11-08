#include "Board.h"
/*
void Board :: initBoard() {
	for (int i = 0; i <= HEIGHT;i++) {
		for (int j = 0; j <= WIDTH; j++) {
			board[i][j] = '.';
		}
	}
	frame();
	insideWalls();
}

void Board :: frame() {

	int i;

	for (i = 0; i <= WIDTH; i++) {
		if (i == WIDTH / 2) {
		
			board[0][i] = ' ';
		}
		else {

			board[0][i] = '#';
		}
	}

	for (i = 1; i <= HEIGHT; i++) {
		if (i != HEIGHT / 2) {

			board[i][0] = '#';
			board[i][WIDTH] = '#';
		}
		else {
			board[i][WIDTH] = ' ';
			board[i][0] = ' ';
		}
	}

	for (i = 0; i <= WIDTH; i++) {
		if (i == WIDTH / 2) {

			board[HEIGHT][i] = '#';
		}
		else {

			board[HEIGHT][i] = '#';
		}
	}
}

void Board :: insideWalls() {

	int i, j;

	for(i = WIDTH / 3 ; i <= WIDTH * 2 / 3; i++){		// two walls in the middle, up and down (that looks like +)
		
		board[HEIGHT / 8 + 1][i] = '#';
	
		board[HEIGHT * 7 / 8][i] = '#';
	}

	for(i = HEIGHT / 8 + 2 ; i <= HEIGHT / 8 + 4 ; i++){ // continue of the previous walls

		board[i][WIDTH / 2] = '#';

		board[HEIGHT - i][WIDTH / 2] = '#';
	}

	for (i = HEIGHT - 2; i >= HEIGHT - 5; i--) { 
		for (j = WIDTH - 2; j >= WIDTH - 7; j--) { // the right down quarter
		
			board[i][j] = '#';
		}
		for (j = 2; j <= 7; j++) { // the left down quarter
		
			board[i][j] = '#';
		}
	}
	
	for (i = 2; i <= 5; i++) {
		for (j = WIDTH - 2; j >= WIDTH - 7; j--) { // right up quarter
		
			board[i][j] = '#';
		}

		for (j = 2; j <= 7; j++) {		// left up quarter
		
			board[i][j] = '#';
		}
	}

	for (i = WIDTH / 2 - 2; i < WIDTH / 2 + 3; i++) { // walls in the middle for the starting position of the ghosts

		board[HEIGHT / 2+1][i] = '#';
	}

	for (i = HEIGHT / 2 ; i < HEIGHT / 2 + 2; i++) {	// same

		board[i][WIDTH / 2 - 3] = '#';

		board[i][WIDTH / 2 + 3] = '#';
	}
}
*/
void Board :: print() {

	//initBoard();

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

	unsigned int points = 0;
	gotoxy(WIDTH + 3, 0);
	cout << "YOUR POINTS: " << points;

}

void Board::remainingLife() {
	
	unsigned int life = 3;
	
	gotoxy(WIDTH + 3, 1);
	cout << "REMAINING LIFE: " << life;

}