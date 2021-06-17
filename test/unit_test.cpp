#include "../JSON.h"
#include "../Piece.h"
#include "../Piece.cpp"
#include "../King.h"
#include "../King.cpp"
#include "../Rook.h"
#include "../Rook.cpp"
#include "../Bishop.h"
#include "../Bishop.cpp"
#include "../Queen.h"
#include "../Queen.cpp"
#include "../Pawn.h"
#include "../Pawn.cpp"
#include "../Knight.h"
#include "../Knight.cpp"
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

TEST(King_bad_piece,King_bad_exists)
{
	Piece *tmp_piece = new King(1, 1);
	int x = tmp_piece->getX();
	int y = tmp_piece->getY();
	EXPECT_EQ(x,1);
	EXPECT_EQ(y,1);
	tmp_piece->move(*tmp_piece,3,1);
	int nx = tmp_piece->getX();
	ASSERT_EQ(nx,3);
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

TEST(Rook_bad_piece,Rook_bad_exists)
{
	Piece *tmp_piece = new Rook(1, 1);
	int x = tmp_piece->getX();
	int y = tmp_piece->getY();
	EXPECT_EQ(x,1);
	EXPECT_EQ(y,1);
	tmp_piece->move(*tmp_piece,5,2);
	int nx = tmp_piece->getX();
	int ny = tmp_piece->getY();
	ASSERT_EQ(nx,5);
	ASSERT_EQ(ny,2);
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
	int ny = tmp_piece->getY();
	EXPECT_EQ(nx,6);
	EXPECT_EQ(ny,4);
}

TEST(Bishop_bad_piece,Bishop_bad_exists)
{
	Piece *tmp_piece = new Bishop(5, 5);
	int x = tmp_piece->getX();
	int y = tmp_piece->getY();
	EXPECT_EQ(x,5);
	EXPECT_EQ(y,5);
	tmp_piece->move(*tmp_piece,6,5);
	int nx = tmp_piece->getX();
	int ny = tmp_piece->getY();
	ASSERT_EQ(nx,6);
	ASSERT_EQ(ny,5);
}

TEST(Queen_piece,Queen_exists)
{
	Piece *tmp_piece = new Queen(7, 2);
	int x = tmp_piece->getX();
	int y = tmp_piece->getY();
	EXPECT_EQ(x,7);
	EXPECT_EQ(y,2);
	tmp_piece->move(*tmp_piece,6,4);
	int nx = tmp_piece->getX();
	int ny = tmp_piece->getY();
	ASSERT_EQ(nx,6);
	ASSERT_EQ(ny,4);
}

TEST(Queen_good_piece,Queen_good_exists)
{
	Piece *tmp_piece = new Queen(7, 2);
	int x = tmp_piece->getX();
	int y = tmp_piece->getY();
	EXPECT_EQ(x,7);
	EXPECT_EQ(y,2);
	tmp_piece->move(*tmp_piece,5,4);
	int nx = tmp_piece->getX();
	int ny = tmp_piece->getY();
	EXPECT_EQ(nx,5);
	EXPECT_EQ(ny,4);
}

TEST(Knight_piece,Knight_exists)
{
	Piece *tmp_piece = new Knight(7, 2);
	int x = tmp_piece->getX();
	int y = tmp_piece->getY();
	EXPECT_EQ(x,7);
	EXPECT_EQ(y,2);
	tmp_piece->move(*tmp_piece,6,4);
	int nx = tmp_piece->getX();
	int ny = tmp_piece->getY();
	EXPECT_EQ(nx,6);
	EXPECT_EQ(ny,4);
}

TEST(Knight_bad_piece,Knight_bad_exists)
{
	Piece *tmp_piece = new Knight(7, 2);
	int x = tmp_piece->getX();
	int y = tmp_piece->getY();
	EXPECT_EQ(x,7);
	EXPECT_EQ(y,2);
	tmp_piece->move(*tmp_piece,3,2);
	int nx = tmp_piece->getX();
	int ny = tmp_piece->getY();
	ASSERT_EQ(nx,3);
	ASSERT_EQ(ny,2);
}

TEST(Pawn_piece,Pawn_exists)
{
	Piece *tmp_piece = new Pawn(3, 2);
	int x = tmp_piece->getX();
	int y = tmp_piece->getY();
	EXPECT_EQ(x,3);
	EXPECT_EQ(y,2);
	tmp_piece->move(*tmp_piece,3,3);
	int ny = tmp_piece->getY();
	EXPECT_EQ(ny,3);
}

TEST(Pawn_bad_piece,Pawn_bad_exists)
{
	Piece *tmp_piece = new Pawn(3, 2);
	int x = tmp_piece->getX();
	int y = tmp_piece->getY();
	EXPECT_EQ(x,3);
	EXPECT_EQ(y,2);
	tmp_piece->move(*tmp_piece,4,2);
	int nx = tmp_piece->getX();
	ASSERT_EQ(nx,4);
}


int main(int argc, char** argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
