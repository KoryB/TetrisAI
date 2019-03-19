#pragma once

#include <array>

class Grid;

class Piece
{
public:
	enum class Type : char
	{
		Void = 0,
		O    = 1,
		I    = 2,
		T    = 3,
		S    = 4,
		Z    = 5,
		J    = 6,
		L    = 6
	};

	Piece();

private:
	 std::array<Grid, 4> m_frames;
};

