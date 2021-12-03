#pragma once
#include "Unit.h"
#include <Windows.h>


class Pc : public  Unit//Playerchar
{



	
public:
	static int Gold;
	
public:
	char Char_Type[25];
	int  Level;
public:
	Pc();
	//Unit(const char* n, int h, int mh, int m, int mm, int str, int dex ,int a_int,int a,int d,int as)
	Pc(const char* n, int h, int mh, int m, int mm, int str, int dex, int a_int, int a, int d, int as, const char* ch, int l, int g);
	~Pc();	

public:
	static void PcNewAdd(vector<Pc> *a_PcList);
	static void PcPrintList(vector<Pc> *a_PcList);
	static void gotoxy2(int x, int y);
	static void PcCheck(vector<Pc> *a_PcList, int& log); //아이디체크부분
	static void CursorView(char show);;//커서숨기기


};

