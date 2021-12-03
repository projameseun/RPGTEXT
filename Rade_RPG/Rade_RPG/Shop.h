#pragma once
#include "Pc.h"
#include "Item.h"
#include "PcGuild.h"
#include "Inven.h"

class Shop
{
public:
	Shop();

	~Shop();

public:
	static void ShopInfo(vector<Pc> *a_PcList, vector<PcGuild> *a_PcGdList, vector<Item> *a_ItemList,vector<Inven>*a_InList, int login);
};

