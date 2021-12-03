#pragma once
#include "Pc.h"
#include "Guild.h"
#include "PcGuild.h"

class UI
{
public:
	UI();
	~UI();

public:
	static void UIStart(vector<Pc> *a_PcList);
	static void UIInven(vector<Pc> *a_PcList, vector<Guild> *a_GdList);
	
		
};

