#pragma once
#include "Animation/AnimationFrameBuilder.h"
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
	sf::IntRect getRect() const;

private:
	size_t currentFrame;
	Milliseconds elapsedTime;
	const size_t totalFrames;
	const std::array<DataStructures::FrameData,N>* frames;
	
};

#include "Animation.tpp"