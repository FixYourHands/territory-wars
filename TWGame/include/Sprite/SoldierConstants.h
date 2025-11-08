#pragma once


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
		constexpr float SOLDIER_SCALE = 2.f;
		constexpr float SOLDIER_SPEED = 20.f;
	}
	
} 