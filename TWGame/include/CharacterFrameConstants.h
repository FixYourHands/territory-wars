#pragma once
#include "SFML/Graphics.hpp"

enum class ColumnNumber
{
	Col1, Col2, Col3, Col4, Col5, Col6, Col7, Col8, Col9, Col10,
	Col11, Col12, Col13, Col14, Col15, Col16, Col17, Col18, Col19, Col20,
	Col21, Col22, Col23, Col24, Col25
};

enum class RowNumber
{
	Row1, Row2, Row3, Row4, Row5, Row6, Row7, Row8,
	Row9, Row10, Row11, Row12, Row13, Row14, Row15, Row16
};

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

namespace CharacterFrameConstants
{
	using XCoordinates = int;
	static constexpr float slowFrameSpeed{ .15f };
	static constexpr float fastFrameSpeed{ .05f };
	static constexpr int frameWidth{ 32 };
	static constexpr int frameHeight{ 48 };

	constexpr std::array<XCoordinates, 10> columnCoordinates
	{
		0,32,64,96,128,160,192,224,256,288
	};

	constexpr std::array<XCoordinates, 10> rowCoordinates
	{
		0,48,96,144,192,240,288,336,384,432
	};
}
