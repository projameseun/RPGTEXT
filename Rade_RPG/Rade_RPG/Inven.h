#pragma once
#include "Pc.h"
#include "PcGuild.h"
#include "Item.h"
#include <vector>

class Inven : public Item
{
public:
	Inven();
	Inven(const char* n, const char* ch, int str, int dex, int a_int, int c, int s, int g, int l);
	~Inven();

	static void InvenPrint(vector<Pc> *a_PcList, vector<PcGuild> *a_PcGdList, vector<Inven> *a_InList, int login);
	static void InvenItem(vector<Item> *a_ItemList, vector<Inven> *a_InList, int by_idx);
	static void InvenList(vector<Inven>*a_List);
	static void ItemUpGrade(vector<Inven> *a_InList, vector<Pc> *a_PcList, vector<PcGuild>*a_PcGdList,int log,
		void(*Up_Func)(vector<Inven> *a_InList, vector<Pc> *a_PcList, vector<PcGuild>*a_PcGdList, int));

	static void LevelUp(vector<Inven> *a_InList, vector<Pc> *a_PcList, vector<PcGuild>*a_PcGdList ,int log);
	static void StarUp(vector<Inven> *a_InList, vector<Pc> *a_PcList, vector<PcGuild>*a_PcGdList ,int log);
	static void GradeUp(vector<Inven> *a_InList, vector<Pc> *a_PcList, vector<PcGuild>*a_PcGdList ,int log);

};

