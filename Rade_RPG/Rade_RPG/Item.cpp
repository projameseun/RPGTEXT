#include "Item.h"
#include "Item.h"

//	Item(const char* n, const char* ch,int str, int dex , int a_int,int c,int s,int g, int l );

Item::Item()
{
	Name[128] = '\0';
	Char_Type[25] = '\0';
	Str = 0;
	Dex = 0;
	a_Int = 0;
	Cost = 0;
	Star = 0;
	Grade = 0;
	Level = 0;
}

Item::Item(const char* n, const char* ch, int str, int dex, int a_int, int c, int s, int g, int l)
{
	strcpy(Name, n);
	strcpy(Char_Type, ch);
	Str = str;
	Dex = dex;
	a_Int = a_int;
	Cost = c;
	Star = s;
	Grade = g;
	Level = l;
}



Item::~Item()
{
}

void Item::ItemNewSetting(vector<Item>*a_ItemList)
{
	//�����ۼ����ϴ°� 
	//Item Node; 
	//����



	
			Item Node("���", "����", 10, 0, 0, 1000, 5, 1, 1);
			a_ItemList->push_back(Node);
	
			Item Node2("�׶��콺", "����", 20, 0, 0, 2000, 5, 1, 5);
			a_ItemList->push_back(Node2);

			Item Node3("�Ϻ���", "����", 30, 0, 0, 3000, 5, 1, 10);
			a_ItemList->push_back(Node3);

			Item Node4("������������", "������", 0, 0, 10, 1000, 5, 1, 1);
			a_ItemList->push_back(Node4);

			Item Node5("����������", "������", 0, 0, 20, 2000, 5, 1, 5);
			a_ItemList->push_back(Node5);

			Item Node6("������������", "������", 0, 0, 30, 3000, 5, 1, 10);
			a_ItemList->push_back(Node6);

			Item Node7("���", "�ü�", 0, 10, 0, 1000, 5, 1, 1);
			a_ItemList->push_back(Node7);

			Item Node8("�������", "�ü�", 0, 20, 0, 2000, 5, 1, 5);
			a_ItemList->push_back(Node8);
			
			Item Node9("���������", "�ü�", 0, 10, 0, 3000, 5, 1, 10);
			a_ItemList->push_back(Node9);

			Item Node10("�⺻������", "����", 0, 0, 5, 1000, 5, 1, 1);
			a_ItemList->push_back(Node10);

			Item Node11("õ����������", "����", 0, 0, 15, 2000, 5, 1, 5);
			a_ItemList->push_back(Node11);

			Item Node12("����������", "����", 0, 0, 20, 3000, 5, 1, 10);
			a_ItemList->push_back(Node12);

			Item Node13("HP", "\0", 0, 0, 0, 1000, 0, 0, 0);
			a_ItemList->push_back(Node13);

			Item Node14("MP", "\0", 0, 0, 0, 1000, 0, 0, 0);
			a_ItemList->push_back(Node14);

			Item Node15("���ǽ���", "\0", 0, 0, 0, 0, 0, 0, 0);
			a_ItemList->push_back(Node15);

			Item Node16("�����ǹ���", "\0", 0, 0, 0, 0, 0, 0, 0);
			a_ItemList->push_back(Node16);

			Item Node17("�����ǰ�", "\0", 50, 0, 0, 0, 0, 0, 0);
			a_ItemList->push_back(Node17);

			Item Node18("����������", "\0", 0, 0, 50, 0, 0, 0, 0);
			a_ItemList->push_back(Node18);

			Item Node19("�巡����Ȱ", "\0", 0, 50, 0, 0, 0, 0, 0);
			a_ItemList->push_back(Node19);


	//strcpy(Node.Name, "�����ǰ�");
	//strcpy(Node.Char_Type, "����");
	////���潺 50�ø��� hp 1000
	//Node.Str = 50;
	//Node.Dex = 0;
	//Node.a_Int = 0;
	//Node.Cost = 0;
	//Node.Star = 0; //1~5
	//Node.Grade = 0;  //1~5
	//Node.Level = 0;

	////mp 1000 hp 500 
	//strcpy(Node.Name, "����������");
	//strcpy(Node.Char_Type, "\0");
	//Node.Str = 0;
	//Node.Dex = 0;
	//Node.a_Int = 50;
	//Node.Cost = 0;
	//Node.Star = 0; //1~5
	//Node.Grade = 0;  //1~5
	//Node.Level = 0;

	////hp600, att_speed 20
	//strcpy(Node.Name, "�巡����Ȱ");
	//strcpy(Node.Char_Type, "\0");
	//Node.Str = 0;
	//Node.Dex = 50;
	//Node.a_Int = 0;
	//Node.Cost = 0;
	//Node.Star = 0; //1~5
	//Node.Grade = 0;  //1~5
	//Node.Level = 0;




}
