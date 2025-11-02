#pragma once
#include <array>
#include "Animation/CharacterFrameConstants.h"
#include "Animation/AnimationFrameBuilder.h"


namespace FrameSpeeds = CharacterFrameConstants::FrameSpeeds;
namespace AnimationLengths = CharacterFrameConstants::AnimationLengths;

namespace
{
	using BlackSitAnimation = std::array<DataStructures::FrameData, AnimationLengths::sittingFrameLength>;
	using YellowSitAnimation = std::array<DataStructures::FrameData, AnimationLengths::sittingFrameLength>;
	using GreenSitAnimation = std::array<DataStructures::FrameData, AnimationLengths::sittingFrameLength>;
	using PurpleSitAnimation = std::array<DataStructures::FrameData, AnimationLengths::sittingFrameLength>;
	using namespace PixelCoordinates::FrameLevels;
}


static constexpr BlackSitAnimation ANIMATION_BlackSitRightFront{ Builder::buildSittingAnimation<blackRowLevel_1>() };
static constexpr BlackSitAnimation ANIMATION_BlackSitLeftFront{ Builder::buildSittingAnimation<blackRowLevel_2>() };
static constexpr BlackSitAnimation ANIMATION_BlackSitLeftRear{ Builder::buildSittingAnimation<blackRowLevel_3>() };
static constexpr BlackSitAnimation ANIMATION_BlackSitRightRear{ Builder::buildSittingAnimation<blackRowLevel_4>() };

static constexpr YellowSitAnimation ANIMATION_YellowSitRightFront{ Builder::buildSittingAnimation<yellowRowLevel_1>() };
static constexpr YellowSitAnimation ANIMATION_YellowSitLeftFront{ Builder::buildSittingAnimation<yellowRowLevel_2>() };
static constexpr YellowSitAnimation ANIMATION_YellowSitLeftRear{ Builder::buildSittingAnimation<yellowRowLevel_3>() };
static constexpr YellowSitAnimation ANIMATION_YellowSitRightRear{ Builder::buildSittingAnimation<yellowRowLevel_4>() };

static constexpr GreenSitAnimation ANIMATION_GreenSitRightFront{ Builder::buildSittingAnimation<greenRowLevel_1>() };
static constexpr GreenSitAnimation ANIMATION_GreenSitLeftFront{ Builder::buildSittingAnimation<greenRowLevel_2>() };
static constexpr GreenSitAnimation ANIMATION_GreenSitLeftRear{ Builder::buildSittingAnimation<greenRowLevel_3>() };
static constexpr GreenSitAnimation ANIMATION_GreenSitRightRear{ Builder::buildSittingAnimation<greenRowLevel_4>() };

static constexpr PurpleSitAnimation ANIMATION_PurpleSitRightFront{ Builder::buildSittingAnimation<purpleRowLevel_1>() };
static constexpr PurpleSitAnimation ANIMATION_PurpleSitLeftFront{ Builder::buildSittingAnimation<purpleRowLevel_2>() };
static constexpr PurpleSitAnimation ANIMATION_PurpleSitLeftRear{ Builder::buildSittingAnimation<purpleRowLevel_3>() };
static constexpr PurpleSitAnimation ANIMATION_PurpleSitRightRear{ Builder::buildSittingAnimation<purpleRowLevel_4>() };