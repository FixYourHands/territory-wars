#pragma once

#include <SFML/Graphics.hpp>

class BaseSprite
{
public:
	sf::Sprite _sprite;
	BaseSprite(const sf::Texture& texture);
};