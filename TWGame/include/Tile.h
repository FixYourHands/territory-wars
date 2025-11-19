#pragma once
#include <SFML/Graphics.hpp>
#include "Animation/TileAnimation/TileAnimationManager.h"


namespace TileAttributes
{
	constexpr int TILE_WIDTH{ 72 };
	constexpr int TILE_HEIGHT{ 38 };
}

class Tile
{
public:
	
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
	constexpr static int TILE_WIDTH{ TileAttributes::TILE_WIDTH };
	constexpr static int TILE_HEIGHT{ TileAttributes::TILE_HEIGHT };

private:
	void setTileImage();
};