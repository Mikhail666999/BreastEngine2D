#ifndef _WINDOW_H_
#define _WINDOW_H_


class Window
{
private:
	static sf::RenderWindow m_window;

public:
	static bool Open(string name, int width, int height);
	static bool Close();
	static bool IsOpen();
	static bool Display();
	static bool Clear();
	static bool PollEvent(sf::Event &e);
};

#endif