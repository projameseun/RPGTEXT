#pragma once
#include <stdio.h>
#include <vector>
#pragma warning(disable:4996)

using namespace std;

class Unit
{
protected:

	enum Skill
	{
		Default=-10,
		StrUp = 100, //힘올리기 한터옹안 힘이 10이올라간다
		Rush, //폭주 3턴동안 체력 1000, 힘 10 ,공격력 10

		UpBullet,// 위로쏘기 광역데미지 50씩
		DefIgnore, //직격탄 방어무시하고 데미지 한명만 200

		FireBall, //광역ㅇ로 100씩
		FireArrow, //한명만 150
		Meteo, //광역으로 200식
		Onegiok, //광역으로 500

		Hill, //피가없는 사람한테 100
		EverHill, //광역힐 광역 50힐
		PfHill,//퍼펙힐
		Revive,// 소생 전투중 한명소생 소생된사람 풀로 다시참

		AtSpeed, //공속증가 공속10증가 한턴동안 빠르게
		SuAtSpeed, //신의속도 공속 50증가 체력500 신의속도

		Dark, //어둠 한턴동안 공격력 0으로 만듬 무데미지
		DarkKnight, //한턴동안 힘10 공속5 로 데미지줌
		GrimReaper,//저승사자 한명무조건 죽음 boss는 불가능
		BlackHoll,//광역으로 450 한명 무조건 죽음 최종보스는 불가능 다른보스는가능
	};
public:
	char Name[128]; 
	int  Hp;
	int  Max_Hp;
	int  Mp;
	int  Max_Mp;
	int  Str;
	int  Dex;
	int  INT;
	int  Attack;
	int  Deffence;
	int  Att_Speed;
	//int  Skill;

	

public:
	Unit();
	Unit(const char* n, int h, int mh, int m, int mm, int str, int dex ,int a_int,int a,int d,int as)
	{
		strcpy(Name, n); //아이디 고블린 등
		Max_Hp = mh;
		Hp = Max_Hp;
		Max_Mp = mm;
		Mp = Max_Mp;
		Str = str;
		Dex = dex;
		INT = a_int;
		Attack = a;
		Deffence = d;
		Att_Speed = as;
	//	Skill = s;
		
	}
	~Unit();

};

