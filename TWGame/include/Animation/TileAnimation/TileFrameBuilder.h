struct Coordinates
{
	float x;
	float y;

	constexpr Coordinates operator+(const int addend) const
	{
		return { this->x + addend,this->y + addend };
	}
};

enum class TileList
{
	Black, Green, Neutral, Purple, Yellow
};

enum class VertexPoint
{
	Top, Left, Right, Bottom
};

namespace
{
	constexpr Coordinates initialTopVertice{ 41.f,5.f };
	constexpr Coordinates initialLeftVertice{ 4.f,24.f };
	constexpr Coordinates initialRightVertice{ 76.f,24.f };
	constexpr Coordinates initialBottomVertice{ 40.f,42.f };

	constexpr Coordinates getInitialCoordinates(const VertexPoint point)
	{
		switch (point)
		{
		case VertexPoint::Top:
			return initialTopVertice;
		case VertexPoint::Left:
			return initialLeftVertice;
		case VertexPoint::Right:
			return initialRightVertice;
		case VertexPoint::Bottom:
			return initialBottomVertice;
		}

		return { 0.f,0.f };
	}

}

struct TileImage
{
	Coordinates top;
	Coordinates left;
	Coordinates right;
	Coordinates bottom;
};




constexpr TileImage buildRateIncreaseTileImage(const TileList color)
{
	
	const int index{ static_cast<int>(color) };
	constexpr int TILE_DISTANCE{ 80 };
	int padding{ index * TILE_DISTANCE};
	 
	return {
		 getInitialCoordinates(VertexPoint::Top) + padding,
		getInitialCoordinates(VertexPoint::Left) + padding,
		getInitialCoordinates(VertexPoint::Right) + padding,
		getInitialCoordinates(VertexPoint::Bottom) + padding };
}