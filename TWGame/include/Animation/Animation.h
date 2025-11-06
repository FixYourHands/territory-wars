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
	Animation(const AnimationFrameConstants::SpriteAttributes::SoldierColor color);
	Animation();
	void update(Milliseconds deltaTime);
	void resetTimes();
	void setFramePointer(const AnimationFrameConstants::SpriteAttributes::SoldierColor color,const AnimationFrameConstants::SpriteAttributes::SoldierState state, AnimationFrameConstants::SpriteAttributes::SoldierDirection direction);
	sf::IntRect getRect() const;
	

private:
	size_t currentFrame;
	Milliseconds elapsedTime;
	size_t totalFrames;

private:
	void setAnimationLength(const size_t frameLength);
	
	
};
