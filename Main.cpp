#include "ThePacManGame.h"

void main() {
	
	PacManGame game;
	bool startGame = true;
	
	while (startGame) {
		game.printMenu();
		startGame = game.getAChoice();
		clear_screen();
		if (startGame) {		// maybe to put the func inside the if instead of init variable bool
			game.runGame();
		}
		clear_screen();

	}
		cout << "BYE BYE" << endl;
}