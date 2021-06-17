
#pragma once
#include"Piece.h"

class Bishop : public Piece {
public:
	Bishop(int x_pos, int y_pos) : Piece(x_pos, y_pos, "Bishop") {}
	~Bishop() {}
	void Abstract() { return; }
	/*bishop can only move in 1 direction diagonally, but can move several squares at once*/
	bool checkMove(int dest_x, int dest_y);
};
