#pragma once
#include "Unit.h"
#include "Pc.h"
#include "PcGuild.h"

using namespace std;

class Guild :public Unit
{
public:
	char Char_Type[25];
	int  Level;
public:
	Guild();
	//Unit(const char* n, int h, int mh, int m, int mm, int str, int dex ,int a_int,int a,int d,int as)
	Guild(const char* n, int h, int mh, int m, int mm, int str, int dex, int a_int, int a, int d, int as, const char* ch, int l);
	~Guild();

public:
	
	//static void GdPrintList(vector<PcGuild> *a_PcGdList, vector<Pc> *a_PcList);
	static void GuildNewAdd(vector<Guild> *a_GdList, vector<Pc> *a_PcLit);
};

