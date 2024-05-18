#include "Sprite.h"

Sprite::Sprite( string path )
{
	LoadTexture( path );
}

bool Sprite::LoadTexture( string path ) 
{
	m_path = path;
	if ( !m_texture.loadFromFile( m_path ) ) 
	{
		return false;
	}
	m_sprite.setTexture( m_texture );
	return true;
}

string Sprite::GetPath()
{
	return m_path;
}

sf::Sprite Sprite::Draw() 
{
	return m_sprite;
}

bool Sprite::SetPosition( Position<float> pos )
{
	m_position.SetPosition( pos.GetX(), pos.GetY() );
	return true;
}

bool Sprite::SetPosition( float x, float y ) 
{
	m_position.SetPosition( x, y );
}