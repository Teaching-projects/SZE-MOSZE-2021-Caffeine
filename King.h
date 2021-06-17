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
	/*king can move only 1 square in a chosen direction*/
	bool checkMove(int dest_x, int dest_y);


};
