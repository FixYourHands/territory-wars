#pragma once
#include <array>
#include "PurpleWalkingAnimation.h"
#include<SFML/Graphics.hpp>

namespace WalkingRight_Purple_Front = PurpleWalkingRightFront;
//namespace WalkingLeft_Purple_Front = PurpleWalkingLeftFront;
namespace FrameSpeeds = CharacterFrameConstants;

static constexpr auto walkingFramesLength{ 10 };


static constexpr std::array<FrameData, walkingFramesLength> _animation_PurpleWalkRightFront
{
	WalkingRight_Purple_Front::getFrame<ColumnNumber::Col1>(FrameSpeeds::slowFrameSpeed),
	WalkingRight_Purple_Front::getFrame<ColumnNumber::Col2>(FrameSpeeds::fastFrameSpeed),
	WalkingRight_Purple_Front::getFrame<ColumnNumber::Col3>(FrameSpeeds::fastFrameSpeed),
	WalkingRight_Purple_Front::getFrame<ColumnNumber::Col4>(FrameSpeeds::fastFrameSpeed),
	WalkingRight_Purple_Front::getFrame<ColumnNumber::Col5>(FrameSpeeds::fastFrameSpeed),
	WalkingRight_Purple_Front::getFrame<ColumnNumber::Col6>(FrameSpeeds::fastFrameSpeed),
	WalkingRight_Purple_Front::getFrame<ColumnNumber::Col7>(FrameSpeeds::fastFrameSpeed),
	WalkingRight_Purple_Front::getFrame<ColumnNumber::Col8>(FrameSpeeds::fastFrameSpeed),
	WalkingRight_Purple_Front::getFrame<ColumnNumber::Col9>(FrameSpeeds::fastFrameSpeed),
	WalkingRight_Purple_Front::getFrame<ColumnNumber::Col10>(FrameSpeeds::fastFrameSpeed)
};


/*
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
*/

