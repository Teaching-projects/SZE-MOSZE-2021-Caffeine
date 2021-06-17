#pragma once
#include "Board.h"
#include "JSON.h"

class Game {/**
			 *Class that responsible to run the gameplay, ask and handle the flows of the inputs
			 */
	Board *palya;
	bool gameover = false;
	const std::string inputSource;
public:
	Game(const std::string& inputFile) : inputSource(inputFile) {}
	~Game() { delete palya; }
	void start();

	bool isgameover() { return this->gameover; }
	void setgame() { gameover = true; }
	
	std::string getInput()
	{
		return this->inputSource;
	}
};

