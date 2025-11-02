#pragma once
#include <array>
#include "Animation/CharacterFrameConstants.h"
#include "Animation/AnimationFrameBuilder.h"


namespace FrameSpeeds = CharacterFrameConstants::FrameSpeeds;
namespace FrameSizes = CharacterFrameConstants::FrameLengths;


namespace
{
	using BlackWalkAnimation = std::array<DataStructures::FrameData, FrameSizes::walkingFrameLength>;
	using YellowWalkAnimation = std::array<DataStructures::FrameData, FrameSizes::walkingFrameLength>;
	using GreenWalkAnimation = std::array<DataStructures::FrameData, FrameSizes::walkingFrameLength>;
	using PurpleWalkAnimation = std::array<DataStructures::FrameData, FrameSizes::walkingFrameLength>;

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

static constexpr BlackWalkAnimation ANIMATION_BlackWalkRightFront{ Builder::buildWalkingAnimation<blackRowLevel_1>() };
static constexpr BlackWalkAnimation ANIMATION_BlackWalkLeftFront{ Builder::buildWalkingAnimation<blackRowLevel_2>() };
static constexpr BlackWalkAnimation ANIMATION_BlackWalkLeftRear{ Builder::buildWalkingAnimation<blackRowLevel_3>() };
static constexpr BlackWalkAnimation ANIMATION_BlackWalkRightRear{ Builder::buildWalkingAnimation<blackRowLevel_4>() };

static constexpr YellowWalkAnimation ANIMATION_YellowWalkRightFront{ Builder::buildWalkingAnimation<yellowRowLevel_1>() };
static constexpr YellowWalkAnimation ANIMATION_YellowWalkLeftFront{ Builder::buildWalkingAnimation<yellowRowLevel_2>() };
static constexpr YellowWalkAnimation ANIMATION_YellowWalkLeftRear{ Builder::buildWalkingAnimation<yellowRowLevel_3>() };
static constexpr YellowWalkAnimation ANIMATION_YellowWalkRightRear{ Builder::buildWalkingAnimation<yellowRowLevel_4>() };

static constexpr GreenWalkAnimation ANIMATION_GreenWalkRightFront{ Builder::buildWalkingAnimation<greenRowLevel_1>() };
static constexpr GreenWalkAnimation ANIMATION_GreenWalkLeftFront{ Builder::buildWalkingAnimation<greenRowLevel_2>() };
static constexpr GreenWalkAnimation ANIMATION_GreenWalkLeftRear{ Builder::buildWalkingAnimation<greenRowLevel_3>() };
static constexpr GreenWalkAnimation ANIMATION_GreenWalkRightRear{ Builder::buildWalkingAnimation<greenRowLevel_4>() };

static constexpr PurpleWalkAnimation ANIMATION_PurpleWalkRightFront{ Builder::buildWalkingAnimation<purpleRowLevel_1>() };
static constexpr PurpleWalkAnimation ANIMATION_PurpleWalkLeftFront{ Builder::buildWalkingAnimation<purpleRowLevel_2>() };
static constexpr PurpleWalkAnimation ANIMATION_PurpleWalkLeftRear{ Builder::buildWalkingAnimation<purpleRowLevel_3>() };
static constexpr PurpleWalkAnimation ANIMATION_PurpleWalkRightRear{ Builder::buildWalkingAnimation<purpleRowLevel_4>() };