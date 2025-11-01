#pragma once
#include "TWSprite.h"
#include "Animation/Animation.h"
 
enum class States
{
	Idle,Walking
};

class CharacterSprite : public TWSprite
{
private:
	sf::Vector2i position;
	States currentState;
	
	

};