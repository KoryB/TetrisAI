#pragma once

#include <array>

#include "GridFrames.h"
#include "PieceData.h"

class Piece
{
public:
	static const std::array<GridFrames<4, 4>, 7> s_piece_frames;

public:
	Piece(PieceData::Type type, int row, int col);

private:
	 PieceData::Type m_type;
	 int row, column;
};

