
#include "Game.h"
#include <iostream>
#include "JSON.h"
/*
JSON BEOLVAS
Exception kezel�s
Game oszt�ly- j�t�kmenet vez�rl�se
Tov�bbi Piecek implement�l�sa

FULL OOP -
cout csak mainben
ami const lehet az legyen
ami private lehet az legyen - mindenhova getter setter ami private
k�l�n k�nyvt�r - k�l�n cpp 



s�ncol�s, d�ntetlen, ha marad id�
*/

/*FEJLESZT�SI �TLET: argumentumk�nt adjak egy input.txt-t ha nem �res akkor olvassa be a l�p�seket
ellenkez� esetben k�rjen inputokat �s akkor az inputok lehetn�nek json form�tumban, ezzel is okot adva az
olvas� k�nyvt�r meg�r�s�nak
*/
int main(int argc, char* argv[])
{
	//for (int i = 0; i < argc; ++i)
	//{
	//	std::cout << argv[i] << std::endl;
	//}



//	auto steps_from_file = JSON::parseJson(argv[1]);
	Game *ujgame = new Game();

	/*algortimus: minden paros sorban, minden paros elem feher*/

/*##################################################*/
	/*integralni az alabbi kirajzolast kulon osztalyk�nt*/

	//int i, j;
	//int k;

	//bool color = true;

	//for (i = 0; i < 8; ++i) {

	//	bool color = true;
	//	if (i % 2 == 0) {
	//		for (k = 0; k < 8; ++k)
	//			if (color) {
	//				std::cout << "    ";
	//				color = !color;
	//			}
	//			else {
	//				std::cout << "####";
	//				color = !color;
	//			}
	//	}
	//	else
	//		for (k = 0; k < 8; ++k)
	//			if (color) {
	//				std::cout << "####";
	//				color = !color;
	//			}
	//			else {
	//				std::cout << "    ";
	//				color = !color;
	//			}
	//	std::cout << std::endl;
	//		

	//	for (j = 0; j < 8; ++j) {



	//		if (i % 2 == 0) // ha a sor paros, akkor minden paros elem Feher
	//		{
	//			if (j % 2 == 0)
	//			{
	//				std::cout << "  W ";
	//			}
	//			else
	//				std::cout << "# B#";
	//		}
	//		else //ha a sor paratlan, akkor minden paratlanodik feher
	//		{
	//			if (j % 2 == 0)
	//				std::cout << "# B#";
	//			else
	//				std::cout << "  W ";

	//		}
	//		
	//	}
	//	std::cout << std::endl;
	//	color = true;
	//	if (i % 2 == 0) {
	//		for (k = 0; k < 8; ++k)
	//			if (color) {
	//				std::cout << "    ";
	//				color = !color;
	//			}
	//			else {
	//				std::cout << "####";
	//				color = !color;
	//			}
	//	}
	//	else
	//		for (k = 0; k < 8; ++k)
	//			if (color) {
	//				std::cout << "####";
	//				color = !color;
	//			}
	//			else {
	//				std::cout << "    ";
	//				color = !color;
	//			}
	//	std::cout << std::endl;




/*##################################################*/
	/*integralni az alabbi kirajzolast kulon osztalyk�nt*/
//	std::cout << std::endl;
//	}

	delete ujgame;
	return 0;
}