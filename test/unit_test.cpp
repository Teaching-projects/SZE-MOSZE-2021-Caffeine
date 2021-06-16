#include "../JSON.h"
#include "../Piece.h"
#include "../Piece.cpp"
#include "../King.h"
#include "../King.cpp"
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
	tmp_piece = tmp_piece->move(2,1);
	int nx = tmp_piece->getX();
	EXPECT_EQ(nx,2);
}


int main(int argc, char** argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
