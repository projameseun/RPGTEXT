#pragma once
#include "Pc.h"

class Item
{
public:
	char Name[128];
	char Char_Type[25];
	int  Str;
	int  Dex;
	int  a_Int;
	int  Cost;
	int  Star;
	int  Grade;
	int  Level;
	//int num = 10;
public:
	Item();
	Item(const char* n, const char* ch,int str, int dex , int a_int,int c,int s,int g, int l );
	~Item();

public:
	static void ItemNewSetting(vector<Item>*a_ItemList);
};

