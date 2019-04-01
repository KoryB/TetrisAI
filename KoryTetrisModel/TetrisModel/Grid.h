#pragma once

#include <vector>
#include <memory>

#include "PieceData.h"

template<int W, int H>
class Grid
{
public:
	Grid(std::array<const PieceData::Type, W*H>& contents)
	{
		m_contents = contents;
	}

	inline PieceData::Type get(int row, int col)
	{
		if (row < 0 || row >= H ||
			col < 0 || col >= W)
		{
			return PieceData::Type::Void;
		}

		return m_contents[W*row + col];
	}
	
	inline void set(int row, int col, PieceData::Type type)
	{
		if (row < 0 || row >= H ||
			col < 0 || col >= W)
		{
			return;
		}

		m_contents[W*row + col] = type;
	}

protected:
	std::array<PieceData::Type, W*H> m_contents;
};

