#pragma once
#include <array>
#include "Animation/SpriteAnimation/AnimationFrameConstants.h"
#include "Animation/SpriteAnimation/AnimationFrameBuilder.h"

using namespace AnimationAliases;
using namespace PixelCoordinates::FrameLevels;

inline constexpr SittingAnimation ANIMATION_BlackSitRightFront{ Builder::buildSittingAnimation<blackRowLevel_1>() };
inline constexpr SittingAnimation ANIMATION_BlackSitLeftFront{ Builder::buildSittingAnimation<blackRowLevel_2>() };
inline constexpr SittingAnimation ANIMATION_BlackSitLeftRear{ Builder::buildSittingAnimation<blackRowLevel_3>() };
inline constexpr SittingAnimation ANIMATION_BlackSitRightRear{ Builder::buildSittingAnimation<blackRowLevel_4>() };

inline constexpr SittingAnimation ANIMATION_YellowSitRightFront{ Builder::buildSittingAnimation<yellowRowLevel_1>() };
inline constexpr SittingAnimation ANIMATION_YellowSitLeftFront{ Builder::buildSittingAnimation<yellowRowLevel_2>() };
inline constexpr SittingAnimation ANIMATION_YellowSitLeftRear{ Builder::buildSittingAnimation<yellowRowLevel_3>() };
inline constexpr SittingAnimation ANIMATION_YellowSitRightRear{ Builder::buildSittingAnimation<yellowRowLevel_4>() };

inline constexpr SittingAnimation ANIMATION_GreenSitRightFront{ Builder::buildSittingAnimation<greenRowLevel_1>() };
inline constexpr SittingAnimation ANIMATION_GreenSitLeftFront{ Builder::buildSittingAnimation<greenRowLevel_2>() };
inline constexpr SittingAnimation ANIMATION_GreenSitLeftRear{ Builder::buildSittingAnimation<greenRowLevel_3>() };
inline constexpr SittingAnimation ANIMATION_GreenSitRightRear{ Builder::buildSittingAnimation<greenRowLevel_4>() };

inline constexpr SittingAnimation ANIMATION_PurpleSitRightFront{ Builder::buildSittingAnimation<purpleRowLevel_1>() };
inline constexpr SittingAnimation ANIMATION_PurpleSitLeftFront{ Builder::buildSittingAnimation<purpleRowLevel_2>() };
inline constexpr SittingAnimation ANIMATION_PurpleSitLeftRear{ Builder::buildSittingAnimation<purpleRowLevel_3>() };
inline constexpr SittingAnimation ANIMATION_PurpleSitRightRear{ Builder::buildSittingAnimation<purpleRowLevel_4>() };