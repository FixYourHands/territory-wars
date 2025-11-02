#pragma once
#include <array>
#include "Animation/AnimationFrameConstants.h"
#include "Animation/AnimationFrameBuilder.h"


namespace FrameSpeeds = AnimationFrameConstants::FrameSpeeds;
namespace AnimationLengths = AnimationFrameConstants::AnimationLengths;


namespace
{
	using BlackGetHitAnimation = std::array<DataStructures::FrameData, AnimationLengths::gettingHitFrameLength>;
	using YellowGetHitAnimation = std::array<DataStructures::FrameData, AnimationLengths::gettingHitFrameLength>;
	using GreenGetHitAnimation = std::array<DataStructures::FrameData, AnimationLengths::gettingHitFrameLength>;
	using PurpleGetHitAnimation = std::array<DataStructures::FrameData, AnimationLengths::gettingHitFrameLength>;
	using namespace PixelCoordinates::FrameLevels;
}


static constexpr BlackGetHitAnimation ANIMATION_BlackGetHitRightFront{ Builder::buildGettingHitAnimation<blackRowLevel_1>() };
static constexpr BlackGetHitAnimation ANIMATION_BlackGetHitLeftFront{ Builder::buildGettingHitAnimation<blackRowLevel_2>() };
static constexpr BlackGetHitAnimation ANIMATION_BlackGetHitLeftRear{ Builder::buildGettingHitAnimation<blackRowLevel_3>() };
static constexpr BlackGetHitAnimation ANIMATION_BlackGetHitRightRear{ Builder::buildGettingHitAnimation<blackRowLevel_4>() };

static constexpr YellowGetHitAnimation ANIMATION_YellowGetHitRightFront{ Builder::buildGettingHitAnimation<yellowRowLevel_1>() };
static constexpr YellowGetHitAnimation ANIMATION_YellowGetHitLeftFront{ Builder::buildGettingHitAnimation<yellowRowLevel_2>() };
static constexpr YellowGetHitAnimation ANIMATION_YellowGetHitLeftRear{ Builder::buildGettingHitAnimation<yellowRowLevel_3>() };
static constexpr YellowGetHitAnimation ANIMATION_YellowGetHitRightRear{ Builder::buildGettingHitAnimation<yellowRowLevel_4>() };

static constexpr GreenGetHitAnimation ANIMATION_GreenGetHitRightFront{ Builder::buildGettingHitAnimation<greenRowLevel_1>() };
static constexpr GreenGetHitAnimation ANIMATION_GreenGetHitLeftFront{ Builder::buildGettingHitAnimation<greenRowLevel_2>() };
static constexpr GreenGetHitAnimation ANIMATION_GreenGetHitLeftRear{ Builder::buildGettingHitAnimation<greenRowLevel_3>() };
static constexpr GreenGetHitAnimation ANIMATION_GreenGetHitRightRear{ Builder::buildGettingHitAnimation<greenRowLevel_4>() };

static constexpr PurpleGetHitAnimation ANIMATION_PurpleGetHitRightFront{ Builder::buildGettingHitAnimation<purpleRowLevel_1>() };
static constexpr PurpleGetHitAnimation ANIMATION_PurpleGetHitLeftFront{ Builder::buildGettingHitAnimation<purpleRowLevel_2>() };
static constexpr PurpleGetHitAnimation ANIMATION_PurpleGetHitLeftRear{ Builder::buildGettingHitAnimation<purpleRowLevel_3>() };
static constexpr PurpleGetHitAnimation ANIMATION_PurpleGetHitRightRear{ Builder::buildGettingHitAnimation<purpleRowLevel_4>() };