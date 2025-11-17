#include <SFML/Graphics.hpp>
#include <iostream>
#include "MouseEventProcessor.h"
#include "Animation/SpriteAnimation/Animation.h"
#include "Animation/SpriteAnimation/AnimationManager.h"
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

float tileWidth{ 72.f };
float tileHeight{ 38.f };

void scaleShape(sf::VertexArray& vArray, int xGrid, int yGrid, float scaleFactor = 1.0)
{
	vArray[0].position.x = ((xGrid - yGrid) * tileWidth / 2.f) * scaleFactor;
	vArray[0].position.y = ((xGrid + yGrid) * tileHeight / 2.f) * scaleFactor;
	vArray[1].position.x = ((xGrid - (yGrid + 1)) * tileWidth / 2.f) * scaleFactor;
	vArray[1].position.y = ((xGrid + (yGrid + 1)) * tileHeight / 2.f) * scaleFactor;
	vArray[2].position.x = (((xGrid + 1) - yGrid) * tileWidth / 2.f) * scaleFactor;
	vArray[2].position.y = (((xGrid + 1) + yGrid) * tileHeight / 2.f) * scaleFactor;
	vArray[3].position.x = (((xGrid + 1) - (yGrid+1)) * tileWidth / 2.f) * scaleFactor;
	vArray[3].position.y = (((xGrid + 1) + (yGrid+1)) * tileHeight / 2.f) * scaleFactor;
}

int main()
{
	sf::RenderWindow window{ sf::VideoMode({ 1200,1200 }), "My SFML Window" };
	sf::Texture texture("images/round2.png");
	sf::Texture heartTileTexture("images/heartneutral.png");
	heartTileTexture.setSmooth(true);
	sf::Sprite sprite(texture);
	window.setKeyRepeatEnabled(false);


	

	sf::VertexArray vArray(sf::PrimitiveType::TriangleStrip);
	sf::VertexArray vArray2(sf::PrimitiveType::TriangleStrip);
	vArray.append(sf::Vertex{ {200,300.f},sf::Color::Blue,{41.f,5.f} });
	vArray.append(sf::Vertex{ {165.f,317.5f},sf::Color::White,{4.f,24.f} });
	vArray.append(sf::Vertex{ {235.f,317.5f},sf::Color::White,{76.f,24.f} });
	vArray.append(sf::Vertex{ {200.f,335.f},sf::Color::White,{40.f,42.f} });

	vArray2.append(sf::Vertex{ {0,300.f},sf::Color::White,{42.f,5.f} });
	vArray2.append(sf::Vertex{ {165.f,317.5f},sf::Color::White,{4.f,24.f} });
	vArray2.append(sf::Vertex{ {235.f,317.5f},sf::Color::White,{76,24} });
	vArray2.append(sf::Vertex{ {200.f,335.f},sf::Color::White,{40.f,44.f} });

	//scaleShape(vArray, 2, 2, 1);
	scaleShape(vArray2, 3, 2, 1);

	sf::Clock clock;
	float elapsedTime{ 0.f };
	auto deltaTime{ 0.f };
	
	sf::RenderStates states;
	states.texture = &heartTileTexture;
	int counter{ 0 };
	sprite.setPosition(sf::Vector2f{ 200.f, 200.f });

	
	


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
		window.clear(sf::Color::White);
		
		//window.draw(vArray,&heartTileTexture);
		window.draw(vArray2,&heartTileTexture);
	

		window.display();
		
	}
	


}