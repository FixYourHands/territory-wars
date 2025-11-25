#include "Animation/SpriteAnimation/Animation.h"

Animation::Animation()
	: animationFramePointer(nullptr), elapsedTime(0.f), totalFrames(0), currentFrame(0) {
}

Animation::Animation(const AnimationFrameConstants::AnimationAttributes::SoldierColor color)
	: animationFramePointer(nullptr),elapsedTime(0.f), totalFrames(AnimationFrameConstants::AnimationLengths::idleFrameLength), currentFrame(0) 
{
	setFramePointer(color, AnimationFrameConstants::AnimationAttributes::AnimationState::Idle, AnimationFrameConstants::AnimationAttributes::SoldierDirection::South);
}


void Animation::update(Milliseconds deltaTime)
{
	elapsedTime += deltaTime;

	if (elapsedTime >= animationFramePointer[currentFrame].duration)
	{
		currentFrame = (currentFrame + 1) % totalFrames;
		elapsedTime = 0;
	}

}


void Animation::setFramePointer(const AnimationFrameConstants::AnimationAttributes::SoldierColor color, const AnimationFrameConstants::AnimationAttributes::AnimationState state, AnimationFrameConstants::AnimationAttributes::SoldierDirection direction)
{
	using namespace AnimationFrameConstants::AnimationAttributes;
	using namespace AnimationFrameConstants::AnimationLengths;

	switch (state)
	{
	case AnimationState::Walking:
		animationFramePointer = (*AnimationManager<walkingFrameLength>::getWalkAnimationPointer(color, direction)).data();
		setAnimationLength(walkingFrameLength);
		break;
	case AnimationState::Idle:
		animationFramePointer = (*AnimationManager<idleFrameLength>::getIdleAnimationPointer(color, direction)).data();
		setAnimationLength(idleFrameLength);
		break;
	case AnimationState::Sitting:
		animationFramePointer = (*AnimationManager<sittingFrameLength>::getSitAnimationPointer(color, direction)).data();
		setAnimationLength(sittingFrameLength);
		break;
	case AnimationState::Punching:
		animationFramePointer = (*AnimationManager<punchingFrameLength>::getPunchAnimationPointer(color, direction)).data();
		setAnimationLength(punchingFrameLength);
		break;
	case AnimationState::GettingHit:
		animationFramePointer = (*AnimationManager<gettingHitFrameLength>::getGetHitAnimationPointer(color, direction)).data();
		setAnimationLength(gettingHitFrameLength);
		break;
	case AnimationState::Dying:
		animationFramePointer = (*AnimationManager<dyingFrameLength>::getDieAnimationPointer(color, direction)).data();
		setAnimationLength(dyingFrameLength);
		break;
	}


}


void Animation::setAnimationLength(const size_t frameLength)
{
	totalFrames = frameLength;
}


void Animation::resetTimes()
{
	elapsedTime = 0.f;
	currentFrame = 0;
}


sf::IntRect Animation::getRect() const
{
	return animationFramePointer[currentFrame].getRect();
}