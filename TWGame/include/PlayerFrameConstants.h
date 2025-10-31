#pragma once
#include "SFML/Graphics.hpp"

struct SpriteSheetTextureData
{
	int xpos;
	int ypos;

	struct Dimensions
	{
		int width;
		int height;
	};

	Dimensions size;

	sf::IntRect getRect() const
	{
		return sf::IntRect{ {xpos,ypos},{size.width,size.height} };
	};
};

struct FrameData
{
	SpriteSheetTextureData dimensions;
	float duration;

	sf::IntRect getRect() const
	{
		return dimensions.getRect();
	};
};

namespace PlayerFrameConstants
{
	static constexpr float slowFrameSpeed{ .15f };
	static constexpr float fastFrameSpeed{ .05f };
}
