#pragma once
#include <array>
#include <vector>
#include "Animation/SpriteAnimation/AnimationFrameConstants.h"
#include "Animation/SpriteAnimation/AnimationFrameBuilder.h"



using namespace AnimationAliases;
using namespace PixelCoordinates::FrameLevels;

inline constexpr WalkingAnimation ANIMATION_BlackWalkRightFront{ Builder::buildWalkingAnimation<blackRowLevel_1>() };
inline constexpr WalkingAnimation ANIMATION_BlackWalkLeftFront{ Builder::buildWalkingAnimation<blackRowLevel_2>() };
inline constexpr WalkingAnimation ANIMATION_BlackWalkLeftRear{ Builder::buildWalkingAnimation<blackRowLevel_3>() };
inline constexpr WalkingAnimation ANIMATION_BlackWalkRightRear{ Builder::buildWalkingAnimation<blackRowLevel_4>() };

inline constexpr WalkingAnimation ANIMATION_YellowWalkRightFront{ Builder::buildWalkingAnimation<yellowRowLevel_1>() };
inline constexpr WalkingAnimation ANIMATION_YellowWalkLeftFront{ Builder::buildWalkingAnimation<yellowRowLevel_2>() };
inline constexpr WalkingAnimation ANIMATION_YellowWalkLeftRear{ Builder::buildWalkingAnimation<yellowRowLevel_3>() };
inline constexpr WalkingAnimation ANIMATION_YellowWalkRightRear{ Builder::buildWalkingAnimation<yellowRowLevel_4>() };

inline constexpr WalkingAnimation ANIMATION_GreenWalkRightFront{ Builder::buildWalkingAnimation<greenRowLevel_1>() };
inline constexpr WalkingAnimation ANIMATION_GreenWalkLeftFront{ Builder::buildWalkingAnimation<greenRowLevel_2>() };
inline constexpr WalkingAnimation ANIMATION_GreenWalkLeftRear{ Builder::buildWalkingAnimation<greenRowLevel_3>() };
inline constexpr WalkingAnimation ANIMATION_GreenWalkRightRear{ Builder::buildWalkingAnimation<greenRowLevel_4>() };

inline constexpr WalkingAnimation ANIMATION_PurpleWalkRightFront{ Builder::buildWalkingAnimation<purpleRowLevel_1>() };
inline constexpr WalkingAnimation ANIMATION_PurpleWalkLeftFront{ Builder::buildWalkingAnimation<purpleRowLevel_2>() };
inline constexpr WalkingAnimation ANIMATION_PurpleWalkLeftRear{ Builder::buildWalkingAnimation<purpleRowLevel_3>() };
inline constexpr WalkingAnimation ANIMATION_PurpleWalkRightRear{ Builder::buildWalkingAnimation<purpleRowLevel_4>() };


