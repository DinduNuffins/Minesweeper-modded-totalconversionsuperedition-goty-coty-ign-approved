#define WIN32
#include "Cell.h"
#include "Board.h"
#include <windows.h>

using namespace std;

int main (int argc, char** argv) {
	int boardSize = 16; //Default board difficulty is intermediate 
	int numMines  = 40;

	//Build & initialize the board
	Board *gameBoard = new Board(boardSize);
	gameBoard->seedBoard(numMines); 

	return Fl::run();
}
