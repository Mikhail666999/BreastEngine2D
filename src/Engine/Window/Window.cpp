#include "Window.h"

sf::RenderWindow Window::m_window;

// Window
bool Window::Open( string name, int width, int height, bool resize )
{
	m_window.create( sf::VideoMode( width, height ), name, resize ? sf::Style::Default : sf::Style::Titlebar | sf::Style::Close );
	return true;
}

bool Window::Close()
{
	m_window.close();
	return true;
}

bool Window::IsOpen()
{
	return m_window.isOpen();
}


// Draw
template <class N>
bool Window::Draw( N n ) 
{
	m_window.draw( n.Draw() );
}

bool Window::Display()
{
	m_window.display();
	return true;
}

bool Window::Clear()
{
	m_window.clear();
	return true;
}


// Event
bool Window::PollEvent( sf::Event &e )
{
	return m_window.pollEvent( e );
}