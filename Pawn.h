#pragma once
#include "Piece.h"


class Pawn : public Piece {
	/**
	*class that stores the specific methods for pawn type pieces
	*/
public:
	Pawn(int x, int y) : Piece(x, y, "Pawn") {}
	~Pawn() {}
	void Abstract() { return; }
	bool checkMove(int dest_x, int dest_y);
};
