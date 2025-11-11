#include "TileMap.h"

TileMap::TileMap(const int rows, const int cols)
{
	map.resize(rows);
	for (int r = 0; r < rows; ++r) {
		map[r].reserve(cols);
		for (int c = 0; c < cols; ++c) {
			map[r].emplace_back(r, c);
		}
	}
}

Tile& TileMap::getTile(const int row, const int col)
{
	return map[row][col];
}