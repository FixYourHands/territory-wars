#include "TileFrameBuilder.h"
#include <array>


enum class TileColor
{
	Black,Green,Yellow,Purple,Neutral
};

constexpr std::array<TileImage, 5> rateIncreaseTileImages{
	buildRateIncreaseTileImage(TileList::Black),
	buildRateIncreaseTileImage(TileList::Green),
	buildRateIncreaseTileImage(TileList::Yellow),
	buildRateIncreaseTileImage(TileList::Purple),
	buildRateIncreaseTileImage(TileList::Neutral)
};

//static constexpr const TileImage* getRateIncreaseTileImage() this should be in a manager class


 