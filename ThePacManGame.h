#pragma once
#include <iostream>
#include "Pacman.h"
#include "Board.h"



using namespace std;

class PacManGame {

	enum { ESC = 27, STARTGAME = '1', EXIT = '9', INTRUCTIONS = '8' };
	// bool startGame;  -> maybe to init the bool here and 

public:

	void printMenu();
	void printInsructions();
	bool getAChoice();
	//void startGame();


};