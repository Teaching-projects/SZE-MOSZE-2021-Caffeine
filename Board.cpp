#include "Board.h"

void Board::setup() {
	/*ez a függvény inicializálja a táblát*/
	int i, j;
	/*minden PÁROS sorban, minden párosadik elem fehér*/
	for (i = 0; i < 8; ++i)
	{
		std::vector<Piece*>tmp;

		for (j = 0; j < 8; ++j)
		{
			if (i == 0) {

				Piece *kiraly = new King(i, j);
				kiraly->setWhite();
				tmp.push_back(kiraly);
			}
			else if (i == 1)
			{
				Piece *tmp_piece = new Pawn(i, j);
				tmp_piece->setWhite();
				tmp.push_back(tmp_piece);
			}
			else if (i == 6)
			{
				Piece *tmp_piece = new Pawn(i, j);
				tmp.push_back(tmp_piece);
			}
			else if (i == 7)
			{
				Piece *tmp_piece = new King(i, j);

				tmp.push_back(tmp_piece);
			}
			else {
				Piece *semmi = new Nullpiece(i, j);
				tmp.push_back(semmi);

			}
		}
		board.push_back(tmp);

	}

}

void Board::move_piece(int px, int py, int dx, int dy) {
	/* ha a target destination nem uresbabu, akkor azt "leuti"*/

	//if (dynamic_cast<Nullpiece*>(board[dx][dy]))
	//	std::cout << "target_dest is empty";
	if (board[px][py]->checkMove(dx, dy)) {
		board[px][py]->move(*board[px][py], dx, dy);
		/*		std::cout << board[px][py]->getX()<<board[px][py]->getY() << std::endl;*/
		board[dx][dy] = board[px][py];
		//std::cout << board[dx][dy]->getX() << board[px][py]->getY() << std::endl;


		board[px][py] = new Nullpiece(px, py);

		//Piece *tmp = dynamic_cast<Nullpiece*>(board[px][py]);

//			std::cout << "dx, dy:" << dx << " " << dy << " mozgatva\n";
	}



	this->toString();
}

void Board::toString() {
	int i, j;

	for (i = 0; i < 8; ++i)
	{
		for (j = 0; j < 8; ++j) {

			std::cout << board[i][j]->toString();
		}
		std::cout << std::endl;
	}

}