SHELL:=/bin/bash

OBJS = JSON.o Pawn.o King.o Main.o Game.o Board.o Piece.o Nullpiece.o Queen.o Rook.o Knight.o Bishop.o
OUT = a.out
CFLAGS = -Wall -std=c++17
CC = g++

default: build

build: $(OBJS)
	$(CC) $(CFLAGS) -o $(OUT) $(OBJS)

run: ./$(OUT)
	./$(OUT) $(UNIT1) $(UNIT2)

JSON.o: JSON.cpp JSON.h
	$(CC) $(CFLAGS) -c JSON.cpp
	
Piece.o: Piece.cpp Piece.h
	$(CC) $(CFLAGS) -c Piece.cpp
	
Pawn.o: Pawn.cpp Pawn.h Piece.h
	$(CC) $(CFLAGS) -c Pawn.cpp

King.o: King.cpp King.h Piece.h
	$(CC) $(CFLAGS) -c King.cpp
	
Queen.o: Queen.cpp Queen.h Piece.h
	$(CC) $(CFLAGS) -c Queen.cpp
	
Rook.o: Rook.cpp Rook.h Piece.h
	$(CC) $(CFLAGS) -c Rook.cpp
	
Bishop.o: Bishop.cpp Bishop.h Piece.h
	$(CC) $(CFLAGS) -c Bishop.cpp
	
Knight.o: Knight.cpp Knight.h Piece.h
	$(CC) $(CFLAGS) -c Knight.cpp

Nullpiece.o: Nullpiece.cpp Nullpiece.h Piece.h
	$(CC) $(CFLAGS) -c Nullpiece.cpp

Board.o: Board.cpp Board.h Piece.h King.h Piece.h Nullpiece.h
	$(CC) $(CFLAGS) -c Board.cpp

Game.o: Game.cpp Game.h Board.h JSON.h
	$(CC) $(CFLAGS) -c Game.cpp
valgrind:
	bash -c "chmod +x valgrind.sh"
	bash -c "./valgrind.sh"

cppcheck:
	bash -c "chmod +x cppcheck.sh"
	bash -c "./cppcheck.sh"
	
gtest:
	cd test && cmake CMakeLists.txt
	cd test && make
	cd test && ./runTests

documentation:
	doxygen doxconfig

clean:
	rm -rf $(OBJS) $(OUT)
