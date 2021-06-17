#pragma once
#include "Piece.h"
class Nullpiece : public Piece {



//	int curr_x, curr_y;
public:
	/*class contains an empty square on the table*/
	Nullpiece(int x_pos, int y_pos) : Piece(x_pos,y_pos,"Null") {}
	~Nullpiece() {}
	void Abstract() { return; }
	virtual std::string toString();
	/*empty squares can't move*/
	bool checkMove(int dest_x, int dest_y) { return false; }
};
