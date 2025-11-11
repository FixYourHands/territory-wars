#pragma once
#include <vector>
#include "Tile.h"
class TileMap
{

public:
	TileMap(const int rows, const int cols);
	Tile& getTile(const int row, const int col);
private:
	std::vector<std::vector<Tile>> map;
	
};