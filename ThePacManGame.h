#pragma once
#include <iostream>
#include "Pacman.h"
#include "Board.h"
#include "Ghost.h"


using namespace std;

class PacManGame {

	enum { ESC = 27, STARTGAME = '1', EXIT = '9', INTRUCTIONS = '8'};
	enum { NUMOFGHOSTS = 2, GHOSTSTARTROW=11 , GHOST1STARTCOL=38 , GHOST2STARTCOL=40 };
	// bool startGame;  -> maybe to init the bool here and 
	Board gameBoard;
	Pacman pac;
	Ghost ghost1 , ghost2;
	bool stopper = false;

public:
	PacManGame() : ghost1(GHOST1STARTCOL, GHOSTSTARTROW),ghost2(GHOST2STARTCOL, GHOSTSTARTROW) {} //(GHOSTSTARTROW, GHOST2STARTCOL){}
	void printMenu();
	void printInsructions();
	bool getAChoice();
	void runGame();
	void stopGame();

};