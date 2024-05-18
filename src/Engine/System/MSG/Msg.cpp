#include "Msg.h"

bool MSG_ERROR_EXIT( const char* text )
{
	msg_text = text;
	// wstring wtext( text, text + strlen( text ) );
	msg_returnNum = MessageBox( nullptr, _T(text), nullptr, MB_OK );
	printf( "%s\n", msg_text );
	exit( 1 );
	return true;
}