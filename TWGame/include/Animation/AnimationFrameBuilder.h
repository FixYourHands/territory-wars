#pragma once
#include "Animation/CharacterFrameConstants.h"
#include <SFML/Graphics.hpp>

namespace
{
	namespace FrameSpeeds = CharacterFrameConstants::FrameSpeeds;
}

namespace Enumerations
{
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
}

namespace DataStructures
{
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
}

namespace PixelCoordinates
{
	constexpr int totalColumns{ 25 };
	constexpr int totalRows{ 16 };

	constexpr std::array<int, totalColumns> columnCoordinatesArray
	{
		0, 32, 64, 96, 128, 160, 192, 224, 256, 288, 320, 352, 384, 416, 448, 480, 512, 544, 576, 608, 640, 672, 704, 736, 768
	};

	constexpr std::array<int, totalRows> rowCoordinatesArray
	{
		0,48,96,144,192,240,288,336,384,432,480,528,576,624,672,720
	};

	namespace FrameLevels
	{
		constexpr Enumerations::RowNumber blackRowLevel_1{ 0 };
		constexpr Enumerations::RowNumber blackRowLevel_2{ 1 };
		constexpr Enumerations::RowNumber blackRowLevel_3{ 2 };
		constexpr Enumerations::RowNumber blackRowLevel_4{ 3 };

		constexpr Enumerations::RowNumber greenRowLevel_1{ 4 };
		constexpr Enumerations::RowNumber greenRowLevel_2{ 5 };
		constexpr Enumerations::RowNumber greenRowLevel_3{ 6 };
		constexpr Enumerations::RowNumber greenRowLevel_4{ 7 };

		constexpr Enumerations::RowNumber yellowRowLevel_1{ 8 };
		constexpr Enumerations::RowNumber yellowRowLevel_2{ 9 };
		constexpr Enumerations::RowNumber yellowRowLevel_3{ 10 };
		constexpr Enumerations::RowNumber yellowRowLevel_4{ 11 };

		constexpr Enumerations::RowNumber purpleRowLevel_1{ 12 };
		constexpr Enumerations::RowNumber purpleRowLevel_2{ 13 };
		constexpr Enumerations::RowNumber purpleRowLevel_3{ 14 };
		constexpr Enumerations::RowNumber purpleRowLevel_4{ 15 };
	}
}

namespace Builder
{

	template <Enumerations::ColumnNumber X, Enumerations::RowNumber Y>
	constexpr auto buildFrame(const float duration = FrameSpeeds::defaultDuration)
	{
		constexpr int xIndex{ static_cast<int>(X) };
		constexpr int yIndex{ static_cast<int>(Y) };
		constexpr DataStructures::SpriteSheetTextureData temp{ PixelCoordinates::columnCoordinatesArray[xIndex],PixelCoordinates::rowCoordinatesArray[yIndex],{CharacterFrameConstants::FrameDimensions::frameWidth,CharacterFrameConstants::FrameDimensions::frameHeight} };
		return DataStructures::FrameData{ temp,duration };
	}

	template <Enumerations::RowNumber row>
	static constexpr auto buildWalkingAnimation()
	{
		constexpr size_t ANIMATION_SIZE{ 10 };

		constexpr std::array<DataStructures::FrameData, ANIMATION_SIZE> animation
		{
				buildFrame<Enumerations::ColumnNumber::Col1, row>(FrameSpeeds::slowFrameSpeed),
				buildFrame<Enumerations::ColumnNumber::Col2, row>(FrameSpeeds::fastFrameSpeed),
				buildFrame<Enumerations::ColumnNumber::Col3, row>(FrameSpeeds::fastFrameSpeed),
				buildFrame<Enumerations::ColumnNumber::Col4, row>(FrameSpeeds::fastFrameSpeed),
				buildFrame<Enumerations::ColumnNumber::Col5, row>(FrameSpeeds::fastFrameSpeed),
				buildFrame<Enumerations::ColumnNumber::Col6, row>(FrameSpeeds::fastFrameSpeed),
				buildFrame<Enumerations::ColumnNumber::Col7, row>(FrameSpeeds::fastFrameSpeed),
				buildFrame<Enumerations::ColumnNumber::Col8, row>(FrameSpeeds::fastFrameSpeed),
				buildFrame<Enumerations::ColumnNumber::Col9, row>(FrameSpeeds::fastFrameSpeed),
				buildFrame<Enumerations::ColumnNumber::Col10, row>(FrameSpeeds::fastFrameSpeed)
		};

		return animation;
	}

