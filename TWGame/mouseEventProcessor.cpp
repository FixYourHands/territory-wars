#include "mouseEventProcessor.h"
#include <iostream>

using Event = sf::Event;
using WheelScrolled = Event::MouseWheelScrolled;
using MouseMoved = Event::MouseMoved;
using ButtonPressed = Event::MouseButtonPressed;
using Button = sf::Mouse::Button;

MouseEventProcessor::MouseEventProcessor(const std::optional<Event>& event): _event(event)
{
	executeEvent();
}

void MouseEventProcessor::executeEvent()
{
	if (const auto* e = _event->getIf<MouseMoved>())
		MouseMovedEvent(e);

	if (const auto* e = _event->getIf<ButtonPressed>())
	{
		switch (e->button)
		{
		case sf::Mouse::Button::Left:
			MouseLeftPressEvent(e);
			break;
		case sf::Mouse::Button::Right:
			MouseRightPressEvent(e);
			break;
		}
	}

	if (const auto* e = _event->getIf<Event::MouseWheelScrolled>())
	{
		WheelScrollEvent(e);
	}

}

void MouseEventProcessor::WheelScrollEvent(const WheelScrolled* event)
{
	std::cout << "X position: " << event->position.x << " Y position: " << event->position.y << '\n';
}

void MouseEventProcessor::MouseMovedEvent(const MouseMoved* event)
{
	std::cout << "Mouse x: " << event->position.x << " Mouse y: " << event->position.y << '\n';
}

void MouseEventProcessor::MouseLeftPressEvent(const ButtonPressed* event)
{
	std::cout << "Mouse x: " << event->position.x << " Mouse y: " << event->position.y << '\n';
}

void MouseEventProcessor::MouseRightPressEvent(const ButtonPressed* event)
{
	std::cout << "Yah boi clicked here!\n";
}