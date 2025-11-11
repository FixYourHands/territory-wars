#include "Sprite/SoldierSprite.h"

using namespace AnimationFrameConstants::AnimationAttributes;
using namespace SpriteConstants::SoldierAttributes;

namespace
{

	constexpr SpriteConstants::SoldierState convertAnimationStateToSoldierState(const AnimationState animationState)
	{
		switch (animationState)
		{
		case AnimationState::Idle:
			return SpriteConstants::SoldierState::Idle;
		case AnimationState::Walking:
			return SpriteConstants::SoldierState::Walking;
		case AnimationState::Sitting:
			return SpriteConstants::SoldierState::Sitting;
		case AnimationState::Punching:
			return SpriteConstants::SoldierState::Punching;
		case AnimationState::GettingHit:
			return SpriteConstants::SoldierState::GettingHit;
		case AnimationState::Dying:
			return SpriteConstants::SoldierState::Dying;
		}
		return SpriteConstants::SoldierState::Idle;
	}

	constexpr AnimationState convertSoldierStateToAnimationState(const SpriteConstants::SoldierState soldierState)
	{
		switch (soldierState)
		{
		case SpriteConstants::SoldierState::Idle:
			return AnimationState::Idle;
		case SpriteConstants::SoldierState::Walking:
			return AnimationState::Walking;
		case SpriteConstants::SoldierState::Sitting:
			return AnimationState::Sitting;
		case SpriteConstants::SoldierState::Punching:
			return AnimationState::Punching;
		case SpriteConstants::SoldierState::GettingHit:
			return AnimationState::GettingHit;
		case SpriteConstants::SoldierState::Dying:
			return AnimationState::Dying;
		}
		return AnimationState::Idle;
	}

	constexpr sf::Vector2f getIsometricVelocity(const SoldierDirection direction)
	{
		constexpr float x{ SOLDIER_SPEED };
		constexpr float y{ SOLDIER_SPEED / 2.f };
		switch (direction)
		{
		case SoldierDirection::North:
			return sf::Vector2f{ -x, -y };
		case SoldierDirection::South:
			return sf::Vector2f{ x, y };
		case SoldierDirection::East:
			return sf::Vector2f{ x, -y };
		case SoldierDirection::West:
			return sf::Vector2f{ -x, y };
		}

		return SpriteConstants::SoldierAttributes::ZERO_SPEED;
	}
}

//------------------------------Public Methods

SoldierSprite::SoldierSprite(const sf::Texture& texture, const SoldierColor soldierColor, const sf::Vector2i&& position)
	: BaseSprite(texture), _color(soldierColor), _animationState(AnimationState::Sitting),_soldierState(SpriteConstants::SoldierState::Sitting), _direction(SoldierDirection::South), _health(100), _velocity(SpriteConstants::SoldierAttributes::ZERO_SPEED)
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

void SoldierSprite::setSoldierState(const SpriteConstants::SoldierState newState) {
	_soldierState = newState;
	setAnimationState(convertSoldierStateToAnimationState(newState));
	if (_soldierState == SpriteConstants::SoldierState::Walking) {
		_velocity = getIsometricVelocity(_direction);
	}
	else
	{
		stopMovement();
	}
}

void SoldierSprite::setSoldierDirection(const SoldierDirection direction) {
	setAnimationDirection(direction);
	if (_soldierState == SpriteConstants::SoldierState::Walking)
		_velocity = getIsometricVelocity(direction);
}

//------------------------------Private Methods

void SoldierSprite::setAnimationState(const AnimationState newState) {
	if (newState != _animationState) {
		_animationState = newState;
		_animation.setFramePointer(_color, _animationState, _direction);
	}
}



void SoldierSprite::setAnimationDirection(const SoldierDirection newDirection) {
	if (newDirection != _direction) {
		_direction = newDirection;
		_animation.setFramePointer(_color, _animationState, _direction);
	}
}

void SoldierSprite::stopMovement() {
	_velocity = SpriteConstants::SoldierAttributes::ZERO_SPEED;
}

void SoldierSprite::applyMovement(float deltaTime) {
	sf::Vector2f movement{ _velocity * deltaTime };
	_sprite.move(movement);
}

