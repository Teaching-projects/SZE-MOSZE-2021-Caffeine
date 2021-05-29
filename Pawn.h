#pragma once
#include "Piece.h"


class Pawn : public Piece {

public:
	Pawn(int x, int y) : Piece(x, y, "Pawn") {}
	~Pawn() {}
	void Abstract() { return; }

	/*pawn can move vertically and attack in right and left strife */
	bool checkMove(int dest_x, int dest_y);
};