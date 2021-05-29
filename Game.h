#pragma once
#include "Board.h"
#include "JSON.h"

class Game {/**
			 *Class that responsible to run the gameplay, ask and handle the flows of the inputs
			 */
	Board *palya;
	bool gameover = false;
public:
	Game() { start();}
	~Game() { delete palya; }
	void start();

	bool isgameover() { return this->gameover; }
	void setgame() { gameover = true; }
};

/*
A játékmenet a következõ :
	1. Board.h setup függvény meghívása
	2. egy While(!gameover) ciklus inputokat bekérni felhasználóktól felváltva
	3. inputonként gameovert ellenõrzni.


Mikor van vége a játéknak ? - ha az egyik királyt leütjük.
*/