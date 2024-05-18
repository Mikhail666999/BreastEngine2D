#include <iostream>
#include <string>
#include <vector>
#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>

// #include <Windows.h>
// #include <WinUser.h>

using std::string;
using std::vector;
// using MessageBox;

#include "Engine/Engine.hpp"

int main()
{
	// Пример использования вывода ошибки UwU `System::MSG::ERROR_EXIT( "File was not found!" );`
    Window::Open( "My Engine", 600, 400, false );

	vector<Sprite> n;

    for ( int i : 10 )
    {
        // n[i].LoadTexture( "Assets/n.png" );
        // n[i].SetPosition( 10.f + i, 30.f + i );
        std::cout << i << std::endl;
    }


	// n.LoadTexture( "Assets/n.png" );

    // sf::CircleShape shape(200.f);
    // shape.setFillColor(sf::Color::Green);
    while ( Window::IsOpen() )
    {

        Event::Update();

        Window::Clear();
        // for ( size_t i : n )
        // {
        //     Window::Draw( n[i] );
        // }
        Window::Display();
    }

    return 0;
}
