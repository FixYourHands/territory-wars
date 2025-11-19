#pragma once
#include "TileAnimationFrames.h"
#include "SFML/Graphics.hpp"

enum class TileType
{
	Empty,
	Spawn,
	Arrow,
	Heart
};


inline const sf::Texture HEART_TILE_TEXTURE = []{
		return sf::Texture("images/heartTileSheet.png");
	}();

inline const sf::Texture RATE_TILE_TEXTURE = [] {
	return sf::Texture("images/rateTileSheet.png");
	}();

inline const sf::Texture PLAIN_TILE_TEXTURE = [] {
	return sf::Texture("images/regularTileSheet.png");
	}();

class TileAnimationManager
{
public:
	static constexpr const TileImage* getTileImagePointer(const TileList color);

};