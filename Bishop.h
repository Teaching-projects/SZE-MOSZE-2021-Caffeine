
#pragma once
#include"Piece.h"

class Bishop : public Piece {
	/**
	*the class contains the bishop type pieces' specific methods
	*/
public:
	Bishop(int x_pos, int y_pos) : Piece(x_pos, y_pos, "Bishop") {}
	~Bishop() {}
	void Abstract() { return; }
	bool checkMove(int dest_x, int dest_y);
	/**
	*a bishop can move several steps in a diagonal direction
	*/
};
