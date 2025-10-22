#include <SFML/Graphics.hpp>
#include <iostream>


using Circle = sf::CircleShape;
using Event = sf::Event;
int main()
{
	sf::RenderWindow window{ sf::VideoMode({ 400,400 }), "My SFML Window" };

	Circle circle1{ 200.f };

	while (window.isOpen())
	{
		while (const std::optional event = window.pollEvent())
		{
			if (event->is<Event>())
				window.close();
		}
	}

	window.clear();
	window.draw(circle1);
	window.display();


}