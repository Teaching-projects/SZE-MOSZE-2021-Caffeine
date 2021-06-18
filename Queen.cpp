#include "Queen.h"

bool Queen::checkMove(int dest_x, int dest_y) {
	/*a kir�lyn� a saj�t oszlop�ban, sor�ban �s az �tl�k ment�n l�phet tetsz�legesen, */
	bool res = false;
	if ((this->getX() - dest_x != 0) && (this->getY() - dest_y == 0) || (this->getY() - dest_y != 0) && (this->getX() - dest_x == 0) || abs(this->getX() - dest_x) == abs(this->getY() - dest_y)) {
		res = true;
	}
	else {
		throw(std::runtime_error("Invalid Step!"));
	}
	return res;
}