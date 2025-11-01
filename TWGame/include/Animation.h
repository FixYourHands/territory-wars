#pragma once
#include "AnimationFrameBuilder.h"
#include "PurpleWalkingAnimation.h"

template <std::size_t N>
class Animation
{
public:
	using Milliseconds = float;

	
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