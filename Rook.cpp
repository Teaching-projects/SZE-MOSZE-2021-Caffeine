#include "Rook.h"

bool Rook::checkMove(int dest_x, int dest_y) {
	/*a bástya ugyanabban a sorban vagy oszlopban léphet bármennyit amelyikben éppen aktuálisan tartózkodik*/
	bool res = false;
	if ((this->getX() - dest_x != 0) && (this->getY() - dest_y == 0) || (this->getY() - dest_y != 0) && (this->getX() - dest_x == 0)) {
		res = true;
	}
	else {
		throw(std::runtime_error("Invalid Step!"));
	}
	return res;
}