#include "Sprite/SoldierSprite.h"

using namespace AnimationFrameConstants::AnimationAttributes;
using namespace SpriteConstants::SoldierAttributes;

constexpr sf::Vector2f getIsometricVelocity(const SoldierDirection direction)
{
	constexpr float s{ SOLDIER_SPEED };
	switch (direction)
	{
	case SoldierDirection::North:
		return sf::Vector2f{ -s, -s };
	case SoldierDirection::South:
		return sf::Vector2f{ s, s };
	case SoldierDirection::East:
		return sf::Vector2f{ s, -s };
	case SoldierDirection::West:
		return sf::Vector2f{ -s, s };
	}

	return sf::Vector2f{ 0.f, 0.f };
}

SoldierSprite::SoldierSprite(const sf::Texture& texture, const SoldierColor soldierColor, const sf::Vector2i&& position)
	: BaseSprite(texture), _color(soldierColor), _animationState(AnimationState::Sitting), _direction(SoldierDirection::South), _health(100), _velocity(sf::Vector2f{0.f,0.f})
{
	_animation.setFramePointer(soldierColor, _animationState, _direction);
	_sprite.setScale(sf::Vector2f(SOLDIER_SCALE, SOLDIER_SCALE));
	_sprite.setPosition(static_cast<sf::Vector2f>(position));
}

void SoldierSprite::draw(sf::RenderWindow& window) {
	window.draw(_sprite);
}

void SoldierSprite::update(float deltaTime) {
	_animation.update(deltaTime);
	_sprite.setTextureRect(_animation.getRect());
	applyMovement(deltaTime);
}

void SoldierSprite::setAnimationState(const AnimationState newState) {
	if (newState != _animationState) {
		_animationState = newState;
		_animation.setFramePointer(_color, _animationState, _direction);
	}
}

void SoldierSprite::setSoldierState(const SpriteConstants::SoldierState newState) {
	_soldierState = newState;
	if (_soldierState != SpriteConstants::SoldierState::Walking) {
		stopMovement();
	}
}

void SoldierSprite::setAnimationDirection(const SoldierDirection newDirection) {
	if (newDirection != _direction) {
		_direction = newDirection;
		_animation.setFramePointer(_color, _animationState, _direction);
	}
}

void SoldierSprite::setMovementDirection(const SoldierDirection direction) {
	_velocity = getIsometricVelocity(direction);
	setAnimationDirection(direction);
}

void SoldierSprite::stopMovement() {
	_velocity = sf::Vector2f{ 0.f, 0.f };
}

void SoldierSprite::applyMovement(float deltaTime) {
	sf::Vector2f movement{ _velocity * deltaTime };
	_sprite.move(movement);
}