#ifndef _EVENT_H_
#define _EVENT_H_

class Event
{
private:
	static sf::Event m_event;

public:
	static sf::Event GetEventSFML();
	static bool Update();

};

#endif