#include"Game.h"

void Game::start() {
	int piece_x, piece_y, dest_x, dest_y;
	palya = new Board();
	palya->setup();
	palya->toString();

	/*!gameplayt függvény kent folytatni*/
	//while (!isgameover()) {
	//	std::cin >> piece_x >> piece_y >> dest_x >> dest_y;
	//	//ide a babuknak a parancsot átadó függvény

	//	

	//	palya->move_piece(piece_x, piece_y, dest_x, dest_y);
	//	/*ide a while loopal végig járni a json olvasás eredményét*/
	//	if (dest_x == 0 && dest_y == 0)
	//		setgame();
	//}

}