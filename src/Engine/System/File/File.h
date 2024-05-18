#ifndef __FILE_H_
#define __FILE_H_

#include <fstream>


using std::fstream; 
using std::string;

class File
{
private:
	std::fstream m_file;

public:
	File() = default;
	File( string path );
	~File();

	bool Open( string path );
	bool Close();

	bool AddLine( string line );
};

#endif