#pragma once
#include"Piece.h"

class Rook : public Piece {
public:

	Rook(int x_pos, int y_pos) : Piece(x_pos, y_pos, "Rook") {}
	~Rook() {}
	void Abstract() { return; }
	bool checkMove(int dest_x, int dest_y);
};