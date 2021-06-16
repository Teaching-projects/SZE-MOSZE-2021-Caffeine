
#include "Knight.h"

bool Knight::checkMove(int dest_x, int dest_y) {
	
	bool res = false;
	int dist = abs((this->getX() - dest_x) + (this->getY()- dest_y));
	if (dist == 3 && this->getX() - dest_x != 0 && this->getY() - dest_y != 0) {
		res = true;
	}
	else {
		throw(std::runtime_error("Invalid Step!"));
	}
	return res;
}
 std::string  Knight::toString() {

	 std::string str = "";
	 if (this->get_isWhite())
	 {
		 str.append("W");
		 str.append("N");
		 str.append("\t");
	 }
	 else {
		 str.append("B");
		 str.append("N");
		 str.append("\t");
	 }
	 return str;




}
