#include <SFML/Graphics.hpp>
#include <iostream>
#include "MouseEventProcessor.h"
#include "Animation/Animation.h"
#include "Animation/AnimationManager.h"
#include "SoldierSprite.h"


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
	sf::Texture texture("images/round2.png");
	sf::Sprite sprite(texture);
	window.setKeyRepeatEnabled(false);

	sf::Vector2f vec{ 100,100 };
	auto [width, height] {vec};

	int x = 5;
	
	Circle circle1{ 100.f };
	circle1.setFillColor(sf::Color::Green);

	sf::IntRect rect {sprite.getTextureRect()};
	sf::IntRect irect{};
	sprite.setScale(sf::Vector2{ 2.f,2.f });


	sf::Clock clock;
	float elapsedTime{ 0.f };
	auto deltaTime{ 0.f };
	
	int counter{ 0 };
	sprite.setPosition(sf::Vector2f{ 200.f, 200.f });
	
	Animation boyIdleAnimation;
	SoldierSprite soldierSprite{ texture,SoldierColor::Green, sf::Vector2i{ 100, 100 } };
	soldierSprite.setDirection(AnimationFrameConstants::SpriteAttributes::SoldierDirection::LeftFront);
	soldierSprite.setState(AnimationFrameConstants::SpriteAttributes::SoldierState::Idle);
	

	using namespace AnimationFrameConstants::SpriteAttributes;


	boyIdleAnimation.setFramePointer(SoldierColor::Green,SoldierState::Punching, SoldierDirection::LeftFront);
	
	

	while (window.isOpen())
	{
		deltaTime = clock.restart().asSeconds();
		while (const std::optional event = window.pollEvent())
		{
			if (event->is<Event::Closed>())
			{
				window.close();
			}

			MouseEventProcessor MEP{event};
			MEP.executeEvent();

			
		}
		boyIdleAnimation.update(deltaTime);
		soldierSprite.update(deltaTime);
		sprite.setTextureRect(boyIdleAnimation.getRect());
		

		window.clear(sf::Color::White);
		window.draw(sprite);
		soldierSprite.draw(window);

		window.display();
		
	}
	


}