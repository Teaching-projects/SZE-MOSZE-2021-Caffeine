#include "../JSON.h"
#include "../Piece.h"
#include "../Piece.cpp"
#include "../King.h"
#include "../King.cpp"
#include "../Rook.h"
#include "../Rook.cpp"
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


int main(int argc, char** argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
