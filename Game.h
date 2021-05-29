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
A j�t�kmenet a k�vetkez� :
	1. Board.h setup f�ggv�ny megh�v�sa
	2. egy While(!gameover) ciklus inputokat bek�rni felhaszn�l�kt�l felv�ltva
	3. inputonk�nt gameovert ellen�rzni.


Mikor van v�ge a j�t�knak ? - ha az egyik kir�lyt le�tj�k.
*/