#pragma once
#include "Unit.h"

class Monster 
{
public:
	
	char m_Name[128];
	int m_Level;
	int m_Attack;
	int m_Defence ;
	int m_MaxHp;
	int m_Hp ;

public:
	Monster();
	Monster(const char* n, int l, int a, int d, int mh ,int h );
	~Monster();

	static void MonSetting(vector<Monster>*a_MonList);
};

