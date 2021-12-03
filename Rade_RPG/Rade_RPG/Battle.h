#pragma once
#include "Interface.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include "HallOf.h"
class Battle
{
public:

	static bool p_attack ;
	static bool p2_attack;
	static bool p3_attack;
	static bool p4_attack ;

	static bool e_attack;
	static bool e_attack2;
	static bool e_attack3;
public:
	Battle();
	~Battle();

public:

	static void BattleStart(vector<Pc>*a_PcList, vector<PcGuild>*a_PcGdList, vector<Monster>*a_MonList, vector<HallOf>*HallList,int log);

	static void PlayerstagePrint(vector<Pc>*a_PcList, vector<PcGuild>*a_PcGdList,vector<Monster> *a_MonList,
		int log, int x, int y, int p_ran, int e_ran);
	static void EnemystatgePrint(vector<Pc>*a_PcList, vector<PcGuild>*a_PcGdList,vector<Monster> *a_MonList,
		int log, int x, int y, int p_ran, int e_ran);


	static  void PlayerAttPrint(vector<Pc>*a_PcList, vector<PcGuild>*a_PcGdList, vector<Monster> *a_MonList,int log ,int x, int y, int p_ran, int e_ran);
	static void EnemyAttPrint(vector<Pc>*a_PcList, vector<PcGuild>*a_PcGdList, vector<Monster> *a_MonList, int log,int x, int y, int p_ran, int e_ran);
};

void MapPrint();

