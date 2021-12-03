#pragma once
//#include "Guild.h"
#include "HallOf.h"
#include "Pc.h"
#include "PcGuild.h"
#include "Inven.h"
#include "Item.h"
#include "Monster.h"
#include "Battle.h"



class Interface : public Unit
{
public:
	Interface();
	~Interface();
public:

	static void Save(vector<Pc> *a_PcList, vector<PcGuild>*a_PcGdList,vector<Inven> *a_InItemList, int log);
	static void Load(vector<Pc> *a_PcList, vector<PcGuild>*a_PcGdList,vector<Inven> *a_InItemList, int log);
};

