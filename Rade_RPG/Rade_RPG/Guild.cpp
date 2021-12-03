#include "Guild.h"
#include <windows.h>


Guild::Guild()
{
	Char_Type[0] = '\0';
	Level = 0;
}

Guild::Guild(const char* n, int h, int mh, int m, int mm, int str, int dex, int a_int, int a, int d, int as, const char* ch, int l) : Unit(n, h, mh, m, mm, str, dex, a_int, a, d, as)
{
	
	strcpy(Char_Type, ch);
	Level = l;

}


Guild::~Guild()
{
}


