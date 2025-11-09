#include <SFML/Graphics.hpp>
#include <iostream>
#include "MouseEventProcessor.h"
#include "Animation/Animation.h"
#include "Animation/AnimationManager.h"
#include "Sprite/SoldierSprite.h"
#include <vector>
#include <cmath>


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

	std::vector<SoldierSprite> purpleArmy(12, { texture,SoldierColor::Green,sf::Vector2i{0,500} });
	for (int i = 0; i < purpleArmy.size(); i++)
	{
		purpleArmy[i]._sprite.setPosition(sf::Vector2f{i * 50.f,500.f});
	}
	
	Animation boyIdleAnimation;
	SoldierSprite soldierSprite1{ texture,SoldierColor::Green, sf::Vector2i{ 100, 100 } };
	SoldierSprite soldierSprite2{ texture,SoldierColor::Yellow, sf::Vector2i{ 200, 100 } };
	SoldierSprite soldierSprite3{ texture,SoldierColor::Purple, sf::Vector2i{ 300, 100 } };
	SoldierSprite soldierSprite4{ texture,SoldierColor::Black, sf::Vector2i{ 400, 100 } };
	SoldierSprite soldierSprite5{ texture,SoldierColor::Green, sf::Vector2i{ 500, 100 } };
	SoldierSprite soldierSprite6{ texture,SoldierColor::Green, sf::Vector2i{ 600, 100 } };

	soldierSprite1.setSoldierState(SpriteConstants::SoldierState::Idle);
	soldierSprite2.setSoldierState(SpriteConstants::SoldierState::Punching);
	soldierSprite3.setSoldierState(SpriteConstants::SoldierState::Walking);
	soldierSprite4.setSoldierState(SpriteConstants::SoldierState::Sitting);
	soldierSprite5.setSoldierState(SpriteConstants::SoldierState::Idle);

	soldierSprite1.setMovementDirection(AnimationFrameConstants::AnimationAttributes::SoldierDirection::South);
	

	using namespace AnimationFrameConstants::AnimationAttributes;


	boyIdleAnimation.setFramePointer(SoldierColor::Green,AnimationState::Punching, SoldierDirection::West);
	
	float statusTime{ 0.f };
	bool drawOnce = false;

	while (window.isOpen())
	{
		deltaTime = clock.restart().asSeconds();
		statusTime += deltaTime;
		while (const std::optional event = window.pollEvent())
		{
			if (event->is<Event::Closed>())
			{
				window.close();
			}

			MouseEventProcessor MEP{event};
			MEP.executeEvent();

			
		}

		if (statusTime >= 5.f)
		{
			if (!drawOnce)
				purpleArmy.push_back(SoldierSprite{ texture,SoldierColor::Purple, sf::Vector2i{300,200} });
			statusTime = 0.f;
			drawOnce = true;
		}

		boyIdleAnimation.update(deltaTime);
		soldierSprite1.update(deltaTime);
		soldierSprite2.update(deltaTime);
		soldierSprite3.update(deltaTime);
		soldierSprite4.update(deltaTime);
		soldierSprite5.update(deltaTime);
		soldierSprite6.update(deltaTime);
		sprite.setTextureRect(boyIdleAnimation.getRect());

		for (auto& soldier : purpleArmy)
		{
			soldier.update(deltaTime);
		}
		

		window.clear(sf::Color::White);
		window.draw(sprite);
		soldierSprite1.draw(window);
		soldierSprite2.draw(window);
		soldierSprite3.draw(window);
		soldierSprite4.draw(window);
		soldierSprite5.draw(window);
		soldierSprite6.draw(window);

		for (auto& soldier : purpleArmy)
		{
			soldier.draw(window);
		}

		window.display();
		
	}
	


}