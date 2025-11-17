#pragma once
#include <array>
#include "Animation/SpriteAnimation/AnimationFrameConstants.h"
#include "Animation/SpriteAnimation/AnimationFrameBuilder.h"


namespace FrameSpeeds = AnimationFrameConstants::FrameSpeeds;
namespace AnimationLengths = AnimationFrameConstants::AnimationLengths;


namespace
{
	using BlackDieAnimation = std::array<DataStructures::FrameData, AnimationLengths::dyingFrameLength>;
	using YellowDieAnimation = std::array<DataStructures::FrameData, AnimationLengths::dyingFrameLength>;
	using GreenDieAnimation = std::array<DataStructures::FrameData, AnimationLengths::dyingFrameLength>;
	using PurpleDieAnimation = std::array<DataStructures::FrameData, AnimationLengths::dyingFrameLength>;
	using namespace PixelCoordinates::FrameLevels;
}


static constexpr BlackDieAnimation ANIMATION_BlackDieRightFront{ Builder::buildDyingAnimation<blackRowLevel_1>() };
static constexpr BlackDieAnimation ANIMATION_BlackDieLeftFront{ Builder::buildDyingAnimation<blackRowLevel_2>() };
static constexpr BlackDieAnimation ANIMATION_BlackDieLeftRear{ Builder::buildDyingAnimation<blackRowLevel_3>() };
static constexpr BlackDieAnimation ANIMATION_BlackDieRightRear{ Builder::buildDyingAnimation<blackRowLevel_4>() };

static constexpr YellowDieAnimation ANIMATION_YellowDieRightFront{ Builder::buildDyingAnimation<yellowRowLevel_1>() };
static constexpr YellowDieAnimation ANIMATION_YellowDieLeftFront{ Builder::buildDyingAnimation<yellowRowLevel_2>() };
static constexpr YellowDieAnimation ANIMATION_YellowDieLeftRear{ Builder::buildDyingAnimation<yellowRowLevel_3>() };
static constexpr YellowDieAnimation ANIMATION_YellowDieRightRear{ Builder::buildDyingAnimation<yellowRowLevel_4>() };

static constexpr GreenDieAnimation ANIMATION_GreenDieRightFront{ Builder::buildDyingAnimation<greenRowLevel_1>() };
static constexpr GreenDieAnimation ANIMATION_GreenDieLeftFront{ Builder::buildDyingAnimation<greenRowLevel_2>() };
static constexpr GreenDieAnimation ANIMATION_GreenDieLeftRear{ Builder::buildDyingAnimation<greenRowLevel_3>() };
static constexpr GreenDieAnimation ANIMATION_GreenDieRightRear{ Builder::buildDyingAnimation<greenRowLevel_4>() };

static constexpr PurpleDieAnimation ANIMATION_PurpleDieRightFront{ Builder::buildDyingAnimation<purpleRowLevel_1>() };
static constexpr PurpleDieAnimation ANIMATION_PurpleDieLeftFront{ Builder::buildDyingAnimation<purpleRowLevel_2>() };
static constexpr PurpleDieAnimation ANIMATION_PurpleDieLeftRear{ Builder::buildDyingAnimation<purpleRowLevel_3>() };
static constexpr PurpleDieAnimation ANIMATION_PurpleDieRightRear{ Builder::buildDyingAnimation<purpleRowLevel_4>() };