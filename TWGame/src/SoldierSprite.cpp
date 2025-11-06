#include "Sprite/SoldierSprite.h"

using namespace AnimationFrameConstants::SpriteAttributes;
constexpr float SCALE_FACTOR{ 2.f };
constexpr float SPEED_FACTOR{ 20.f };


SoldierSprite::SoldierSprite(const sf::Texture& texture, const SoldierColor soldierColor, const sf::Vector2i&& position)
	: BaseSprite(texture), _color(soldierColor), _currentState(SoldierState::Sitting), _direction(SoldierDirection::RightFront), _health(100), _speed(SPEED_FACTOR)
{
	_animation.setFramePointer(soldierColor, _currentState, _direction);
	_sprite.setScale(sf::Vector2(SCALE_FACTOR, SCALE_FACTOR));
	_sprite.setPosition(static_cast<sf::Vector2f>(position));
}

void SoldierSprite::draw(sf::RenderWindow& window) {
	window.draw(_sprite);
}

void SoldierSprite::update(float deltaTime) {
	_animation.update(deltaTime);
	_sprite.setTextureRect(_animation.getRect());
}

void SoldierSprite::setState(const SoldierState newState) {
	if (newState != _currentState) {
		_currentState = newState;
		_animation.setFramePointer(_color, _currentState, _direction);
	}
}

void SoldierSprite::setDirection(const SoldierDirection newDirection) {
	if (newDirection != _direction) {
		_direction = newDirection;
		_animation.setFramePointer(_color, _currentState, _direction);
	}
}