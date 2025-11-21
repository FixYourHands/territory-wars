#pragma once
#include <array>
#include "Animation/SpriteAnimation/AnimationFrameConstants.h"
#include "Animation/SpriteAnimation/AnimationFrameBuilder.h"


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


inline constexpr BlackGetHitAnimation ANIMATION_BlackGetHitRightFront{ Builder::buildGettingHitAnimation<blackRowLevel_1>() };
inline constexpr BlackGetHitAnimation ANIMATION_BlackGetHitLeftFront{ Builder::buildGettingHitAnimation<blackRowLevel_2>() };
inline constexpr BlackGetHitAnimation ANIMATION_BlackGetHitLeftRear{ Builder::buildGettingHitAnimation<blackRowLevel_3>() };
inline constexpr BlackGetHitAnimation ANIMATION_BlackGetHitRightRear{ Builder::buildGettingHitAnimation<blackRowLevel_4>() };

inline constexpr YellowGetHitAnimation ANIMATION_YellowGetHitRightFront{ Builder::buildGettingHitAnimation<yellowRowLevel_1>() };
inline constexpr YellowGetHitAnimation ANIMATION_YellowGetHitLeftFront{ Builder::buildGettingHitAnimation<yellowRowLevel_2>() };
inline constexpr YellowGetHitAnimation ANIMATION_YellowGetHitLeftRear{ Builder::buildGettingHitAnimation<yellowRowLevel_3>() };
inline constexpr YellowGetHitAnimation ANIMATION_YellowGetHitRightRear{ Builder::buildGettingHitAnimation<yellowRowLevel_4>() };

inline constexpr GreenGetHitAnimation ANIMATION_GreenGetHitRightFront{ Builder::buildGettingHitAnimation<greenRowLevel_1>() };
inline constexpr GreenGetHitAnimation ANIMATION_GreenGetHitLeftFront{ Builder::buildGettingHitAnimation<greenRowLevel_2>() };
inline constexpr GreenGetHitAnimation ANIMATION_GreenGetHitLeftRear{ Builder::buildGettingHitAnimation<greenRowLevel_3>() };
inline constexpr GreenGetHitAnimation ANIMATION_GreenGetHitRightRear{ Builder::buildGettingHitAnimation<greenRowLevel_4>() };

inline constexpr PurpleGetHitAnimation ANIMATION_PurpleGetHitRightFront{ Builder::buildGettingHitAnimation<purpleRowLevel_1>() };
inline constexpr PurpleGetHitAnimation ANIMATION_PurpleGetHitLeftFront{ Builder::buildGettingHitAnimation<purpleRowLevel_2>() };
inline constexpr PurpleGetHitAnimation ANIMATION_PurpleGetHitLeftRear{ Builder::buildGettingHitAnimation<purpleRowLevel_3>() };
inline constexpr PurpleGetHitAnimation ANIMATION_PurpleGetHitRightRear{ Builder::buildGettingHitAnimation<purpleRowLevel_4>() };