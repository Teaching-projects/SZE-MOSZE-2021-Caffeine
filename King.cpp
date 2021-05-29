#include"King.h"

bool King::checkMove(int dest_x, int dest_y) {
	/*a kiraly lephet barmilyen tablaban levo mezoben, ammenyiben az 1 egyseg tavolsagra van.*/
	bool res = true;
	int distance = std::abs(dest_x - getX()) + std::abs(dest_y - getY());
	if (distance != 1) {
		res = false;
		std::cout << "az x " << this->getX() << std::endl;
		std::cout << "az y " << this->getY() << std::endl;
		std::cout << "az dx " << dest_x << std::endl;
		std::cout << "az dy " << dest_y << std::endl;
		std::cout << res << std::endl;
	}
	//move(dest_x, dest_y);
	return res;
}