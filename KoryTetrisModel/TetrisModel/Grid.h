#pragma once

#include <vector>
#include <memory>

#include "Piece.h"

template<int W, int H>
class Grid
{
public:
	Grid(std::array<const Piece::Type, W*H>& contents)
	{
		m_contents = contents;
	}

	inline Piece::Type get(int row, int col)
	{
		if (row < 0 || row > H ||
			col < 0 || col > W)
		{
			return Piece::Type::Void;
		}

		return m_contents[W*row + col];
	}
	
	inline void set(int row, int col, Piece::Type type)
	{
		if (row < 0 || row > H ||
			col < 0 || col > W)
		{
			return;
		}

		m_contents[W*row + col] = type;
	}

protected:
	std::array<Piece::Type, W*H> m_contents;
};

