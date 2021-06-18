#include"King.h"

bool King::checkMove(int dest_x, int dest_y) {
	/*a kiraly lephet barmilyen tablaban levo mezoben, ammenyiben az 1 egyseg tavolsagra van.*/
	bool res = true;
	int distance = std::abs(dest_x - getX()) + std::abs(dest_y - getY());
	if (distance != 1) {
		res = false;
		throw(std::runtime_error("Invalid Step!"));
	}

	return res;
}