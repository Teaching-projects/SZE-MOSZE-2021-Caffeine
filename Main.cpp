
#include "Game.h"
#include <iostream>
#include "JSON.h"




int main(int argc, char* argv[])
{



	std::string tmp = argv[1];
	if(tmp.empty())
		throw(std::runtime_error("Missing argument!"));
	
	Game *ujgame = new Game(argv[1]);
	


	delete ujgame;
	return 0;
}
