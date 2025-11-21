#pragma once
#include <array>
#include "Animation/SpriteAnimation/AnimationFrameConstants.h"
#include "Animation/SpriteAnimation/AnimationFrameBuilder.h"


namespace FrameSpeeds = AnimationFrameConstants::FrameSpeeds;
namespace AnimationLengths = AnimationFrameConstants::AnimationLengths;


namespace
{
	using BlackPunchAnimation = std::array<DataStructures::FrameData, AnimationLengths::punchingFrameLength>;
	using YellowPunchAnimation = std::array<DataStructures::FrameData, AnimationLengths::punchingFrameLength>;
	using GreenPunchAnimation = std::array<DataStructures::FrameData, AnimationLengths::punchingFrameLength>;
	using PurplePunchAnimation = std::array<DataStructures::FrameData, AnimationLengths::punchingFrameLength>;
	using namespace PixelCoordinates::FrameLevels;
}


inline constexpr BlackPunchAnimation ANIMATION_BlackPunchRightFront{ Builder::buildPunchingAnimation<blackRowLevel_1>() };
inline constexpr BlackPunchAnimation ANIMATION_BlackPunchLeftFront{ Builder::buildPunchingAnimation<blackRowLevel_2>() };
inline constexpr BlackPunchAnimation ANIMATION_BlackPunchLeftRear{ Builder::buildPunchingAnimation<blackRowLevel_3>() };
inline constexpr BlackPunchAnimation ANIMATION_BlackPunchRightRear{ Builder::buildPunchingAnimation<blackRowLevel_4>() };

inline constexpr YellowPunchAnimation ANIMATION_YellowPunchRightFront{ Builder::buildPunchingAnimation<yellowRowLevel_1>() };
inline constexpr YellowPunchAnimation ANIMATION_YellowPunchLeftFront{ Builder::buildPunchingAnimation<yellowRowLevel_2>() };
inline constexpr YellowPunchAnimation ANIMATION_YellowPunchLeftRear{ Builder::buildPunchingAnimation<yellowRowLevel_3>() };
inline constexpr YellowPunchAnimation ANIMATION_YellowPunchRightRear{ Builder::buildPunchingAnimation<yellowRowLevel_4>() };

inline constexpr GreenPunchAnimation ANIMATION_GreenPunchRightFront{ Builder::buildPunchingAnimation<greenRowLevel_1>() };
inline constexpr GreenPunchAnimation ANIMATION_GreenPunchLeftFront{ Builder::buildPunchingAnimation<greenRowLevel_2>() };
inline constexpr GreenPunchAnimation ANIMATION_GreenPunchLeftRear{ Builder::buildPunchingAnimation<greenRowLevel_3>() };
inline constexpr GreenPunchAnimation ANIMATION_GreenPunchRightRear{ Builder::buildPunchingAnimation<greenRowLevel_4>() };

inline constexpr PurplePunchAnimation ANIMATION_PurplePunchRightFront{ Builder::buildPunchingAnimation<purpleRowLevel_1>() };
inline constexpr PurplePunchAnimation ANIMATION_PurplePunchLeftFront{ Builder::buildPunchingAnimation<purpleRowLevel_2>() };
inline constexpr PurplePunchAnimation ANIMATION_PurplePunchLeftRear{ Builder::buildPunchingAnimation<purpleRowLevel_3>() };
inline constexpr PurplePunchAnimation ANIMATION_PurplePunchRightRear{ Builder::buildPunchingAnimation<purpleRowLevel_4>() };