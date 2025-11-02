#pragma once
#include <array>
#include "Animation/CharacterFrameConstants.h"
#include "Animation/AnimationFrameBuilder.h"


namespace FrameSpeeds = CharacterFrameConstants::FrameSpeeds;
namespace AnimationLengths = CharacterFrameConstants::AnimationLengths;


namespace
{
	using BlackPunchAnimation = std::array<DataStructures::FrameData, AnimationLengths::punchingFrameLength>;
	using YellowPunchAnimation = std::array<DataStructures::FrameData, AnimationLengths::punchingFrameLength>;
	using GreenPunchAnimation = std::array<DataStructures::FrameData, AnimationLengths::punchingFrameLength>;
	using PurplePunchAnimation = std::array<DataStructures::FrameData, AnimationLengths::punchingFrameLength>;
	using namespace PixelCoordinates::FrameLevels;
}


static constexpr BlackPunchAnimation ANIMATION_BlackPunchRightFront{ Builder::buildPunchingAnimation<blackRowLevel_1>() };
static constexpr BlackPunchAnimation ANIMATION_BlackPunchLeftFront{ Builder::buildPunchingAnimation<blackRowLevel_2>() };
static constexpr BlackPunchAnimation ANIMATION_BlackPunchLeftRear{ Builder::buildPunchingAnimation<blackRowLevel_3>() };
static constexpr BlackPunchAnimation ANIMATION_BlackPunchRightRear{ Builder::buildPunchingAnimation<blackRowLevel_4>() };

static constexpr YellowPunchAnimation ANIMATION_YellowPunchRightFront{ Builder::buildPunchingAnimation<yellowRowLevel_1>() };
static constexpr YellowPunchAnimation ANIMATION_YellowPunchLeftFront{ Builder::buildPunchingAnimation<yellowRowLevel_2>() };
static constexpr YellowPunchAnimation ANIMATION_YellowPunchLeftRear{ Builder::buildPunchingAnimation<yellowRowLevel_3>() };
static constexpr YellowPunchAnimation ANIMATION_YellowPunchRightRear{ Builder::buildPunchingAnimation<yellowRowLevel_4>() };

static constexpr GreenPunchAnimation ANIMATION_GreenPunchRightFront{ Builder::buildPunchingAnimation<greenRowLevel_1>() };
static constexpr GreenPunchAnimation ANIMATION_GreenPunchLeftFront{ Builder::buildPunchingAnimation<greenRowLevel_2>() };
static constexpr GreenPunchAnimation ANIMATION_GreenPunchLeftRear{ Builder::buildPunchingAnimation<greenRowLevel_3>() };
static constexpr GreenPunchAnimation ANIMATION_GreenPunchRightRear{ Builder::buildPunchingAnimation<greenRowLevel_4>() };

static constexpr PurplePunchAnimation ANIMATION_PurplePunchRightFront{ Builder::buildPunchingAnimation<purpleRowLevel_1>() };
static constexpr PurplePunchAnimation ANIMATION_PurplePunchLeftFront{ Builder::buildPunchingAnimation<purpleRowLevel_2>() };
static constexpr PurplePunchAnimation ANIMATION_PurplePunchLeftRear{ Builder::buildPunchingAnimation<purpleRowLevel_3>() };
static constexpr PurplePunchAnimation ANIMATION_PurplePunchRightRear{ Builder::buildPunchingAnimation<purpleRowLevel_4>() };