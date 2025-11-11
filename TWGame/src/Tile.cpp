#include "Tile.h"

Tile::Tile(int r, int c, TileType type)
	: row(r), col(c), _isOccupied(false), _type(type) {
}

sf::Vector2i Tile::getGridPosition() const {
	return sf::Vector2i{ col, row };
}

bool Tile::isOccupied() const {
	return _isOccupied;
}

void Tile::setTileType(const TileType type) {
	_type = type;
}