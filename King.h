#pragma once
#include"Piece.h"
class King :public Piece {
	/**
	*
	*/

public:
	King(int x_pos, int y_pos) : Piece(x_pos,y_pos,"King") {}
	~King() {}
	void Abstract() {return;}

	bool checkMove(int dest_x, int dest_y);


};