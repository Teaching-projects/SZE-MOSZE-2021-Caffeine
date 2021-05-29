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

	//std::string toString() {
	//	std::string str = "K";
	//	if (this->get_isWhite())
	//	{
	//		str =  "WK \t";
	//	}
	//	else
	//		str = "BK \t";
	//	return str;
	//}

	
	bool checkMove(int dest_x, int dest_y);
	/*implementálni még megszorításokat az egyes bábukra*/

};