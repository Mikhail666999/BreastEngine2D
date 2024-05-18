#include "File.h"

File::File( string path )
{
}

bool File::Open( string path )
{
	m_file.open( path );
	if ( !m_file.is_open() )
	{
		// MSG_ERROR_EXIT( "Failed was not found path '%s'", path );
		// MSG_ERROR_EXIT( "Failed was not found path" );
		return false;
	}
    return true;
}

bool File::Close() 
{
	return true;
}