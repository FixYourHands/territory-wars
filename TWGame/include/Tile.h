#pragma once
#include <SFML/Graphics.hpp>
#include "Sprite/SoldierConstants.h"

class Tile
{
public:
	enum class TileType
	{
		Empty,
		Spawn,
		Spade,
		Heart
	};
	const int row;
	const int col;

public:
	Tile(int r, int c,TileType type = TileType::Empty);
	sf::Vector2f getScreenPosition() const; 
	sf::Vector2i getGridPosition() const; 
	bool isOccupied() const;
	void setTileType(const TileType type);
private:
	bool _isOccupied;
	TileType _type;
	constexpr static int TILE_WIDTH{ SpriteConstants::TileAttributes::TILE_WIDTH };
	constexpr static int TILE_HEIGHT{ SpriteConstants::TileAttributes::TILE_HEIGHT };
};