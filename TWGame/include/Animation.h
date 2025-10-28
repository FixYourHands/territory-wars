#pragma once
#include "PlayerFrameData.h"

template <std::size_t N>
class Animation
{
public:
	using Milliseconds = float;

	
	Animation(const std::array<FrameData, N>& frameData);
	void update(Milliseconds deltaTime);
	sf::IntRect getRect() const;

private:
	size_t currentFrame;
	Milliseconds elapsedTime;
	const size_t totalFrames;
	const std::array<FrameData, N>& FRAMES;
};

#include "Animation.tpp"