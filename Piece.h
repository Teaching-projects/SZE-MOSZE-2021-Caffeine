#pragma once

#include <string>
#include <cstdlib>
#include <iostream>
#include <exception>






class Piece {/**
			 *Abstract class, that contains the essentials of a chess piece
			 */
	bool isDead = false;
	bool isWhite = false;
	int curr_x, curr_y;
	const std::string name;
	
public:
	/*constructor*/
	Piece(int x_pos, int y_pos,const std::string &n) : curr_x(x_pos), curr_y(y_pos),name(n) {}

	/*copy constructor*/
	Piece (const Piece &p)  {
		curr_x= p.curr_x;
		curr_y = p.curr_y;
	}

	~Piece() {}

	/*pass the object as reference to make permanent changes*/
	virtual void move(Piece& p, int dest_x, int dest_y);
	virtual void Abstract() = 0;
	//virtual std::string toString() = 0;
	//virtual std::string toString() = 0;

	virtual std::string toString();

	void killpiece()
	{
		isDead = true;
	}
	void setWhite()
	{
		isWhite = true;
	}
	/*getters*/
	int getX()
	{
		return curr_x;
	}
	int getY()
	{
		return curr_y;
	}
	const std::string getName()
	{
		return name;
	}
	bool get_isWhite()
	{
		return isWhite;
	}
	/*check whether the given piece can move to the destination, based on its individual moveset*/
	virtual bool checkMove(int dest_x, int dest_y)=0;
	/*setters*/
	void setX(int dest_x) { curr_x = dest_x; }
	void setY(int dest_y) { curr_x = dest_y; }
	//virtual void validMove(int destX, int destY) = 0;

};