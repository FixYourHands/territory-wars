template <size_t N>
Animation<N>::Animation(const std::array<DataStructures::FrameData, N>& frameArray)
	: frames(&frameArray[0]), elapsedTime(0.f), totalFrames(N), currentFrame(0) { }

template <size_t N>
void Animation<N>::update(Milliseconds deltaTime)
{
	elapsedTime += deltaTime;

	if (elapsedTime >= frames[currentFrame].duration)
	{
		currentFrame = (currentFrame + 1) % totalFrames;
		elapsedTime = 0;
	}

}

template <size_t N>
void Animation<N>::setAnimationLength(const size_t frameLength)
{
	totalFrames = frameLength;
}

template <size_t N>
void Animation<N>::resetTimes()
{
	elapsedTime = 0.f;
	currentFrame = 0;
}

template <size_t N>
sf::IntRect Animation<N>::getRect() const
{
	return frames[currentFrame].getRect();
}