#pragma once

#include "io_utils.h"
using namespace std;

class Point {
	int x, y;
public:
	Point(int a, int b) : x(a), y(b) {}
	void set(int a, int b) { x = a; y = b; }
	void draw(char ch);
	void move(char dir);
};