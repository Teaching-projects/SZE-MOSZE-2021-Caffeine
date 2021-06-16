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
			else if (i == 3)
			{
				Piece *tmp_piece1 = new Rook(i, j);
				tmp_piece1->setWhite();
				tmp.push_back(tmp_piece1);
				Piece *tmp_piece2 = new Knight(i, j + 1);
				tmp_piece2->setWhite();
				tmp.push_back(tmp_piece2);
				Piece *tmp_piece3 = new Bishop(i, j + 2);
				tmp_piece3->setWhite();
				tmp.push_back(tmp_piece3);
				Piece *tmp_piece4 = new King(i, j + 3);
				tmp_piece4->setWhite();
				tmp.push_back(tmp_piece4);
				Piece *tmp_piece5 = new Queen(i, j + 4);
				tmp_piece5->setWhite();
				tmp.push_back(tmp_piece5);


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
	try {
		if (board[px][py]->checkMove(dx, dy)) {
			board[px][py]->move(*board[px][py], dx, dy);
			/*		std::cout << board[px][py]->getX()<<board[px][py]->getY() << std::endl;*/
			board[dx][dy] = board[px][py];
			//std::cout << board[dx][dy]->getX() << board[px][py]->getY() << std::endl;


			board[px][py] = new Nullpiece(px, py);

			//Piece *tmp = dynamic_cast<Nullpiece*>(board[px][py]);

	//			std::cout << "dx, dy:" << dx << " " << dy << " mozgatva\n";
		}
	}
	catch(const std::exception &e){

		std::cout << e.what() << std::endl;
		
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
	std::cout << std::endl;
}

bool Board::checkGameOver()
{
	int i, j;
	int num_kings = 0;
	bool gameover = false;
	for (i = 0; i < 8; ++i)
	{
		for (j = 0; j < 8; ++j) {
			if (dynamic_cast<King*>(board[i][j]))
				num_kings++;
		}

	}
	if (num_kings < 2)
		gameover = true;
	return gameover;
}