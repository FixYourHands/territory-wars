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


inline constexpr BlackDieAnimation ANIMATION_BlackDieRightFront{ Builder::buildDyingAnimation<blackRowLevel_1>() };
inline constexpr BlackDieAnimation ANIMATION_BlackDieLeftFront{ Builder::buildDyingAnimation<blackRowLevel_2>() };
inline constexpr BlackDieAnimation ANIMATION_BlackDieLeftRear{ Builder::buildDyingAnimation<blackRowLevel_3>() };
inline constexpr BlackDieAnimation ANIMATION_BlackDieRightRear{ Builder::buildDyingAnimation<blackRowLevel_4>() };

inline constexpr YellowDieAnimation ANIMATION_YellowDieRightFront{ Builder::buildDyingAnimation<yellowRowLevel_1>() };
inline constexpr YellowDieAnimation ANIMATION_YellowDieLeftFront{ Builder::buildDyingAnimation<yellowRowLevel_2>() };
inline constexpr YellowDieAnimation ANIMATION_YellowDieLeftRear{ Builder::buildDyingAnimation<yellowRowLevel_3>() };
inline constexpr YellowDieAnimation ANIMATION_YellowDieRightRear{ Builder::buildDyingAnimation<yellowRowLevel_4>() };

inline constexpr GreenDieAnimation ANIMATION_GreenDieRightFront{ Builder::buildDyingAnimation<greenRowLevel_1>() };
inline constexpr GreenDieAnimation ANIMATION_GreenDieLeftFront{ Builder::buildDyingAnimation<greenRowLevel_2>() };
inline constexpr GreenDieAnimation ANIMATION_GreenDieLeftRear{ Builder::buildDyingAnimation<greenRowLevel_3>() };
inline constexpr GreenDieAnimation ANIMATION_GreenDieRightRear{ Builder::buildDyingAnimation<greenRowLevel_4>() };

inline constexpr PurpleDieAnimation ANIMATION_PurpleDieRightFront{ Builder::buildDyingAnimation<purpleRowLevel_1>() };
inline constexpr PurpleDieAnimation ANIMATION_PurpleDieLeftFront{ Builder::buildDyingAnimation<purpleRowLevel_2>() };
inline constexpr PurpleDieAnimation ANIMATION_PurpleDieLeftRear{ Builder::buildDyingAnimation<purpleRowLevel_3>() };
inline constexpr PurpleDieAnimation ANIMATION_PurpleDieRightRear{ Builder::buildDyingAnimation<purpleRowLevel_4>() };