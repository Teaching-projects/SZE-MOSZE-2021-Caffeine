#include "Pawn.h"

bool Pawn::checkMove(int dest_x, int dest_y) {
	/**
	*pawns can only move 1 square on the x axis
	*/
	bool res = true;
	if (std::abs(dest_y - this->getY()) != 0 || std::abs(dest_x - this->getX()) != 1) {
		res = false;
		throw(std::runtime_error("Invalid Step!"));
		/**
		*if the pawn doesn't only move 1 square on the x, then it's not a valid move
		*/
	}
	
	return res;
}
