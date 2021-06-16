#pragma once
#include"Piece.h"

class Knight : public Piece {
public:
	Knight(int x_pos, int y_pos) : Piece(x_pos, y_pos, "Knight") {}
	~Knight() {}
	void Abstract() { return; }
	bool checkMove(int dest_x, int dest_y);
	std::string toString();
}; 
