#pragma once
#include "Sprite/BaseSprite.h"
#include "Animation/AnimationFrameConstants.h"
#include "Animation/Animation.h"
 


class SoldierSprite : public BaseSprite
{
public:
	SoldierSprite(const sf::Texture& texture,const AnimationFrameConstants::SpriteAttributes::SoldierColor soldierColor, const sf::Vector2i&& position);
	void draw(sf::RenderWindow& window);
	void update(float deltaTime);
	void setState(const AnimationFrameConstants::SpriteAttributes::SoldierState newState);
	void setDirection(const AnimationFrameConstants::SpriteAttributes::SoldierDirection newDirection);
private:
	AnimationFrameConstants::SpriteAttributes::SoldierState _currentState;
	AnimationFrameConstants::SpriteAttributes::SoldierColor _color;
	AnimationFrameConstants::SpriteAttributes::SoldierDirection _direction;
	Animation _animation;
	int _health;
	float _speed;

};