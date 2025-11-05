#pragma once
#include <array>
#include <vector>
#include "Animation/AnimationFrameConstants.h"
#include "Animation/AnimationFrameBuilder.h"



namespace FrameSpeeds = AnimationFrameConstants::FrameSpeeds;
namespace AnimationLengths = AnimationFrameConstants::AnimationLengths;

namespace
{
	using BlackWalkAnimation = std::array<DataStructures::FrameData, AnimationLengths::walkingFrameLength>;
	using YellowWalkAnimation = std::array<DataStructures::FrameData, AnimationLengths::walkingFrameLength>;
	using GreenWalkAnimation = std::array<DataStructures::FrameData, AnimationLengths::walkingFrameLength>;
	using PurpleWalkAnimation = std::array<DataStructures::FrameData, AnimationLengths::walkingFrameLength>;
	using WalkAnimation = std::array<DataStructures::FrameData, AnimationLengths::walkingFrameLength>;
	using namespace PixelCoordinates::FrameLevels;
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


