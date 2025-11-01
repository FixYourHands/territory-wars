#pragma once
#include <array>
#include "PurpleWalkingAnimation.h"
#include<SFML/Graphics.hpp>

namespace WalkingRight_Purple_Front = PurpleWalkingRightFront;
namespace FrameSpeeds = CharacterFrameConstants;



static constexpr std::array<FrameData, 10> WALKING_RIGHT_FRAMES =
{
	FrameData{WalkingRight_Purple_Front::frame_1, FrameSpeeds::slowFrameSpeed},
	FrameData{WalkingRight_Purple_Front::frame_2, FrameSpeeds::fastFrameSpeed},
	FrameData{WalkingRight_Purple_Front::frame_3, FrameSpeeds::fastFrameSpeed},
	FrameData{WalkingRight_Purple_Front::frame_4, FrameSpeeds::fastFrameSpeed},
	FrameData{WalkingRight_Purple_Front::frame_5, FrameSpeeds::fastFrameSpeed},
	FrameData{WalkingRight_Purple_Front::frame_6, FrameSpeeds::fastFrameSpeed},
	FrameData{WalkingRight_Purple_Front::frame_7, FrameSpeeds::fastFrameSpeed},
	FrameData{WalkingRight_Purple_Front::frame_8, FrameSpeeds::fastFrameSpeed},
	FrameData{WalkingRight_Purple_Front::frame_9, FrameSpeeds::fastFrameSpeed},
	FrameData{WalkingRight_Purple_Front::frame_10, FrameSpeeds::fastFrameSpeed}
};
