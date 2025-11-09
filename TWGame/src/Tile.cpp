#include "Tile.h"

Tile::Tile(int r, int c)
	: row(r), col(c), _isOccupied(false) {
}

sf::Vector2i Tile::getGridPosition() const {
	return sf::Vector2i{ col, row };
}

bool Tile::isOccupied() const {
	return _isOccupied;
}