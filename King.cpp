#include"King.h"

bool King::checkMove(int dest_x, int dest_y) {
	/**
	*king can move 1 square in any direction
	*/
	bool res = true;
	int distance = std::abs(dest_x - getX()) + std::abs(dest_y - getY());
	/**
	*if the distance of the new position is not exactly 1 from the original, its not a valid move
	*/
	if (distance != 1) {
		res = false;
		throw(std::runtime_error("Invalid Step!"));
	}

	return res;
}
