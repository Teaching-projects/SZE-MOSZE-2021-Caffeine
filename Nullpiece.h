#pragma once
#include "Piece.h"
class Nullpiece : public Piece {
	/**
	*this class contains the methods specific to squares where no pieces are standing
	*/
public:
	Nullpiece(int x_pos, int y_pos) : Piece(x_pos,y_pos,"Null") {}
	~Nullpiece() {}
	void Abstract() { return; }
	virtual std::string toString();
	bool checkMove(int dest_x, int dest_y) { return false; }
	/**
	*empty squares don't move
	*/
};
