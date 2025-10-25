#include <array>
#include<SFML/Graphics.hpp>

static constexpr std::array<sf::IntRect, 5> IDLE_FRAMES =
{
	sf::IntRect{ {9, 4},   {27, 41} },
	sf::IntRect{ {58, 4},  {27, 41} },
	sf::IntRect{ {106, 4}, {27, 41} },
	sf::IntRect{ {155, 4}, {27, 41} },
	sf::IntRect{ {202, 4}, {27, 41} }
};