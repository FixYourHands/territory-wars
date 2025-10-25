#pragma once

#include <SFML/Graphics.hpp>

class TWSprite
{
public:
	sf::Sprite _sprite;
	TWSprite(const sf::Texture& texture);
};