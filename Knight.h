#pragma once
#include"Piece.h"

class Knight : public Piece {
public:
	Knight(int x_pos, int y_pos) : Piece(x_pos, y_pos, "Knight") {}
	~Knight() {}
	void Abstract() { return; }
	/*knight moves 2 squares in an axis, then 1 square on the other axis, the 2 and 1 being interchangeable*/
	bool checkMove(int dest_x, int dest_y);
	std::string toString();
}; 
