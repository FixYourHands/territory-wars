#pragma once
#include <array>
#include "Animation/SpriteAnimation/AnimationFrameConstants.h"
#include "Animation/SpriteAnimation/AnimationFrameBuilder.h"


namespace FrameSpeeds = AnimationFrameConstants::FrameSpeeds;
namespace AnimationLengths = AnimationFrameConstants::AnimationLengths;


namespace
{
	using BlackIdleAnimation = std::array<DataStructures::FrameData, AnimationLengths::idleFrameLength>;
	using YellowIdleAnimation = std::array<DataStructures::FrameData, AnimationLengths::idleFrameLength>;
	using GreenIdleAnimation = std::array<DataStructures::FrameData, AnimationLengths::idleFrameLength>;
	using PurpleIdleAnimation = std::array<DataStructures::FrameData, AnimationLengths::idleFrameLength>;
	using namespace PixelCoordinates::FrameLevels;
}


static constexpr BlackIdleAnimation ANIMATION_BlackIdleRightFront{ Builder::buildIdlingAnimation<blackRowLevel_1>() };
static constexpr BlackIdleAnimation ANIMATION_BlackIdleLeftFront{ Builder::buildIdlingAnimation<blackRowLevel_2>() };
static constexpr BlackIdleAnimation ANIMATION_BlackIdleLeftRear{ Builder::buildIdlingAnimation<blackRowLevel_3>() };
static constexpr BlackIdleAnimation ANIMATION_BlackIdleRightRear{ Builder::buildIdlingAnimation<blackRowLevel_4>() };

static constexpr YellowIdleAnimation ANIMATION_YellowIdleRightFront{ Builder::buildIdlingAnimation<yellowRowLevel_1>() };
static constexpr YellowIdleAnimation ANIMATION_YellowIdleLeftFront{ Builder::buildIdlingAnimation<yellowRowLevel_2>() };
static constexpr YellowIdleAnimation ANIMATION_YellowIdleLeftRear{ Builder::buildIdlingAnimation<yellowRowLevel_3>() };
static constexpr YellowIdleAnimation ANIMATION_YellowIdleRightRear{ Builder::buildIdlingAnimation<yellowRowLevel_4>() };

static constexpr GreenIdleAnimation ANIMATION_GreenIdleRightFront{ Builder::buildIdlingAnimation<greenRowLevel_1>() };
static constexpr GreenIdleAnimation ANIMATION_GreenIdleLeftFront{ Builder::buildIdlingAnimation<greenRowLevel_2>() };
static constexpr GreenIdleAnimation ANIMATION_GreenIdleLeftRear{ Builder::buildIdlingAnimation<greenRowLevel_3>() };
static constexpr GreenIdleAnimation ANIMATION_GreenIdleRightRear{ Builder::buildIdlingAnimation<greenRowLevel_4>() };

static constexpr PurpleIdleAnimation ANIMATION_PurpleIdleRightFront{ Builder::buildIdlingAnimation<purpleRowLevel_1>() };
static constexpr PurpleIdleAnimation ANIMATION_PurpleIdleLeftFront{ Builder::buildIdlingAnimation<purpleRowLevel_2>() };
static constexpr PurpleIdleAnimation ANIMATION_PurpleIdleLeftRear{ Builder::buildIdlingAnimation<purpleRowLevel_3>() };
static constexpr PurpleIdleAnimation ANIMATION_PurpleIdleRightRear{ Builder::buildIdlingAnimation<purpleRowLevel_4>() };