#include "../JSON.h"
#include "../Piece.h"
#include "../Piece.cpp"
#include "../King.h"
#include "../King.cpp"
#include "../Rook.h"
#include "../Rook.cpp"
#include "../Bishop.h"
#include "../Bishop.cpp"
#include <gtest/gtest.h>

#include <fstream>
#include <utility>

TEST(King_piece,King_exists)
{
	Piece *tmp_piece = new King(1, 1);
	int x = tmp_piece->getX();
	int y = tmp_piece->getY();
	EXPECT_EQ(x,1);
	EXPECT_EQ(y,1);
	tmp_piece->move(*tmp_piece,2,1);
	int nx = tmp_piece->getX();
	EXPECT_EQ(nx,2);
}

TEST(Rook_piece,Rook_exists)
{
	Piece *tmp_piece = new Rook(1, 1);
	int x = tmp_piece->getX();
	int y = tmp_piece->getY();
	EXPECT_EQ(x,1);
	EXPECT_EQ(y,1);
	tmp_piece->move(*tmp_piece,5,1);
	int nx = tmp_piece->getX();
	EXPECT_EQ(nx,5);
}

TEST(Bishop_piece,Bishop_exists)
{
	Piece *tmp_piece = new Bishop(5, 5);
	int x = tmp_piece->getX();
	int y = tmp_piece->getY();
	EXPECT_EQ(x,5);
	EXPECT_EQ(y,5);
	tmp_piece->move(*tmp_piece,6,4);
	int nx = tmp_piece->getX();
	int ny = tmp->piece->getY();
	EXPECT_EQ(nx,6);
	EXPECT_EQ(ny,4);
}


int main(int argc, char** argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
