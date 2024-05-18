#ifndef __WINDOW_H_
#define __WINDOW_H_

class Window
{
private:
    static sf::RenderWindow m_window;
    // string x = "asdf";

public:
	// Window
    static bool Open( string name, int width, int height, bool resize );
    static bool Close();
    static bool IsOpen();

	// Draw
	template <class N>
	static bool Draw( N n );
    static bool Display();
    static bool Clear();

	// Event
    static bool PollEvent( sf::Event &e );
};

#endif