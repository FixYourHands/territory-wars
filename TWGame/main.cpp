#include <SFML/Graphics.hpp>
#include <iostream>
#include "mouseEventProcessor.h"


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

	sf::Vector2u vec{ window.getSize() };
	auto [width, height] {vec};
	
	Circle circle1{ 100.f };
	circle1.setFillColor(sf::Color::Green);

	while (window.isOpen())
	{
		while (const std::optional event = window.pollEvent())
		{
			if (event->is<Event::Closed>())
			{
				window.close();
			}

			MouseEventProcessor MEP(event);
				
		}

		window.clear();
		window.draw(sprite);
		window.display();
	}
	


}