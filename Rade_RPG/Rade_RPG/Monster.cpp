#include "Monster.h"



Monster::Monster()
{
	m_Name[0] = '\0';
	m_Level = 0;
	m_Attack = 0;
	m_Defence = 0;
	m_MaxHp = 0;
	m_Hp = 0;

}


Monster::Monster(const char* n, int l , int a, int d, int mh, int h)
{	
	strcpy(m_Name, n);
	
	m_Level = l;
	m_Attack = a;
	m_Defence = d;
	m_MaxHp = mh;
	m_Hp = h;

}


Monster::~Monster()
{
}


void Monster::MonSetting(vector<Monster>*a_MonList)
{
	Monster Node;
	strcpy(Node.m_Name, "고블린1");
	Node.m_Level = 1;
	Node.m_Attack = 50;
	Node.m_Defence = 10;
	Node.m_MaxHp = 50;
	Node.m_Hp = Node.m_MaxHp;

	a_MonList->push_back(Node);

	strcpy(Node.m_Name, "고블린2");
	Node.m_Level = 1;
	Node.m_Attack = 50;
	Node.m_Defence = 10;
	Node.m_MaxHp = 50;
	Node.m_Hp = Node.m_MaxHp;

	a_MonList->push_back(Node);

	strcpy(Node.m_Name, "고블린3");
	Node.m_Level = 1;
	Node.m_Attack = 50;
	Node.m_Defence = 10;
	Node.m_MaxHp = 50;
	Node.m_Hp = Node.m_MaxHp;

	a_MonList->push_back(Node);


	strcpy(Node.m_Name, "오우거");
	Node.m_Level = 10;
	Node.m_Attack = 500;
	Node.m_Defence = 50;
	Node.m_MaxHp = 500;
	Node.m_Hp = Node.m_MaxHp;

	a_MonList->push_back(Node);

	strcpy(Node.m_Name, "언데드1");
	Node.m_Level = 10;
	Node.m_Attack = 450;
	Node.m_Defence = 20;
	Node.m_MaxHp = 400;
	Node.m_Hp = Node.m_MaxHp;

	a_MonList->push_back(Node);

	strcpy(Node.m_Name, "언데드2");
	Node.m_Level = 10;
	Node.m_Attack = 450;
	Node.m_Defence = 20;
	Node.m_MaxHp = 400;
	Node.m_Hp = Node.m_MaxHp;

	strcpy(Node.m_Name, "언데드3");
	Node.m_Level = 10;
	Node.m_Attack = 450;
	Node.m_Defence = 20;
	Node.m_MaxHp = 400;
	Node.m_Hp = Node.m_MaxHp;

	strcpy(Node.m_Name, "암흑의기사");
	Node.m_Level = 20;
	Node.m_Attack = 750;
	Node.m_Defence = 100;
	Node.m_MaxHp = 2000;
	Node.m_Hp = Node.m_MaxHp;

	a_MonList->push_back(Node);

	strcpy(Node.m_Name, "어둠의법사");
	Node.m_Level = 25;
	Node.m_Attack = 600;
	Node.m_Defence = 20;
	Node.m_MaxHp = 1000;
	Node.m_Hp = Node.m_MaxHp;

	a_MonList->push_back(Node);

	strcpy(Node.m_Name, "드래곤");
	Node.m_Level = 100;
	Node.m_Attack = 10000;
	Node.m_Defence = 10000;
	Node.m_MaxHp = 10000;
	Node.m_Hp = Node.m_MaxHp;

	a_MonList->push_back(Node);



}

