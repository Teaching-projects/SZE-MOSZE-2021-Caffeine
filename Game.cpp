#include"Game.h"

void Game::start() {
	/**
	*method for starting a new game
	*/
	int piece_x, piece_y, dest_x, dest_y;
	std::vector<int>koords;
	palya = new Board();
	palya->setup();
	palya->toString();
	/**
	*uses the methods of the board class
	*/


	try {
		/**
		*gets the moves from a JSON file
		*/
		auto steps_from_file = JSON::parseJson(getInput());
		for (int i = 0; i < steps_from_file.size(); ++i) {

			for (auto &it : steps_from_file[i])
			{
				koords.push_back(it.second);

			}

		}
	}
	catch (const std::exception &e) {

		std::cout << e.what() << std::endl;

	}

	for (int i = 0; i < koords.size(); i = i + 4) {
		palya->move_piece(koords[i], koords[i + 1], koords[i + 2], koords[i + 3]);
	}
	if (palya->checkGameOver())
		setgame();

	while (!isgameover()) {
		/**
		*while the game is not over, gets the next move from input
		*/

		std::cin >> piece_x >> piece_y >> dest_x >> dest_y;		

		palya->move_piece(piece_x, piece_y, dest_x, dest_y);

	}

}

