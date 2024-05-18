#ifndef __MSG_H_
#define __MSG_H_

#ifndef UNICODE
#define UNICODE
#define UNICODE_WAS_UNDEFINED
#endif

#include <windows.h>
#include <WinUser.h>
#include <tchar.h>
#include <string>

using std::string; 
using std::wstring;

string 			msg_text;
int 			msg_returnNum = 0;

bool MSG_ERROR_EXIT( const char* text );

#endif