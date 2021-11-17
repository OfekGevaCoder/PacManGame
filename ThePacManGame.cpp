#include "ThePacManGame.h"

void PacManGame:: printMenu() {

	cout << "Hello and welome to our PacMan game , enjoy!" << endl;
	
	cout << "choose from the entry menu:" << endl;
	cout << "(1) To start a new game please press 1" << endl;
	cout << "(8) To present instructions and keys press 1" << endl;
	cout << "(9) For EXIT press 9 " << endl;
}

void PacManGame::printInsructions() {
	
	clear_screen();
	cout << "this is our instuctions for now...." << endl;
	cout << "press ESC to back to the main menu ." << endl;
	while (_getch() != ESC) {}
	clear_screen();
}

bool PacManGame :: getAChoice() {

	char userChoice = 0;
	
	while (userChoice != '1' && userChoice != '9') {
		
		userChoice = _getch();
		
		if (userChoice == STARTGAME) {
			return true;
		}
		else if (userChoice == EXIT) {
			return false;
		}
		else if (userChoice == INTRUCTIONS) {
			this->printInsructions();

			this->printMenu();
		}
	}
}

void PacManGame :: runGame() {

	char key;
	int dir=4;
	gameBoard.print();


	while (dir!=-1) {

			gameBoard.checkNextPacMove(pac.getPoint(), dir);				// check the next move of the pac on the board
			gameBoard.eatBreadcrumbs(pac.getPoint());
			pac.move(dir);
			
			gameBoard.checkNextGhostMove(ghost1);				// check the next move of the pac on the board
			ghost1.move(gameBoard.getCell(ghost1.getPoint()));
			
			ghost2.move(gameBoard.getCell(ghost2.getPoint()));

			Sleep(200);

			if (_kbhit()) {
				if ((key = _getch()) != ESC) {
					dir = pac.getDirection(key);
				}
				else stopper = true;
			}
			if (stopper) stopGame();
	}
}

void PacManGame :: stopGame() {
	
	clear_screen();
	cout << "GAME PAUSED ";
	
	while (stopper) {

		if (_kbhit() && _getch() == ESC) {
			clear_screen();
			gameBoard.print();
			stopper = false;
		}
	}
}

//void initGame() {}