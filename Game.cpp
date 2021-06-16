#include"Game.h"

void Game::start() {
	int piece_x, piece_y, dest_x, dest_y;
	std::vector<int>koords;
	palya = new Board();
	palya->setup();
	palya->toString();

	/*!gameplayt függvény kent folytatni*/
	try {
		auto steps_from_file = JSON::parseJson(getInput());
		for (int i = 0; i < steps_from_file.size(); ++i) {

			for (auto &it : steps_from_file[i])
			{
				std::cout << it.first << "\t" << it.second << std::endl;
				koords.push_back(it.second);

			}

		}
	}
	catch (const std::exception &e) {

		std::cout << e.what() << std::endl;

	}
	if (palya->checkGameOver())
		setgame();
	while (!isgameover()) {


		for (int i = 0; i < koords.size(); i = i + 4) {
			palya->move_piece(koords[i], koords[i+1], koords[i+2], koords[i+3]);
		}
		std::cin >> piece_x >> piece_y >> dest_x >> dest_y;
		//ide a babuknak a parancsot átadó függvény

		

		palya->move_piece(piece_x, piece_y, dest_x, dest_y);
		/*ide a while loopal végig járni a json olvasás eredményét*/
		if (dest_x == 0 && dest_y == 0)
			setgame();
	}

}

