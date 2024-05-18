#ifndef __POSITION_H_
#define __POSITION_H_

template<class N>
class Position
{
private:
	N m_x = 0, m_y = 0;

public: 
	Position();
	Position( N x, N y );
	bool		SetPosition( N x, N y );
	Position	GetPosition();
	N			GetX();
	N			GetY();
};

#endif