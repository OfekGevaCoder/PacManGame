#pragma once

#include "io_utils.h"
using namespace std;

//enum class Direction { UP = 0, DOWN, LEFT, RIGHT, STAY };

class Point {
	enum { UP = 0, DOWN, LEFT, RIGHT, STAY };
	enum { WIDTH = 80, HEIGHT = 23 };
	int x, y;

public:
	Point(int a, int b) : x(a), y(b) {}				// c'tor to initial point
	void set(int a, int b) { x = a; y = b; }		// set point 
	void draw(char ch) const;						// draw something on the screen in that point 
	void move(int dir);								// move the point accordig the direction
	const int& getX() const { return x; }			// get the x of the point
	const int& getY() const { return y; }			// get the y of the point 
	bool pacManVSghost(Point p);
};
