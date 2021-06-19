#include "Bishop.h"

bool Bishop::checkMove(int dest_x, int dest_y) {
	/*method for catching bad moves*/
	bool res = true;
	if (abs(this->getX() - dest_x) != abs(this->getY() - dest_y)) {
		res = false;
		throw(std::runtime_error("Invalid Step!"));
		/*if the input doesn't match the bishop movement pattern, the program doesn't allow the input to go through*/
	}
	return res;
}
