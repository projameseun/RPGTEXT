#pragma once
#include "Pc.h"
#include <vector>

using namespace std;

class HallOf 
{
public:
	char Name[128];

public:
	HallOf();
	HallOf(const char *n);
	~HallOf();

public:
	
	static void HallPrint(vector<Pc>*a_PcList,vector<HallOf>*a_HallList, int log);
	static void HallADD(vector<HallOf>*a_HallList , vector<Pc>*a_PcList ,int log);
	static void HallSave(vector<Pc>*a_PcList,vector<HallOf>*a_HallList, int log);
	static void HallLoad(vector<Pc>*a_PcList, vector<HallOf>*a_HallList, int log);
};