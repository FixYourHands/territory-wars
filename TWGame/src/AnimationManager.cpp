#include "Animation/AnimationManager.h"
#include "Animation/SpriteSheet/WalkingAnimationFrames.h"
#include "Animation/SpriteSheet/SittingAnimationFrames.h"
#include "Animation/SpriteSheet/PunchingAnimationFrames.h"
#include "Animation/SpriteSheet/IdlingAnimationFrames.h"
#include "Animation/SpriteSheet/DyingAnimationFrames.h"
#include "Animation/SpriteSheet/GettingHitAnimationFrames.h"


namespace
{
	using BlackWalkAnimation = std::array<DataStructures::FrameData, AnimationLengths::walkingFrameLength>;
	using YellowWalkAnimation = std::array<DataStructures::FrameData, AnimationLengths::walkingFrameLength>;
	using GreenWalkAnimation = std::array<DataStructures::FrameData, AnimationLengths::walkingFrameLength>;
	using PurpleWalkAnimation = std::array<DataStructures::FrameData, AnimationLengths::walkingFrameLength>;
	using WalkAnimation = std::array<DataStructures::FrameData, AnimationLengths::walkingFrameLength>;
	using SitAnimation = std::array<DataStructures::FrameData, AnimationLengths::sittingFrameLength>;
	using IdleAnimation = std::array<DataStructures::FrameData, AnimationLengths::idleFrameLength>;
	using PunchAnimation = std::array<DataStructures::FrameData, AnimationLengths::punchingFrameLength>;
	using DyingAnimation = std::array<DataStructures::FrameData, AnimationLengths::dyingFrameLength>;
	using GetHitAnimation = std::array<DataStructures::FrameData, AnimationLengths::gettingHitFrameLength>;
	using namespace PixelCoordinates::FrameLevels;
}

struct AnimationPackage
{
	WalkAnimation* walkAnimation;
	SitAnimation* sitAnimation;
	IdleAnimation* idleAnimation;
	PunchAnimation* punchAnimation;
	DyingAnimation* dyingAnimation;
	GetHitAnimation* getHitAnimation;
};



template<size_t N>
static constexpr std::array<DataStructures::FrameData, N>* getWalkAnimationPointer(const SoldierState color, const SoldierDirection direction)
{
	switch (color)
	{
	case SoldierColor::Black:
		switch (direction)
		{
		case SoldierDirection::RightFront: return &ANIMATION_BlackWalkRightFront;
		case SoldierDirection::LeftFront: return &ANIMATION_BlackWalkLeftFront;
		case SoldierDirection::LeftRear: return &ANIMATION_BlackWalkLeftRear;
		case SoldierDirection::RightRear: return &ANIMATION_BlackWalkRightRear;
		}
		break;

	case SoldierColor::Green:
		switch (direction)
		{
		case SoldierDirection::RightFront: return &ANIMATION_GreenWalkRightFront;
		case SoldierDirection::LeftFront: return &ANIMATION_GreenWalkLeftFront;
		case SoldierDirection::LeftRear: return &ANIMATION_GreenWalkLeftRear;
		case SoldierDirection::RightRear: return &ANIMATION_GreenWalkRightRear;
		}
		break;

	case SoldierColor::Yellow:
		switch (direction)
		{
		case SoldierDirection::RightFront: return &ANIMATION_YellowWalkRightFront;
		case SoldierDirection::LeftFront: return &ANIMATION_YellowWalkLeftFront;
		case SoldierDirection::LeftRear: return &ANIMATION_YellowWalkLeftRear;
		case SoldierDirection::RightRear: return &ANIMATION_YellowWalkRightRear;
		}
		break;

	case SoldierColor::Purple:
		switch (direction)
		{
		case SoldierDirection::RightFront: return &ANIMATION_PurpleWalkRightFront;
		case SoldierDirection::LeftFront: return &ANIMATION_PurpleWalkLeftFront;
		case SoldierDirection::LeftRear: return &ANIMATION_PurpleWalkLeftRear;
		case SoldierDirection::RightRear: return &ANIMATION_PurpleWalkRightRear;
		}
		break;
	}

	return nullptr;
}