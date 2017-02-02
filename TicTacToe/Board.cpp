#include "Board.h"
#include <iostream>


Board::Board()
{
}


Board::~Board()
{
}

void Board::drawBoard() {
	for (int x = 0; x < 3; x++) {
		if (x % 2 == 0) {
			for (int y = 0; y < 3; y++) {
				std::cout << "|" << boardArray[x][y] << "|";
			}
			std::cout << "\n";
		}
		else {
			std::cout << " - - - " << std::endl;
		}

	}
}