#pragma once
#include <array>
#include "Animation/SpriteAnimation/AnimationFrameConstants.h"
#include "Animation/SpriteAnimation/AnimationFrameBuilder.h"

using namespace AnimationAliases;
using namespace PixelCoordinates::FrameLevels;

inline constexpr IdlingAnimation ANIMATION_BlackIdleRightFront{ Builder::buildIdlingAnimation<blackRowLevel_1>() };
inline constexpr IdlingAnimation ANIMATION_BlackIdleLeftFront{ Builder::buildIdlingAnimation<blackRowLevel_2>() };
inline constexpr IdlingAnimation ANIMATION_BlackIdleLeftRear{ Builder::buildIdlingAnimation<blackRowLevel_3>() };
inline constexpr IdlingAnimation ANIMATION_BlackIdleRightRear{ Builder::buildIdlingAnimation<blackRowLevel_4>() };

inline constexpr IdlingAnimation ANIMATION_YellowIdleRightFront{ Builder::buildIdlingAnimation<yellowRowLevel_1>() };
inline constexpr IdlingAnimation ANIMATION_YellowIdleLeftFront{ Builder::buildIdlingAnimation<yellowRowLevel_2>() };
inline constexpr IdlingAnimation ANIMATION_YellowIdleLeftRear{ Builder::buildIdlingAnimation<yellowRowLevel_3>() };
inline constexpr IdlingAnimation ANIMATION_YellowIdleRightRear{ Builder::buildIdlingAnimation<yellowRowLevel_4>() };

inline constexpr IdlingAnimation ANIMATION_GreenIdleRightFront{ Builder::buildIdlingAnimation<greenRowLevel_1>() };
inline constexpr IdlingAnimation ANIMATION_GreenIdleLeftFront{ Builder::buildIdlingAnimation<greenRowLevel_2>() };
inline constexpr IdlingAnimation ANIMATION_GreenIdleLeftRear{ Builder::buildIdlingAnimation<greenRowLevel_3>() };
inline constexpr IdlingAnimation ANIMATION_GreenIdleRightRear{ Builder::buildIdlingAnimation<greenRowLevel_4>() };

inline constexpr IdlingAnimation ANIMATION_PurpleIdleRightFront{ Builder::buildIdlingAnimation<purpleRowLevel_1>() };
inline constexpr IdlingAnimation ANIMATION_PurpleIdleLeftFront{ Builder::buildIdlingAnimation<purpleRowLevel_2>() };
inline constexpr IdlingAnimation ANIMATION_PurpleIdleLeftRear{ Builder::buildIdlingAnimation<purpleRowLevel_3>() };
inline constexpr IdlingAnimation ANIMATION_PurpleIdleRightRear{ Builder::buildIdlingAnimation<purpleRowLevel_4>() };