	template <Enumerations::RowNumber row>
	static constexpr auto buildIdlingAnimation()
	{
		constexpr size_t ANIMATION_SIZE{ 3 };

		constexpr std::array<DataStructures::FrameData, ANIMATION_SIZE> animation
		{
				buildFrame<Enumerations::ColumnNumber::Col11, row>(FrameSpeeds::sittingFrameSpeedSlow),
				buildFrame<Enumerations::ColumnNumber::Col12, row>(FrameSpeeds::sittingFrameSpeedFast),
				buildFrame<Enumerations::ColumnNumber::Col13, row>(FrameSpeeds::sittingFrameSpeedFast)
		};

		return animation;
	}

	template <Enumerations::RowNumber row>
	static constexpr auto buildSittingAnimation()
	{
		constexpr size_t ANIMATION_SIZE{ 3 };

		constexpr std::array<DataStructures::FrameData, ANIMATION_SIZE> animation
		{
				buildFrame<Enumerations::ColumnNumber::Col14, row>(FrameSpeeds::sittingFrameSpeedSlow),
				buildFrame<Enumerations::ColumnNumber::Col15, row>(FrameSpeeds::sittingFrameSpeedFast),
				buildFrame<Enumerations::ColumnNumber::Col16, row>(FrameSpeeds::sittingFrameSpeedFast)
		};

		return animation;
	}

	template <Enumerations::RowNumber row>
	static constexpr auto buildPunchingAnimation()
	{
		constexpr size_t ANIMATION_SIZE{ 4 };

		constexpr std::array<DataStructures::FrameData, ANIMATION_SIZE> animation
		{
				buildFrame<Enumerations::ColumnNumber::Col17, row>(FrameSpeeds::PunchingSpeedSlow),
				buildFrame<Enumerations::ColumnNumber::Col18, row>(FrameSpeeds::PunchingSpeedFast),
				buildFrame<Enumerations::ColumnNumber::Col19, row>(FrameSpeeds::PunchingSpeedFast),
				buildFrame<Enumerations::ColumnNumber::Col20, row>(FrameSpeeds::PunchingSpeedFast)
		};

		return animation;
	}

	template <Enumerations::RowNumber row>
	static constexpr auto buildDyingAnimation()
	{
		constexpr size_t ANIMATION_SIZE{ 4 };

		constexpr std::array<DataStructures::FrameData, ANIMATION_SIZE> animation
		{
				buildFrame<Enumerations::ColumnNumber::Col22, row>(FrameSpeeds::slowFrameSpeed),
				buildFrame<Enumerations::ColumnNumber::Col23, row>(FrameSpeeds::fastFrameSpeed),
				buildFrame<Enumerations::ColumnNumber::Col24, row>(FrameSpeeds::fastFrameSpeed),
				buildFrame<Enumerations::ColumnNumber::Col25, row>(FrameSpeeds::fastFrameSpeed)
		};

		return animation;
	}

	

	template <Enumerations::RowNumber row>
	static constexpr auto buildGettingHitAnimation()
	{
		constexpr size_t ANIMATION_SIZE{ 1 };

		constexpr std::array<DataStructures::FrameData, ANIMATION_SIZE> animation
		{
				buildFrame<Enumerations::ColumnNumber::Col21, row>(FrameSpeeds::slowFrameSpeed)
		};

		return animation;
	}

	
}


