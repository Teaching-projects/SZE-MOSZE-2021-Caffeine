#include "Bishop.h"

bool Bishop::checkMove(int dest_x, int dest_y) {
	/*method to filter bad moves*/
	bool res = true;
	if (abs(this->getX() - dest_x) != abs(this->getY() - dest_y)) {
		res = false;
		throw(std::runtime_error("Invalid Step!"));
	}
	return res;
}
