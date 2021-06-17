#include"King.h"

bool King::checkMove(int dest_x, int dest_y) {
	/*method to filter bad moves*/
	bool res = true;
	int distance = std::abs(dest_x - getX()) + std::abs(dest_y - getY());
	if (distance != 1) {
		res = false;
		throw(std::runtime_error("Invalid Step!"));
	}

	return res;
}
