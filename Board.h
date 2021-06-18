#pragma once
#include <vector>
#include "Piece.h"

#include "Nullpiece.h"

#include "Pawn.h"
#include "King.h"
#include "Queen.h"
#include "Rook.h"
#include "Knight.h"
#include "Bishop.h"

#include<iostream>

class Board {
	/**
	*This class contains the necesarry pieces of the game
	*/

	/*�tlet: legyen egy Empty nev� piece spot osztaly helyett*/
	std::vector<std::vector<Piece*>>board;
	/*8x8 as m�trix legyen*/
	
public:
	Board() {}
	~Board() {

		int i, j;
		for (i = 0; i < board.size(); ++i)
		{
			for (j = 0; j < board[i].size(); ++j)
				delete board[i][j];
			
		}
	
	}
	
	void setup();
	void resetBoard() {}
	/*babukat mozgato f�ggv�n*/
	void move_piece(int px, int py, int dx, int dy);
	bool checkGameOver();
	void toString();


};