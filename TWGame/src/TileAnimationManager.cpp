#include "Animation/TileAnimation/TileAnimationManager.h"

constexpr const TileImage* TileAnimationManager::getTileImagePointer(const TileList color)
{
	const int index{ static_cast<int>(color) };
	return &(tileImages[index]);
}