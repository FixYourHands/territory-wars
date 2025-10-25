#include <SFML/Graphics.hpp>
#include <iostream>
#include <array>
#include "mouseEventProcessor.h"


using Circle = sf::CircleShape;
using Rectangle = sf::RectangleShape;
using Event = sf::Event;


enum class ShapeType
{
	Circle, Rectangle
};

static constexpr std::array<sf::IntRect, 5> IDLE_FRAMES =
{
	sf::IntRect{ {9, 4},   {27, 41} },
	sf::IntRect{ {58, 4},  {27, 41} },
	sf::IntRect{ {106, 4}, {27, 41} },
	sf::IntRect{ {155, 4}, {27, 41} },
	sf::IntRect{ {202, 4}, {27, 41} }
};


int main()
{
	sf::RenderWindow window{ sf::VideoMode({ 800,800 }), "My SFML Window" };
	sf::Texture texture("images/boy_with_bag.png");
	sf::Sprite sprite(texture);
	window.setKeyRepeatEnabled(false);

	sf::Vector2f vec{ 100,100 };
	auto [width, height] {vec};

	int x = 5;
	
	Circle circle1{ 100.f };
	circle1.setFillColor(sf::Color::Green);

	sf::IntRect rect {sprite.getTextureRect()};
	sf::IntRect irect{};
	sprite.setTextureRect(IDLE_FRAMES[1]);
	sprite.setScale(sf::Vector2{ 2.f,2.f });

	sf::Clock clock;

	
	int counter = 0;

	while (window.isOpen())
	{
		while (const std::optional event = window.pollEvent())
		{
			if (event->is<Event::Closed>())
			{
				window.close();
			}

			MouseEventProcessor MEP{event};
			MEP.executeEvent();

			if (const auto* e = event->getIf<Event::KeyPressed>())
			{
				if (e->scancode == sf::Keyboard::Scan::X)
					width++;
				if (e->scancode == sf::Keyboard::Scan::Y);
				height++;
			}

			if (const auto* e = event->getIf<Event::KeyPressed>())
			{
				if (e->scancode == sf::Keyboard::Scancode::B)
				{
					
				}
			}
			
		}
		if (counter > 10'000)
			counter = 0;

		sprite.setTextureRect(IDLE_FRAMES[++counter % 2]);

		window.clear(sf::Color::Magenta);
		window.draw(sprite);

		window.display();
	}
	


}