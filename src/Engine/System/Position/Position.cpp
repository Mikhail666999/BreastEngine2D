#include "Position.h"

template<class N>
Position<N>::Position() 
{
	SetPosition( 0, 0 );
}

template<class N>
Position<N>::Position( N x, N y )
{
	SetPosition( x, y );
}

template<class N>
bool Position<N>::SetPosition( N x, N y )
{
	m_x = x;
	m_y = y;
	return true;
}

template<class N>
N Position<N>::GetX() 
{
	return m_x;
}

template<class N>
N Position<N>::GetY() 
{
	return m_y;
}