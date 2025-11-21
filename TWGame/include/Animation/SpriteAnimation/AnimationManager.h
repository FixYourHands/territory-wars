#pragma once
#include "Animation/SpriteAnimation/AnimationFrameConstants.h"
#include "Animation/SpriteAnimation/AnimationFrameBuilder.h"
#include "Animation/SpriteSheet/WalkingAnimationFrames.h"
#include "Animation/SpriteSheet/SittingAnimationFrames.h"
#include "Animation/SpriteSheet/PunchingAnimationFrames.h"
#include "Animation/SpriteSheet/IdlingAnimationFrames.h"
#include "Animation/SpriteSheet/DyingAnimationFrames.h"
#include "Animation/SpriteSheet/GettingHitAnimationFrames.h"
#include <vector>


using namespace AnimationAliases;
using namespace AnimationFrameConstants::AnimationAttributes;

inline const std::vector<const WalkingAnimation*> allWalkingAnimations
{
	// Black
	&ANIMATION_BlackWalkRightFront,
	&ANIMATION_BlackWalkLeftFront,
	&ANIMATION_BlackWalkLeftRear,
	&ANIMATION_BlackWalkRightRear,
	// Green
	&ANIMATION_GreenWalkRightFront,
	&ANIMATION_GreenWalkLeftFront,
	&ANIMATION_GreenWalkLeftRear,
	&ANIMATION_GreenWalkRightRear,
	// Yellow
	&ANIMATION_YellowWalkRightFront,
	&ANIMATION_YellowWalkLeftFront,
	&ANIMATION_YellowWalkLeftRear,
	&ANIMATION_YellowWalkRightRear,
	// Purple
	&ANIMATION_PurpleWalkRightFront,
	&ANIMATION_PurpleWalkLeftFront,
	&ANIMATION_PurpleWalkLeftRear,
	&ANIMATION_PurpleWalkRightRear
};

inline const std::vector<const IdlingAnimation*> allIdleAnimations
{
	// Black
	&ANIMATION_BlackIdleRightFront,
	&ANIMATION_BlackIdleLeftFront,
	&ANIMATION_BlackIdleLeftRear,
	&ANIMATION_BlackIdleRightRear,
	// Green
	&ANIMATION_GreenIdleRightFront,
	&ANIMATION_GreenIdleLeftFront,
	&ANIMATION_GreenIdleLeftRear,
	&ANIMATION_GreenIdleRightRear,
	// Yellow
	&ANIMATION_YellowIdleRightFront,
	&ANIMATION_YellowIdleLeftFront,
	&ANIMATION_YellowIdleLeftRear,
	&ANIMATION_YellowIdleRightRear,
	// Purple
	&ANIMATION_PurpleIdleRightFront,
	&ANIMATION_PurpleIdleLeftFront,
	&ANIMATION_PurpleIdleLeftRear,
	&ANIMATION_PurpleIdleRightRear
};

inline const std::vector<const SittingAnimation*> allSittingAnimations
{
	// Black
	&ANIMATION_BlackSitRightFront,
	&ANIMATION_BlackSitLeftFront,
	&ANIMATION_BlackSitLeftRear,
	&ANIMATION_BlackSitRightRear,
	// Green
	&ANIMATION_GreenSitRightFront,
	&ANIMATION_GreenSitLeftFront,
	&ANIMATION_GreenSitLeftRear,
	&ANIMATION_GreenSitRightRear,
	// Yellow
	&ANIMATION_YellowSitRightFront,
	&ANIMATION_YellowSitLeftFront,
	&ANIMATION_YellowSitLeftRear,
	&ANIMATION_YellowSitRightRear,
	// Purple
	&ANIMATION_PurpleSitRightFront,
	&ANIMATION_PurpleSitLeftFront,
	&ANIMATION_PurpleSitLeftRear,
	&ANIMATION_PurpleSitRightRear
};

