#pragma once
#include "Guild.h"

class PcGuild : public Unit
{


public:
	char Char_Type[25];
	int  Level;
public:
	PcGuild();
	//Unit(const char* n, int h, int mh, int m, int mm, int str, int dex ,int a_int,int a,int d,int as)
	PcGuild(const char* n, int h, int mh, int m, int mm, int str, int dex, int a_int, int a, int d, int as, const char* ch, int l);
	~PcGuild();
public:

	static void PcGdPrintList(vector<PcGuild> *a_PcGdList, vector<Pc> *a_PcList);

};

