#pragma once
#include <SFML/Graphics.hpp>
#include "Sprite/SoldierConstants.h"

class Tile
{
public:
	const int row;
	const int col;

public:
	Tile(int r, int c);
	sf::Vector2f getScreenPosition() const; 
	sf::Vector2i getGridPosition() const; 
	bool isOccupied() const;
private:
	bool _isOccupied;
	constexpr static int TILE_WIDTH{ SpriteConstants::TileAttributes::TILE_WIDTH };
	constexpr static int TILE_HEIGHT{ SpriteConstants::TileAttributes::TILE_HEIGHT };
};