#pragma once
#include "Sprite/BaseSprite.h"
#include <SFML/Graphics.hpp>
#include "Animation/SpriteAnimation/AnimationFrameConstants.h"
#include "Animation/SpriteAnimation/Animation.h"
#include "Sprite/SoldierConstants.h"
 


class SoldierSprite : public BaseSprite
{
public:
	SoldierSprite(const sf::Texture& texture,const AnimationFrameConstants::AnimationAttributes::SoldierColor soldierColor, const sf::Vector2i&& position);
	void draw(sf::RenderWindow& window);
	void update(float deltaTime);
	void setSoldierState(const SpriteConstants::SoldierState newState);
	void setSoldierDirection(const AnimationFrameConstants::AnimationAttributes::SoldierDirection newDirection);
	
private:
	AnimationFrameConstants::AnimationAttributes::AnimationState _animationState;
	AnimationFrameConstants::AnimationAttributes::SoldierColor _color;
	AnimationFrameConstants::AnimationAttributes::SoldierDirection _direction;
	Animation _animation;
	SpriteConstants::SoldierState _soldierState;
	int _health;
	sf::Vector2f _velocity;

private:
	void setAnimationState(const AnimationFrameConstants::AnimationAttributes::AnimationState newState);
	void setAnimationDirection(const AnimationFrameConstants::AnimationAttributes::SoldierDirection newDirection);
	void stopMovement();
	void applyMovement(float deltaTime);

};