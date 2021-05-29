#pragma once
#include <vector>
#include "Piece.h"
#include "King.h"
#include "Nullpiece.h"
#include "Pawn.h"
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
	~Board() {/*A LEGFOGLALT BOARD VEKTORT FELSZABAD�TANI MUSZAJ KEZZEL*/
		//std::vector<std::vector<Piece*>>().swap(board);
		/*swap the vector with an empty vector to deallocate the taken memory*/
		int i, j;
		for (i = 0; i < board.size(); ++i)
		{
			for (j = 0; j < board[i].size(); ++j)
				delete board[i][j];
			
		}
//		std::cout << "memory freed\n";
	}
	
	void setup();
	void resetBoard() {}
	/*babukat mozgato f�ggv�n*/
	void move_piece(int px, int py, int dx, int dy);

	void toString();
	void felszabadit() {}
};