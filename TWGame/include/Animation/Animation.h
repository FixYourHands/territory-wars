#pragma once
#include "Animation/AnimationFrameBuilder.h"
#include "Animation/AnimationFrameConstants.h"
#include "Animation/SpriteSheet/WalkingAnimationFrames.h"
#include "Animation/SpriteSheet/SittingAnimationFrames.h"
#include "Animation/SpriteSheet/PunchingAnimationFrames.h"
#include "Animation/SpriteSheet/IdlingAnimationFrames.h"
#include "Animation/SpriteSheet/DyingAnimationFrames.h"
#include "Animation/SpriteSheet/GettingHitAnimationFrames.h"


template <std::size_t N>
class Animation
{
public:
	using Milliseconds = float;
	std::array<int, 5> temp;
	
	Animation(const std::array<DataStructures::FrameData, N>& frameArray);
	void update(Milliseconds deltaTime);
	void resetTimes();
	void setAnimationLength(const size_t frameLength);
	//void getFramePointer(const AnimationFrameConstants::SpriteAttributes::SoldierState);
	sf::IntRect getRect() const;
	const DataStructures::FrameData* frames;

private:
	size_t currentFrame;
	Milliseconds elapsedTime;
	size_t totalFrames;
	
	
};

#include "Animation.tpp"