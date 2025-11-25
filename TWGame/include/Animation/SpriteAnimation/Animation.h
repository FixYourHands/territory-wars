#pragma once
#include "Animation/SpriteAnimation/AnimationFrameBuilder.h"
#include "Animation/SpriteAnimation/AnimationFrameConstants.h"
#include "Animation/SpriteAnimation/AnimationManager.h"


class Animation
{
public:
	using Milliseconds = float;
	
	
public:
	Animation(const AnimationFrameConstants::AnimationAttributes::SoldierColor color);
	Animation();
	void update(Milliseconds deltaTime);
	void resetTimes();
	void setFramePointer(const AnimationFrameConstants::AnimationAttributes::SoldierColor color,const AnimationFrameConstants::AnimationAttributes::AnimationState state, AnimationFrameConstants::AnimationAttributes::SoldierDirection direction);
	sf::IntRect getRect() const;
	
private:
	size_t currentFrame;
	Milliseconds elapsedTime;
	size_t totalFrames;
	const DataStructures::FrameData* animationFramePointer;

private:
	void setAnimationLength(const size_t frameLength);	
	
};
