#pragma once
#include "Pc.h"
#include "Interface.h"
#include <vector>

class Hall2
{
public:
	char Name[128];

public:
	Hall2();
	Hall2(const char *n);
	~Hall2();

public:
//	static void HallAdd(vector<Pc>*a_PcList,int log);
	static void HallPrint(vector<Pc>*a_PcList, vector<PcGuild>*a_PcGdList, vector<Hall2>*a_HallList, int log);
	static void HallSetting(vector<Hall2>*a_HallList);
};

