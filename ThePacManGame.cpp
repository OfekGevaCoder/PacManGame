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

void PacManGame :: startGame() {

	char key = 0;
	int dir;
	do {
		if (_kbhit())
		{
			key = _getch();
			if((dir= pacman.getDirection(key))!= -1)
				pacman.setDirection(dir);		
	pacman.move();
	sleep(400);
	while(key!= ESC);

	
	
}
