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
	*This class contains the necessary pieces of the game
	*/
	std::vector<std::vector<Piece*>>board;
	
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
	void move_piece(int px, int py, int dx, int dy);
	bool checkGameOver();
	void toString();
};
