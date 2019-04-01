#pragma once

#include <array>

#include "Grid.h"

class GridFrames
{
public:
	GridFrames();

	const Grid<4, 4>& operator[](int index);
private:
	std::array<Grid<4, 4>, 4> m_frames;
};

