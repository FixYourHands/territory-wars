#pragma once
#include <array>
#include<SFML/Graphics.hpp>

struct FrameData
{
	sf::IntRect rect;
	float duration;
};

static constexpr std::array<FrameData, 5> IDLE_FRAMES =
{
	FrameData{sf::IntRect{ {9, 4},   {27, 41} }, .3f},
	FrameData{sf::IntRect{ {58, 4},  {27, 41} }, .2f},
	FrameData{sf::IntRect{ {106, 4}, {27, 41} }, .3f},
	FrameData{sf::IntRect{ {155, 4}, {27, 41} }, .3f},
	FrameData{sf::IntRect{ {202, 4}, {27, 41} }, .3f}
};
