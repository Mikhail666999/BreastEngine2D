#ifndef __SPRITE_H_
#define __SPRITE_H_

using System::Position;

class Sprite
{
private:
	sf::Texture m_texture;
	sf::Sprite  m_sprite;
	string      m_path;
	Position<float>	m_position;
	
public:
	Sprite() = default;
	Sprite( string path );

	bool		SetPosition( Position<float> pos );
	bool		SetPosition( float x, float y );
	bool 		LoadTexture( string path );
	string 		GetPath();
    sf::Sprite 	Draw();
};

#endif 