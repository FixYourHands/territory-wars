template <size_t N>
Animation<N>::Animation(const std::array<FrameData, N>& frameData) 
	: FRAMES(frameData),elapsedTime(0.f),totalFrames(N),currentFrame(0){}

template <size_t N>
void Animation<N>::update(Milliseconds deltaTime)
{
	elapsedTime += deltaTime;

	if (elapsedTime >= FRAMES[currentFrame].duration)
	{
		currentFrame = (currentFrame + 1) % totalFrames;
		elapsedTime = 0;
	}

}

template <size_t N>
sf::IntRect Animation<N>::getRect() const
{
	return FRAMES[currentFrame].rect;
}