inline const std::vector<const PunchingAnimation*> allPunchingAnimations
{
	// Black
	&ANIMATION_BlackPunchRightFront,
	&ANIMATION_BlackPunchLeftFront,
	&ANIMATION_BlackPunchLeftRear,
	&ANIMATION_BlackPunchRightRear,
	// Green
	&ANIMATION_GreenPunchRightFront,
	&ANIMATION_GreenPunchLeftFront,
	&ANIMATION_GreenPunchLeftRear,
	&ANIMATION_GreenPunchRightRear,
	// Yellow
	&ANIMATION_YellowPunchRightFront,
	&ANIMATION_YellowPunchLeftFront,
	&ANIMATION_YellowPunchLeftRear,
	&ANIMATION_YellowPunchRightRear,
	// Purple
	&ANIMATION_PurplePunchRightFront,
	&ANIMATION_PurplePunchLeftFront,
	&ANIMATION_PurplePunchLeftRear,
	&ANIMATION_PurplePunchRightRear
};

inline const std::vector<const GettingHitAnimation*> allGettingHitAnimations
{
	// Black
	&ANIMATION_BlackGetHitRightFront,
	&ANIMATION_BlackGetHitLeftFront,
	&ANIMATION_BlackGetHitLeftRear,
	&ANIMATION_BlackGetHitRightRear,
	// Green
	&ANIMATION_GreenGetHitRightFront,
	&ANIMATION_GreenGetHitLeftFront,
	&ANIMATION_GreenGetHitLeftRear,
	&ANIMATION_GreenGetHitRightRear,
	// Yellow
	&ANIMATION_YellowGetHitRightFront,
	&ANIMATION_YellowGetHitLeftFront,
	&ANIMATION_YellowGetHitLeftRear,
	&ANIMATION_YellowGetHitRightRear,
	// Purple
	&ANIMATION_PurpleGetHitRightFront,
	&ANIMATION_PurpleGetHitLeftFront,
	&ANIMATION_PurpleGetHitLeftRear,
	&ANIMATION_PurpleGetHitRightRear
};

inline const std::vector<const DyingAnimation*> allDyingAnimations
{
	// Black
	&ANIMATION_BlackDieRightFront,
	&ANIMATION_BlackDieLeftFront,
	&ANIMATION_BlackDieLeftRear,
	&ANIMATION_BlackDieRightRear,
	// Green
	&ANIMATION_GreenDieRightFront,
	&ANIMATION_GreenDieLeftFront,
	&ANIMATION_GreenDieLeftRear,
	&ANIMATION_GreenDieRightRear,
	// Yellow
	&ANIMATION_YellowDieRightFront,
	&ANIMATION_YellowDieLeftFront,
	&ANIMATION_YellowDieLeftRear,
	&ANIMATION_YellowDieRightRear,
	// Purple
	&ANIMATION_PurpleDieRightFront,
	&ANIMATION_PurpleDieLeftFront,
	&ANIMATION_PurpleDieLeftRear,
	&ANIMATION_PurpleDieRightRear
};

template<size_t N>
class AnimationManager
{

public:
	static constexpr const  std::array<DataStructures::FrameData, N>* getWalkAnimationPointer(const SoldierColor color, const SoldierDirection direction);
	static constexpr const  std::array<DataStructures::FrameData, N>* getIdleAnimationPointer(const SoldierColor color, const SoldierDirection direction);
	static constexpr const  std::array<DataStructures::FrameData, N>* getSitAnimationPointer(const SoldierColor color, const SoldierDirection direction);
	static constexpr const  std::array<DataStructures::FrameData, N>* getPunchAnimationPointer(const SoldierColor color, const SoldierDirection direction);
	static constexpr const  std::array<DataStructures::FrameData, N>* getGetHitAnimationPointer(const SoldierColor color, const SoldierDirection direction);
	static constexpr const  std::array<DataStructures::FrameData, N>* getDieAnimationPointer(const SoldierColor color, const SoldierDirection direction);
};

#include "AnimationManager.tpp"