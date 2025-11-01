#pragma once
#include "CharacterFrameConstants.h"

namespace PurpleWalkingRightFront
{
	constexpr const int& yLevel{ 576 };

	template <ColumnNumber CN>
	static constexpr FrameData getFrame(float duration)
	{
		constexpr int index{ static_cast<int>(CN) };
		constexpr SpriteSheetTextureData temp{ CharacterFrameConstants::columnCoordinates[index],yLevel,{CharacterFrameConstants::frameWidth,CharacterFrameConstants::frameHeight} };
		return FrameData{ temp,duration };
		
	}
	
}

namespace PurpleWalkingLeftFront
{
	namespace
	{
		constexpr int yCoordinate{ 624 };
		constexpr const int& rowLevel{ yCoordinate };

	}

	
}



