#include "Point.h"

void Point :: draw(char ch) {
	
	gotoxy(x, y);
	cout << ch << endl;
	
}

int& Point:: getX{
	return &x;
}
	
int& Point:: getY{
	return &y;
}	
	
	
	
void Point::move(char dir) {
	switch (dir) {
	case 'w': // UP

		--y;
		if (y < 1 && x==40) {
			y = 24;
		}
		else if (y < 1) {
			y == 1;
		}
		break;
	case 'x': // DOWN
		++y;
		if (y > 24 && x==40) {
			y = 1;
		}
		else if (y > 24) {
			y = 24;
		}
		break;
	case 'a': // LEFT
		--x;
		if (x < 1 && y == 12) {
			x = 79;
		}
		else if (x < 1) {
			x = 1;
		}
		break;
	case 'd': // RIGHT
		++x;
		if (x > 79 && y == 12) {
			x = 1;
		}
		else if (x < 1) {
			x = 1;
		}
		break;

	case 's':
		break;
	}
}

