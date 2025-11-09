#pragma once
#include "Animation/AnimationFrameBuilder.h"
#include "Animation/AnimationFrameConstants.h"
#include "Animation/AnimationManager.h"


class Animation
{
public:
	using Milliseconds = float;
	const DataStructures::FrameData* frames;
	
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

private:
	void setAnimationLength(const size_t frameLength);	
	
};
