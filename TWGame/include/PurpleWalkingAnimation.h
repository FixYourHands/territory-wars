#pragma once
#include <array>
#include "CharacterFrameConstants.h"
#include "AnimationFrameBuilder.h"
#include<SFML/Graphics.hpp>

namespace FrameSpeeds = CharacterFrameConstants::FrameSpeeds;
namespace FrameSizes = CharacterFrameConstants::FrameLengths;

namespace
{
	static constexpr Enumerations::RowNumber rowLevel_1{ 12 };
	static constexpr Enumerations::RowNumber rowLevel_2{ 13 };
	static constexpr Enumerations::RowNumber rowLevel_3{ 14 };
	static constexpr Enumerations::RowNumber rowLevel_4{ 15 };
}

static constexpr std::array<DataStructures::FrameData, FrameSizes::walkingFrameLength> _animation_PurpleWalkRightFront
{
	Builder::buildFrame<Enumerations::ColumnNumber::Col1, rowLevel_1>(FrameSpeeds::slowFrameSpeed),
	Builder::buildFrame<Enumerations::ColumnNumber::Col2, rowLevel_1>(FrameSpeeds::fastFrameSpeed),
	Builder::buildFrame<Enumerations::ColumnNumber::Col3, rowLevel_1>(FrameSpeeds::fastFrameSpeed),
	Builder::buildFrame<Enumerations::ColumnNumber::Col4, rowLevel_1>(FrameSpeeds::fastFrameSpeed),
	Builder::buildFrame<Enumerations::ColumnNumber::Col5, rowLevel_1>(FrameSpeeds::fastFrameSpeed),
	Builder::buildFrame<Enumerations::ColumnNumber::Col6, rowLevel_1>(FrameSpeeds::fastFrameSpeed),
	Builder::buildFrame<Enumerations::ColumnNumber::Col7, rowLevel_1>(FrameSpeeds::fastFrameSpeed),
	Builder::buildFrame<Enumerations::ColumnNumber::Col8, rowLevel_1>(FrameSpeeds::fastFrameSpeed),
	Builder::buildFrame<Enumerations::ColumnNumber::Col9, rowLevel_1>(FrameSpeeds::fastFrameSpeed),
	Builder::buildFrame<Enumerations::ColumnNumber::Col10, rowLevel_1>(FrameSpeeds::fastFrameSpeed)
};

static constexpr std::array<DataStructures::FrameData, FrameSizes::walkingFrameLength> _animation_PurpleWalkLeftFront
{
	Builder::buildFrame<Enumerations::ColumnNumber::Col1, rowLevel_2>(FrameSpeeds::slowFrameSpeed),
	Builder::buildFrame<Enumerations::ColumnNumber::Col2, rowLevel_2>(FrameSpeeds::fastFrameSpeed),
	Builder::buildFrame<Enumerations::ColumnNumber::Col3, rowLevel_2>(FrameSpeeds::fastFrameSpeed),
	Builder::buildFrame<Enumerations::ColumnNumber::Col4, rowLevel_2>(FrameSpeeds::fastFrameSpeed),
	Builder::buildFrame<Enumerations::ColumnNumber::Col5, rowLevel_2>(FrameSpeeds::fastFrameSpeed),
	Builder::buildFrame<Enumerations::ColumnNumber::Col6, rowLevel_2>(FrameSpeeds::fastFrameSpeed),
	Builder::buildFrame<Enumerations::ColumnNumber::Col7, rowLevel_2>(FrameSpeeds::fastFrameSpeed),
	Builder::buildFrame<Enumerations::ColumnNumber::Col8, rowLevel_2>(FrameSpeeds::fastFrameSpeed),
	Builder::buildFrame<Enumerations::ColumnNumber::Col9, rowLevel_2>(FrameSpeeds::fastFrameSpeed),
	Builder::buildFrame<Enumerations::ColumnNumber::Col10, rowLevel_2>(FrameSpeeds::fastFrameSpeed)
};

static constexpr std::array<DataStructures::FrameData, FrameSizes::walkingFrameLength> _animation_PurpleWalkLeftRear
{
	Builder::buildFrame<Enumerations::ColumnNumber::Col1, rowLevel_3>(FrameSpeeds::slowFrameSpeed),
	Builder::buildFrame<Enumerations::ColumnNumber::Col2, rowLevel_3>(FrameSpeeds::fastFrameSpeed),
	Builder::buildFrame<Enumerations::ColumnNumber::Col3, rowLevel_3>(FrameSpeeds::fastFrameSpeed),
	Builder::buildFrame<Enumerations::ColumnNumber::Col4, rowLevel_3>(FrameSpeeds::fastFrameSpeed),
	Builder::buildFrame<Enumerations::ColumnNumber::Col5, rowLevel_3>(FrameSpeeds::fastFrameSpeed),
	Builder::buildFrame<Enumerations::ColumnNumber::Col6, rowLevel_3>(FrameSpeeds::fastFrameSpeed),
	Builder::buildFrame<Enumerations::ColumnNumber::Col7, rowLevel_3>(FrameSpeeds::fastFrameSpeed),
	Builder::buildFrame<Enumerations::ColumnNumber::Col8, rowLevel_3>(FrameSpeeds::fastFrameSpeed),
	Builder::buildFrame<Enumerations::ColumnNumber::Col9, rowLevel_3>(FrameSpeeds::fastFrameSpeed),
	Builder::buildFrame<Enumerations::ColumnNumber::Col10, rowLevel_3>(FrameSpeeds::fastFrameSpeed)
};

static constexpr std::array<DataStructures::FrameData, FrameSizes::walkingFrameLength> _animation_PurpleWalkRightRear
{
	Builder::buildFrame<Enumerations::ColumnNumber::Col1, rowLevel_4>(FrameSpeeds::slowFrameSpeed),
	Builder::buildFrame<Enumerations::ColumnNumber::Col2, rowLevel_4>(FrameSpeeds::fastFrameSpeed),
	Builder::buildFrame<Enumerations::ColumnNumber::Col3, rowLevel_4>(FrameSpeeds::fastFrameSpeed),
	Builder::buildFrame<Enumerations::ColumnNumber::Col4, rowLevel_4>(FrameSpeeds::fastFrameSpeed),
	Builder::buildFrame<Enumerations::ColumnNumber::Col5, rowLevel_4>(FrameSpeeds::fastFrameSpeed),
	Builder::buildFrame<Enumerations::ColumnNumber::Col6, rowLevel_4>(FrameSpeeds::fastFrameSpeed),
	Builder::buildFrame<Enumerations::ColumnNumber::Col7, rowLevel_4>(FrameSpeeds::fastFrameSpeed),
	Builder::buildFrame<Enumerations::ColumnNumber::Col8, rowLevel_4>(FrameSpeeds::fastFrameSpeed),
	Builder::buildFrame<Enumerations::ColumnNumber::Col9, rowLevel_4>(FrameSpeeds::fastFrameSpeed),
	Builder::buildFrame<Enumerations::ColumnNumber::Col10, rowLevel_4>(FrameSpeeds::fastFrameSpeed)
};

