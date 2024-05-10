#include <string>
#include <SFML/Graphics.hpp>

using std::string;

#include "Engine/Engine.hpp"

int main() {
	Window::Open("My Engine", 600, 400);
	
	// sf::CircleShape shape(200.f);
	// shape.setFillColor(sf::Color::Green);
	while (Window::IsOpen()) {
		Event::Update();

		Window::Clear();
		// window.draw(shape);
		Window::Display();
	}

	return 0;
}