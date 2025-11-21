#pragma once
#include <array>
#include "Animation/SpriteAnimation/AnimationFrameConstants.h"
#include "Animation/SpriteAnimation/AnimationFrameBuilder.h"

using namespace AnimationAliases;
using namespace PixelCoordinates::FrameLevels;

inline constexpr PunchingAnimation ANIMATION_BlackPunchRightFront{ Builder::buildPunchingAnimation<blackRowLevel_1>() };
inline constexpr PunchingAnimation ANIMATION_BlackPunchLeftFront{ Builder::buildPunchingAnimation<blackRowLevel_2>() };
inline constexpr PunchingAnimation ANIMATION_BlackPunchLeftRear{ Builder::buildPunchingAnimation<blackRowLevel_3>() };
inline constexpr PunchingAnimation ANIMATION_BlackPunchRightRear{ Builder::buildPunchingAnimation<blackRowLevel_4>() };

inline constexpr PunchingAnimation ANIMATION_YellowPunchRightFront{ Builder::buildPunchingAnimation<yellowRowLevel_1>() };
inline constexpr PunchingAnimation ANIMATION_YellowPunchLeftFront{ Builder::buildPunchingAnimation<yellowRowLevel_2>() };
inline constexpr PunchingAnimation ANIMATION_YellowPunchLeftRear{ Builder::buildPunchingAnimation<yellowRowLevel_3>() };
inline constexpr PunchingAnimation ANIMATION_YellowPunchRightRear{ Builder::buildPunchingAnimation<yellowRowLevel_4>() };

inline constexpr PunchingAnimation ANIMATION_GreenPunchRightFront{ Builder::buildPunchingAnimation<greenRowLevel_1>() };
inline constexpr PunchingAnimation ANIMATION_GreenPunchLeftFront{ Builder::buildPunchingAnimation<greenRowLevel_2>() };
inline constexpr PunchingAnimation ANIMATION_GreenPunchLeftRear{ Builder::buildPunchingAnimation<greenRowLevel_3>() };
inline constexpr PunchingAnimation ANIMATION_GreenPunchRightRear{ Builder::buildPunchingAnimation<greenRowLevel_4>() };

inline constexpr PunchingAnimation ANIMATION_PurplePunchRightFront{ Builder::buildPunchingAnimation<purpleRowLevel_1>() };
inline constexpr PunchingAnimation ANIMATION_PurplePunchLeftFront{ Builder::buildPunchingAnimation<purpleRowLevel_2>() };
inline constexpr PunchingAnimation ANIMATION_PurplePunchLeftRear{ Builder::buildPunchingAnimation<purpleRowLevel_3>() };
inline constexpr PunchingAnimation ANIMATION_PurplePunchRightRear{ Builder::buildPunchingAnimation<purpleRowLevel_4>() };