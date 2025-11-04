#pragma once
#include "AnimationFrameConstants.h"
#include "Animation/AnimationFrameBuilder.h"

using namespace AnimationFrameConstants::SpriteAttributes;

template<size_t N>
class AnimationManager
{

public:
	static constexpr std::array<DataStructures::FrameData,N>* getWalkAnimationPointer(const SoldierColor color, const SoldierState state, const SoldierDirection direction);
};