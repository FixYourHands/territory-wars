#include "Animation/Animation.h"

Animation::Animation()
	: frames(nullptr), elapsedTime(0.f), totalFrames(0), currentFrame(0) {
}

Animation::Animation(const AnimationFrameConstants::SpriteAttributes::SoldierColor color)
	: frames(nullptr),elapsedTime(0.f), totalFrames(AnimationFrameConstants::AnimationLengths::idleFrameLength), currentFrame(0) 
{
	setFramePointer(color, AnimationFrameConstants::SpriteAttributes::SoldierState::Idle, AnimationFrameConstants::SpriteAttributes::SoldierDirection::RightFront);
}


void Animation::update(Milliseconds deltaTime)
{
	elapsedTime += deltaTime;

	if (elapsedTime >= frames[currentFrame].duration)
	{
		currentFrame = (currentFrame + 1) % totalFrames;
		elapsedTime = 0;
	}

}


void Animation::setFramePointer(const AnimationFrameConstants::SpriteAttributes::SoldierColor color, const AnimationFrameConstants::SpriteAttributes::SoldierState state, AnimationFrameConstants::SpriteAttributes::SoldierDirection direction)
{
	using namespace AnimationFrameConstants::SpriteAttributes;
	using namespace AnimationFrameConstants::AnimationLengths;

	switch (state)
	{
	case SoldierState::Walking:
		frames = (*AnimationManager<walkingFrameLength>::getWalkAnimationPointer(color, direction)).data();
		setAnimationLength(walkingFrameLength);
		break;
	case SoldierState::Idle:
		frames = (*AnimationManager<idleFrameLength>::getIdleAnimationPointer(color, direction)).data();
		setAnimationLength(idleFrameLength);
		break;
	case SoldierState::Sitting:
		frames = (*AnimationManager<sittingFrameLength>::getSitAnimationPointer(color, direction)).data();
		setAnimationLength(sittingFrameLength);
		break;
	case SoldierState::Punching:
		frames = (*AnimationManager<punchingFrameLength>::getPunchAnimationPointer(color, direction)).data();
		setAnimationLength(punchingFrameLength);
		break;
	case SoldierState::GettingHit:
		frames = (*AnimationManager<gettingHitFrameLength>::getGetHitAnimationPointer(color, direction)).data();
		setAnimationLength(gettingHitFrameLength);
		break;
	case SoldierState::Dying:
		frames = (*AnimationManager<dyingFrameLength>::getDieAnimationPointer(color, direction)).data();
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
	return frames[currentFrame].getRect();
}