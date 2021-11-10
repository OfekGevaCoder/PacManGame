#include "ThePacManGame.h"

void main() {
	
	PacManGame game;
	bool startGame;
	game.printMenu();
	startGame = game.getAChoice();
	clear_screen();
	if (startGame) {		// maybe to put the func inside the if instead of init variable bool
		// function that print the board and starting the game;;
	}
	else {
		cout << "BYE BYE" << endl;
	}
}