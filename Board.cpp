#include "Board.h"

void Board::setup() {

	int i, j;

	for (i = 0; i < 8; ++i)
	{
		std::vector<Piece*>tmp;

		for (j = 0; j < 8; ++j)
		{
			if (i == 0) {

				Piece *bastya = new Rook(i, j);
				tmp.push_back(bastya);

				Piece *huszar = new Knight(i, j+1);
				tmp.push_back(huszar);

				Piece *futo = new Bishop(i, j+2);
				tmp.push_back(futo);

				Piece *kiralyno = new Queen(i, j + 3);
				tmp.push_back(kiralyno);

				Piece *kiraly = new King(i, j + 4);
				tmp.push_back(kiraly);



				Piece *futoo = new Bishop(i, j + 5);
				tmp.push_back(futoo);

				Piece *huszarr = new Knight(i, j + 6);
				tmp.push_back(huszarr);

				Piece *bastyaa = new Rook(i, j+7);
				tmp.push_back(bastyaa);

			}

			else if (i == 1) {
				Piece *gyalog1 = new Pawn(i, j);
				tmp.push_back(gyalog1);

				Piece *gyalog2 = new Pawn(i, j+1);
				tmp.push_back(gyalog2);

				Piece *gyalog3 = new Pawn(i, j+2);
				tmp.push_back(gyalog3);

				Piece *gyalog4 = new Pawn(i, j+3);
				tmp.push_back(gyalog4);

				Piece *gyalog5 = new Pawn(i, j+4);
				tmp.push_back(gyalog5);

				Piece *gyalog6 = new Pawn(i, j+5);
				tmp.push_back(gyalog6);

				Piece *gyalog7 = new Pawn(i, j+6);
				tmp.push_back(gyalog7);

				Piece *gyalog8 = new Pawn(i, j+7);
				tmp.push_back(gyalog8);


			}

			else if (i == 6) {
				Piece *fgyalog1 = new Pawn(i, j);
				fgyalog1->setWhite();
				tmp.push_back(fgyalog1);

				Piece *fgyalog2 = new Pawn(i, j + 1);
				fgyalog2->setWhite();
				tmp.push_back(fgyalog2);

				Piece *fgyalog3 = new Pawn(i, j + 2);
				fgyalog3->setWhite();
				tmp.push_back(fgyalog3);

				Piece *fgyalog4 = new Pawn(i, j + 3);
				fgyalog4->setWhite();
				tmp.push_back(fgyalog4);

				Piece *fgyalog5 = new Pawn(i, j + 4);
				fgyalog5->setWhite();
				tmp.push_back(fgyalog5);

				Piece *fgyalog6 = new Pawn(i, j + 5);
				fgyalog6->setWhite();
				tmp.push_back(fgyalog6);

				Piece *fgyalog7 = new Pawn(i, j + 6);
				fgyalog7->setWhite();
				tmp.push_back(fgyalog7);

				Piece *fgyalog8 = new Pawn(i, j + 7);
				fgyalog8->setWhite();
				tmp.push_back(fgyalog8);


			}
			else if (i == 7)
			{
				Piece *fbastya = new Rook(i,j);
				fbastya->setWhite();
				tmp.push_back(fbastya);

				Piece *fhuszar = new Knight(i, j+1);
				fhuszar->setWhite();
				tmp.push_back(fhuszar);

				Piece *ffuto = new Bishop(i, j + 2);
				ffuto->setWhite();
				tmp.push_back(ffuto);

				Piece *fkiralyno = new Queen(i, j + 3);
				fkiralyno->setWhite();
				tmp.push_back(fkiralyno);

				Piece *fkiraly = new King(i, j + 4);
				fkiraly->setWhite();
				tmp.push_back(fkiraly);


				Piece *ffutoo = new Bishop(i, j + 5);
				ffutoo->setWhite();
				tmp.push_back(ffutoo);

				Piece *fhuszarr = new Knight(i, j + 6);
				fhuszarr->setWhite();
				tmp.push_back(fhuszarr);

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

	try {
		if (board[px][py]->checkMove(dx, dy)) {
			

			

			auto dummy = board[px][py];
			
			board[px][py]->move(*board[px][py], dx, dy);
			board[dx][dy] = dummy;
			delete board[dx][dy];
			board[px][py] = new Nullpiece(px, py);

		}
	}
	catch(const std::exception &e){

		std::cout << e.what() << std::endl;
		
	}



	this->toString();
}

void Board::toString() {
	{
		int i, j;
		std::cout << "    ";
		for (int l = 0; l < 8; ++l)
			std::cout<< l << "   ";
		std::cout << std::endl;
		for (i = 0; i < 8; ++i)
		{
			std::cout <<i<< "  ";

			for (j = 0; j < 8; ++j) {

				std::cout << board[i][j]->toString();
			}
			std::cout << std::endl;
		}
		std::cout << std::endl;
	}
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

