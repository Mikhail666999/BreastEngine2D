#include "Window.h"

sf::RenderWindow Window::m_window;

bool Window::Open(string name, int width, int height) {
	m_window.create(sf::VideoMode(width, height), name);
	return true;
}

bool Window::Close() {
	m_window.close();
	return true;
}

bool Window::IsOpen() {
	return m_window.isOpen();
}

bool Window::Display() {
	m_window.display();
	return true;
}

bool Window::Clear() {
	m_window.clear();
	return true;
}

bool Window::PollEvent(sf::Event &e) {
	return m_window.pollEvent(e);
}