#include "Pawn.h"

bool Pawn::checkMove(int dest_x, int dest_y) {
	bool res = true;
	
	if (std::abs(dest_y - this->getY()) != 0 || std::abs(dest_x - this->getX()) != 1) {
		res = false;
		throw(std::runtime_error("Invalid Step!"));
	}
	
	return res;
}
