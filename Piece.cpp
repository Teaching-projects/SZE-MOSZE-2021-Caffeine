#include "Piece.h"

std::string Piece::toString(){
		char k = name[0];
		std::string kezdo{ k };
		std::string str = "";
		if (this->get_isWhite())
		{
			str.append("W");
			str.append(kezdo);
			str.append("  ");
		}
		else {
			str.append("B");
			str.append(kezdo);
			str.append("  ");
		}
		return str;
}
void Piece::move(Piece& p, int dest_x, int dest_y) {

	p.curr_x = dest_x;
	p.curr_y = dest_y;

}
