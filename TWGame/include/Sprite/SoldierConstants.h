#pragma once
#include <SFML/Graphics.hpp>

namespace SpriteConstants
{
	enum class SoldierState
	{
		Idle,
		Walking,
		Sitting,
		Punching,
		GettingHit,
		Dying
	};

	namespace SoldierAttributes
	{
		constexpr float SOLDIER_SCALE{2.f};
		constexpr float SOLDIER_SPEED{ 20.f };
		constexpr sf::Vector2f ZERO_SPEED{ 0.f,0.f };
		constexpr sf::Vector2f DEFAULT_SPEED{ SOLDIER_SPEED, SOLDIER_SPEED/2.f};
	}
	
} 