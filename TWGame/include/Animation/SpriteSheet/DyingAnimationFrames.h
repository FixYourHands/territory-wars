#pragma once
#include <array>
#include "Animation/SpriteAnimation/AnimationFrameConstants.h"
#include "Animation/SpriteAnimation/AnimationFrameBuilder.h"

using namespace AnimationAliases;
using namespace PixelCoordinates::FrameLevels;

inline constexpr DyingAnimation ANIMATION_BlackDieRightFront{ Builder::buildDyingAnimation<blackRowLevel_1>() };
inline constexpr DyingAnimation ANIMATION_BlackDieLeftFront{ Builder::buildDyingAnimation<blackRowLevel_2>() };
inline constexpr DyingAnimation ANIMATION_BlackDieLeftRear{ Builder::buildDyingAnimation<blackRowLevel_3>() };
inline constexpr DyingAnimation ANIMATION_BlackDieRightRear{ Builder::buildDyingAnimation<blackRowLevel_4>() };

inline constexpr DyingAnimation ANIMATION_YellowDieRightFront{ Builder::buildDyingAnimation<yellowRowLevel_1>() };
inline constexpr DyingAnimation ANIMATION_YellowDieLeftFront{ Builder::buildDyingAnimation<yellowRowLevel_2>() };
inline constexpr DyingAnimation ANIMATION_YellowDieLeftRear{ Builder::buildDyingAnimation<yellowRowLevel_3>() };
inline constexpr DyingAnimation ANIMATION_YellowDieRightRear{ Builder::buildDyingAnimation<yellowRowLevel_4>() };

inline constexpr DyingAnimation ANIMATION_GreenDieRightFront{ Builder::buildDyingAnimation<greenRowLevel_1>() };
inline constexpr DyingAnimation ANIMATION_GreenDieLeftFront{ Builder::buildDyingAnimation<greenRowLevel_2>() };
inline constexpr DyingAnimation ANIMATION_GreenDieLeftRear{ Builder::buildDyingAnimation<greenRowLevel_3>() };
inline constexpr DyingAnimation ANIMATION_GreenDieRightRear{ Builder::buildDyingAnimation<greenRowLevel_4>() };

inline constexpr DyingAnimation ANIMATION_PurpleDieRightFront{ Builder::buildDyingAnimation<purpleRowLevel_1>() };
inline constexpr DyingAnimation ANIMATION_PurpleDieLeftFront{ Builder::buildDyingAnimation<purpleRowLevel_2>() };
inline constexpr DyingAnimation ANIMATION_PurpleDieLeftRear{ Builder::buildDyingAnimation<purpleRowLevel_3>() };
inline constexpr DyingAnimation ANIMATION_PurpleDieRightRear{ Builder::buildDyingAnimation<purpleRowLevel_4>() };