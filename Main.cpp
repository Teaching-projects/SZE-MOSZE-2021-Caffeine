
#include "Game.h"
#include <iostream>
#include "JSON.h"
/*
JSON BEOLVAS
Exception kezelés
Game osztály- játékmenet vezérlése
További Piecek implementálása

FULL OOP -
cout csak mainben
ami const lehet az legyen
ami private lehet az legyen - mindenhova getter setter ami private
külön könyvtár - külön cpp 



sáncolás, döntetlen, ha marad idő
*/

/*FEJLESZTÉSI ÖTLET: argumentumként adjak egy input.txt-t ha nem üres akkor olvassa be a lépéseket
ellenkező esetben kérjen inputokat és akkor az inputok lehetnének json formátumban, ezzel is okot adva az
olvasó könyvtár megírásának
*/
int main(int argc, char* argv[])
{


	//auto steps_from_file = JSON::parseJson(argv[1]);
	//for (int i = 0; i < steps_from_file.size(); ++i) {
	//	for (auto &it : steps_from_file[i])
	//	{
	//		std::cout << it.first << "\t" << it.second << std::endl;
	//	}
	//}
	//Game *ujgame = new Game(argv[1]);
	Game *ujgame = new Game("input.json");


	/*algortimus: minden paros sorban, minden paros elem feher*/

/*##################################################*/
	/*integralni az alabbi kirajzolast kulon osztalyként*/

	int i, j;
	int k;

	bool color = true;

	for (i = 0; i < 8; ++i) {

		bool color = true;
		if (i % 2 == 0) {
			for (k = 0; k < 8; ++k)
				if (color) {
					std::cout << "    ";
					color = !color;
				}
				else {
					std::cout << "####";
					color = !color;
				}
		}
		else
			for (k = 0; k < 8; ++k)
				if (color) {
					std::cout << "####";
					color = !color;
				}
				else {
					std::cout << "    ";
					color = !color;
				}
		std::cout << std::endl;
			

		for (j = 0; j < 8; ++j) {



			if (i % 2 == 0) // ha a sor paros, akkor minden paros elem Feher
			{
				if (j % 2 == 0)
				{
					std::cout << "  W ";
				}
				else
					std::cout << "# B#";
			}
			else //ha a sor paratlan, akkor minden paratlanodik feher
			{
				if (j % 2 == 0)
					std::cout << "# B#";
				else
					std::cout << "  W ";

			}
			
		}
		std::cout << std::endl;
		color = true;
		if (i % 2 == 0) {
			for (k = 0; k < 8; ++k)
				if (color) {
					std::cout << "    ";
					color = !color;
				}
				else {
					std::cout << "####";
					color = !color;
				}
		}
		else
			for (k = 0; k < 8; ++k)
				if (color) {
					std::cout << "####";
					color = !color;
				}
				else {
					std::cout << "    ";
					color = !color;
				}
		std::cout << std::endl;




/*##################################################*/
	/*integralni az alabbi kirajzolast kulon osztalyként*/
	std::cout << std::endl;
	}

	delete ujgame;
	return 0;
}
