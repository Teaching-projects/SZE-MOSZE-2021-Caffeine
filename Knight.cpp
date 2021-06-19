
#include "Knight.h"

bool Knight::checkMove(int dest_x, int dest_y) {
	/**
	*the knight can move 2 squares on an axis, and 1 on the other, both needs to happen, but the order can be interchangeable
	*/
	bool res = false;
	int dist = abs((this->getX() - dest_x) + (this->getY()- dest_y));
	if (dist == 3 && this->getX() - dest_x != 0 && this->getY() - dest_y != 0) {
		res = true;
		/**
		*if the distance is exactly 3 and neither the x, nor the y is zero, only then it is a valid move
		*/
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
		 str.append("  ");
	 }
	 else {
		 str.append("B");
		 str.append("N");
		 str.append("  ");
	 }
	 return str;




}
