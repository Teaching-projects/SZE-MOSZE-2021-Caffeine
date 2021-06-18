#pragma once
#include"Piece.h"

class Queen : public Piece {
public:

	Queen(int x_pos, int y_pos) : Piece(x_pos, y_pos, "Queen") {}
	~Queen() {}
	void Abstract() { return; }
	bool checkMove(int dest_x, int dest_y);
}; 
