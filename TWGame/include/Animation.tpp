template <size_t N>
Animation<N>::Animation(const std::array<FrameData, N>& frameArray) 
	: frames(&frameArray),elapsedTime(0.f),totalFrames(N),currentFrame(0){}

template <size_t N>
void Animation<N>::update(Milliseconds deltaTime)
{
	elapsedTime += deltaTime;

	if (elapsedTime >= (*frames)[currentFrame].duration)
	{
		currentFrame = (currentFrame + 1) % totalFrames;
		elapsedTime = 0;
	}

}

template <size_t N>
sf::IntRect Animation<N>::getRect() const
{
	return (*frames)[currentFrame].getRect();
}