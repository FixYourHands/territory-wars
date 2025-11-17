#include "TileFrameBuilder.h"
#include <array>


enum class TileColor
{
	Black,Green,Yellow,Purple,Neutral
};

inline constexpr std::array<TileImage, 5> tileImages{
	buildTileImage(TileList::Black),
	buildTileImage(TileList::Green),
	buildTileImage(TileList::Yellow),
	buildTileImage(TileList::Purple),
	buildTileImage(TileList::Neutral)
};


//static constexpr const TileImage* getRateIncreaseTileImage() this should be in a manager class


 