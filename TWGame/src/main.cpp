#include <SFML/Graphics.hpp>
#include <iostream>

#include "MouseEventProcessor.h"


using Circle = sf::CircleShape;
using Rectangle = sf::RectangleShape;
using Event = sf::Event;


enum class ShapeType
{
	Circle, Rectangle
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
		
		if (clock.getElapsedTime().asMilliseconds() >= 250)
		{
			counter = (counter + 1) % IDLE_FRAMES.size();
			clock.restart();
		}

		sprite.setTextureRect(IDLE_FRAMES[counter]);

		window.clear(sf::Color::Magenta);
		window.draw(sprite);

		window.display();
	}
	


}