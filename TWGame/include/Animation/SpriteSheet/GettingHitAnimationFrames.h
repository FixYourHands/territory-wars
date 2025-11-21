#pragma once
#include <array>
#include "Animation/SpriteAnimation/AnimationFrameConstants.h"
#include "Animation/SpriteAnimation/AnimationFrameBuilder.h"

using namespace AnimationAliases;
using namespace PixelCoordinates::FrameLevels;

inline constexpr GettingHitAnimation ANIMATION_BlackGetHitRightFront{ Builder::buildGettingHitAnimation<blackRowLevel_1>() };
inline constexpr GettingHitAnimation ANIMATION_BlackGetHitLeftFront{ Builder::buildGettingHitAnimation<blackRowLevel_2>() };
inline constexpr GettingHitAnimation ANIMATION_BlackGetHitLeftRear{ Builder::buildGettingHitAnimation<blackRowLevel_3>() };
inline constexpr GettingHitAnimation ANIMATION_BlackGetHitRightRear{ Builder::buildGettingHitAnimation<blackRowLevel_4>() };

inline constexpr GettingHitAnimation ANIMATION_YellowGetHitRightFront{ Builder::buildGettingHitAnimation<yellowRowLevel_1>() };
inline constexpr GettingHitAnimation ANIMATION_YellowGetHitLeftFront{ Builder::buildGettingHitAnimation<yellowRowLevel_2>() };
inline constexpr GettingHitAnimation ANIMATION_YellowGetHitLeftRear{ Builder::buildGettingHitAnimation<yellowRowLevel_3>() };
inline constexpr GettingHitAnimation ANIMATION_YellowGetHitRightRear{ Builder::buildGettingHitAnimation<yellowRowLevel_4>() };

inline constexpr GettingHitAnimation ANIMATION_GreenGetHitRightFront{ Builder::buildGettingHitAnimation<greenRowLevel_1>() };
inline constexpr GettingHitAnimation ANIMATION_GreenGetHitLeftFront{ Builder::buildGettingHitAnimation<greenRowLevel_2>() };
inline constexpr GettingHitAnimation ANIMATION_GreenGetHitLeftRear{ Builder::buildGettingHitAnimation<greenRowLevel_3>() };
inline constexpr GettingHitAnimation ANIMATION_GreenGetHitRightRear{ Builder::buildGettingHitAnimation<greenRowLevel_4>() };

inline constexpr GettingHitAnimation ANIMATION_PurpleGetHitRightFront{ Builder::buildGettingHitAnimation<purpleRowLevel_1>() };
inline constexpr GettingHitAnimation ANIMATION_PurpleGetHitLeftFront{ Builder::buildGettingHitAnimation<purpleRowLevel_2>() };
inline constexpr GettingHitAnimation ANIMATION_PurpleGetHitLeftRear{ Builder::buildGettingHitAnimation<purpleRowLevel_3>() };
inline constexpr GettingHitAnimation ANIMATION_PurpleGetHitRightRear{ Builder::buildGettingHitAnimation<purpleRowLevel_4>() };