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
		StrUp = 100, //���ø��� ���Ϳ˾� ���� 10�̿ö󰣴�
		Rush, //���� 3�ϵ��� ü�� 1000, �� 10 ,���ݷ� 10

		UpBullet,// ���ν�� ���������� 50��
		DefIgnore, //����ź �����ϰ� ������ �Ѹ� 200

		FireBall, //�������� 100��
		FireArrow, //�Ѹ� 150
		Meteo, //�������� 200��
		Onegiok, //�������� 500

		Hill, //�ǰ����� ������� 100
		EverHill, //������ ���� 50��
		PfHill,//������
		Revive,// �һ� ������ �Ѹ�һ� �һ��Ȼ�� Ǯ�� �ٽ���

		AtSpeed, //�������� ����10���� ���ϵ��� ������
		SuAtSpeed, //���Ǽӵ� ���� 50���� ü��500 ���Ǽӵ�

		Dark, //��� ���ϵ��� ���ݷ� 0���� ���� ��������
		DarkKnight, //���ϵ��� ��10 ����5 �� ��������
		GrimReaper,//���»��� �Ѹ����� ���� boss�� �Ұ���
		BlackHoll,//�������� 450 �Ѹ� ������ ���� ���������� �Ұ��� �ٸ������°���
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
		strcpy(Name, n); //���̵� ��� ��
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

