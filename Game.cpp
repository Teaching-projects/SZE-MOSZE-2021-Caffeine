#include"Game.h"

void Game::start() {
	int piece_x, piece_y, dest_x, dest_y;
	palya = new Board();
	palya->setup();
	palya->toString();

	/*!gameplayt f�ggv�ny kent folytatni*/
	//while (!isgameover()) {
	//	std::cin >> piece_x >> piece_y >> dest_x >> dest_y;
	//	//ide a babuknak a parancsot �tad� f�ggv�ny

	//	

	//	palya->move_piece(piece_x, piece_y, dest_x, dest_y);
	//	/*ide a while loopal v�gig j�rni a json olvas�s eredm�ny�t*/
	//	if (dest_x == 0 && dest_y == 0)
	//		setgame();
	//}

}