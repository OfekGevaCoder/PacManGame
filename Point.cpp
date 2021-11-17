#include "Point.h"

void Point :: draw(char ch) const{
	
	gotoxy(x, y);
	cout << ch << endl;
	
}


void Point::move(int dir) {


	switch (dir) {
	case UP: // UP

		--y;
		if (y < 1 && x==WIDTH/2) {				// get in to up tunnel
			y = HEIGHT-1;
		}
		break;
	case DOWN: // DOWN
		++y;
		if (y > HEIGHT - 2 && x == WIDTH / 2) {		// get in to down tunnel
			y = 1;
		}
		break;
	case LEFT: // LEFT
		--x;
		if (x <= 1 && y == HEIGHT / 2 ) {		// get in to left tunnel
			x = WIDTH - 2;
		}
		break;
	case RIGHT: // RIGHT
		++x;
		if (x > WIDTH - 2 && y == HEIGHT / 2) {		// get in to right tunnel
			x = 1;
		}
		break;

	case STAY:	// STAY 
		break;
	}
}

