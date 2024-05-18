#include "Event.h"

sf::Event Event::m_event;

sf::Event Event::GetEventSFML()
{
    return m_event;
}

bool Event::Update()
{
    if ( Window::PollEvent( m_event ) && m_event.type == sf::Event::Closed )
    {
        Window::Close();
    }
}
