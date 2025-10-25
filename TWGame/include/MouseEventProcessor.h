#pragma once
#include <SFML/Window.hpp>



class MouseEventProcessor
{
private:
	using Event = sf::Event;

	const std::optional<Event>& _event;
	
	void MouseMovedEvent(const Event::MouseMoved* event);
	void WheelScrollEvent(const Event::MouseWheelScrolled* event);
	void MouseLeftPressEvent(const sf::Event::MouseButtonPressed* event);
	void MouseRightPressEvent(const sf::Event::MouseButtonPressed* event);

public:
	MouseEventProcessor(const std::optional<Event>& event);
	void executeEvent();

	
};