#include "Pc.h"
#include <string>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>

enum KeyBoard
{
	Enter = 13,
	BackSpace = 8,
	ESC = 27,
	UP = 72,
	DOWN = 80,
	LEFT = 75,
	RIGHT = 77,
};

void Pc::gotoxy2(int x, int y)
{
	COORD Pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);  //<--#include <windows.h> 
}


void Pc::CursorView(char show)//Ŀ�������
{
	HANDLE hConsole;
	CONSOLE_CURSOR_INFO ConsoleCursor;

	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	ConsoleCursor.bVisible = show;
	ConsoleCursor.dwSize = 1;

	SetConsoleCursorInfo(hConsole, &ConsoleCursor);
}



Pc::Pc()
{
	Char_Type[0] = '\0';
	Level = 0;
	Gold = 0;

}

Pc::Pc(const char* n, int h, int mh, int m, int mm, int str, int dex, int a_int, int a, int d, int as, const char* ch, int l, int g) : Unit(n, h, mh, m, mm, str, dex, a_int, a, d, as)
{
	strcpy(Char_Type, ch);
	Level = l;
	Gold = g;


}

Pc::~Pc()
{
}

int Pc::Gold = 0;

void Pc::PcNewAdd(vector<Pc> *a_PcList)
{
	//gotoxy2
	//const char* n, int h, int mh, int m, int mm, int str, int dex, int a_int, int a, int d, int as, const char* ch, int l, int g
	//�����ϴ°� 
	CursorView(0);

	int xx = 0;
	int yy = 0;
	while (true)
	{
		xx = 0;
		yy = 0;
		printf("<�����ϱ�>");
		
		yy++;

		gotoxy2(xx, yy);
		printf("����������������������������������������������������������������������������������������������������������������������������������������������������������������");

		yy += 5;
		xx += 60;
		gotoxy2(xx, yy);
		printf("���Ͻô� ������ ��ȣ�� �Է����ּ���\n");




		yy += 15;
		xx = 17;

		gotoxy2(xx, yy);
		printf("            �� \t                      ��\t                    ��\t                           ��");
		yy++;
		gotoxy2(xx, yy);
		printf("������������������������\t  ������������������������\t������������������������\t������������������������");


		yy++;
		//xx++;
		gotoxy2(xx, yy);
		printf("������:����           ��\t  ������:�ü�           ��\t������:������         ��\t������:����           ��");



		yy++;
		gotoxy2(xx, yy);
		printf("��ü��:500 ����:10    ��\t  ��ü��:350 ����:10    ��\t��ü��:300 ����:100   ��\t��ü��:250 ����:100   ��");

		yy++;
		gotoxy2(xx, yy);
		printf("������:30  ���:50    ��\t  ������:15  ���:10    ��\t������:5   ���:5     ��\t������:4   ���:2     ��");

		yy++;
		gotoxy2(xx, yy);
		printf("������:1   ����:1     ��\t  ������:2   ����:1     ��\t������:1   ����:1     ��\t������:1    ����:1    ��");

		yy++;
		gotoxy2(xx, yy);
		printf("����:5 ��ø:0 ����:0  ��\t  ����:0 ��ø:5 ����:0  ��\t����:0 ��ø:0 ����:10 ��\t����:0 ��ø:0 ����:10 ��");

		yy++;
		gotoxy2(xx, yy);
		printf("������������������������\t  ������������������������\t������������������������\t������������������������");
		yy++;


		int a_Sel = 0;
		yy += 5;
		xx += 60;
		gotoxy2(xx, yy);
		scanf("%d", &a_Sel);
		getchar();

		if (a_Sel < 0 || a_Sel > 4)
		{
			continue;
		}
		//��ų�����߿� 
		if (a_Sel == 1) //����
		{
			system("cls");

			xx = 0;
			yy = 0;


			printf("<�����ϱ�>");

			yy++;

			gotoxy2(xx, yy);
			printf("����������������������������������������������������������������������������������������������������������������������������������������������������������������");

			yy += 5;
			xx += 60;
			gotoxy2(xx, yy);
			printf("�̸�(���̵�)�� �Է����ּ���\n");
				char a_Name[128];
				yy += 5;
				xx += 5;
				gotoxy2(xx, yy);
				scanf("%s", a_Name);
				getchar();		
				
				//�Ϻη� �����ε� �̿�
				Pc Node(a_Name, 0, 500, 0, 10, 5, 0, 0, 30, 50, 1,"����",1, 10000);

				a_PcList->push_back(Node);
			//	//save ���� 
				//getchar();
				break; 

		}
		else if (a_Sel == 2)//�ü�
		{

			system("cls");

			xx = 0;
			yy = 0;


			printf("<�����ϱ�>");

			yy++;

			gotoxy2(xx, yy);
			printf("����������������������������������������������������������������������������������������������������������������������������������������������������������������");

			yy += 5;
			xx += 60;
			gotoxy2(xx, yy);
			printf("�̸�(���̵�)�� �Է����ּ���\n");
				char a_Name[128];
				yy += 5;
				xx += 5;
				gotoxy2(xx, yy);
				scanf("%s", a_Name);
				getchar();

				//�Ϻη� �����ε� �̿�
				Pc Node2(a_Name, 0, 350, 0, 10, 0, 5, 0, 30, 10, 2, "�ü�", 1, 10000);

				a_PcList->push_back(Node2);
				break;
		}//else if (a_Sel == 2)//�ü�
		else if (a_Sel == 3) //������
		{
			system("cls");

			xx = 0;
			yy = 0;


			printf("<�����ϱ�>");

			yy++;

			gotoxy2(xx, yy);
			printf("����������������������������������������������������������������������������������������������������������������������������������������������������������������");

			yy += 5;
			xx += 60;
			gotoxy2(xx, yy);
			printf("�̸�(���̵�)�� �Է����ּ���\n");
				char a_Name[128];
				yy += 5;
				xx += 5;
				gotoxy2(xx, yy);
				scanf("%s", a_Name);
				getchar();

				//�Ϻη� �����ε� �̿�
				Pc Node3(a_Name, 0, 300, 0, 100, 0, 0, 10, 40, 5, 1, "������", 1, 10000);

				a_PcList->push_back(Node3);
				
				break;
			//getchar();
		}//else if (a_Sel == 3) //������
		else if (a_Sel == 4) //����
		{
			system("cls");

			xx = 0;
			yy = 0;


			printf("<�����ϱ�>");

			yy++;

			gotoxy2(xx, yy);
			printf("����������������������������������������������������������������������������������������������������������������������������������������������������������������");

			yy += 5;
			xx += 60;
			gotoxy2(xx, yy);
			printf("�̸�(���̵�)�� �Է����ּ���\n");
				char a_Name[128];
				yy += 5;
				xx += 5;
				gotoxy2(xx, yy);
				scanf("%s", a_Name);
				getchar();

				//�Ϻη� �����ε� �̿�
				Pc Node4(a_Name, 0, 250, 0, 100, 0, 0, 10, 30, 2, 1, "����", 1, 10000);

				a_PcList->push_back(Node4);
				break;
		}//else if (a_Sel == 4) //����

		Sleep(500);

		getchar();
	}




	//�����ϴ°� 
	//if (a_sel < 1 || a_sel > 4)
	//{
	//	printf("��ȣ�� ����� �������ּ���\n");
	//	getchar();
	//	return;
	//}
	//if (a_sel == 1) //����
	//{
	//	printf("�̸���(���̵�) �Է����ּ���");
	//	char a_Name[128];
	//	scanf("%s", a_Name);
	//	getchar();		
	//	
	//	//�Ϻη� �����ε� �̿�
	//	Pc Node(a_Name, 0, 500, 0, 10, 5, 0, 0, 30, 50, 1,"����",1, 10000);

	//	a_PcList->push_back(Node);
	//	//save ���� 

	//	
	//}//	if (a_sel == 1) //����

	////const char* n, int h, int mh, int m, int mm, int str, int dex, int a_int, int a, int d, int as, const char* ch, int l, int g
	//else if (a_sel == 2) //�ü�
	//{
	//	printf("�̸���(���̵�) �Է����ּ���");
	//	char a_Name[128];
	//	scanf("%s", a_Name);
	//	getchar();

	//	//�Ϻη� �����ε� �̿�
	//	Pc Node2(a_Name, 0, 350, 0, 10, 0, 5, 0, 15, 10, 2, "�ü�", 1, 10000);

	//	a_PcList->push_back(Node2);
	//}//	else if (a_sel == 2) //�ü�
	//else if (a_sel == 3) //������
	//{
	//	printf("�̸���(���̵�) �Է����ּ���");
	//	char a_Name[128];
	//	scanf("%s", a_Name);
	//	getchar();

	//	//�Ϻη� �����ε� �̿�
	//	Pc Node3(a_Name, 0, 300, 0, 100, 0, 0, 10, 5, 5, 1, "������", 1, 10000);

	//	a_PcList->push_back(Node3);
	//}//else if (a_sel == 3) //������
	//else if (a_sel == 4) //����
	//{
	//	printf("�̸���(���̵�) �Է����ּ���");
	//	char a_Name[128];
	//	scanf("%s", a_Name);
	//	getchar();

	//	//�Ϻη� �����ε� �̿�
	//	Pc Node4(a_Name, 0, 250, 0, 100, 0, 0, 10, 4, 2, 1, "����", 1, 10000);

	//	a_PcList->push_back(Node4);
	//}

	
	
}

void Pc::PcPrintList(vector<Pc> *a_PcList)
{
	printf("<�÷��̾�>\n");
	for (int i = 0; i < a_PcList->size(); i++)
	{
		printf("�̸�:%s ����:%s ü��:%d ����:%d ����:%d ��:%d ����:%d ��ø:%d\n",
			(*a_PcList)[i].Name, (*a_PcList)[i].Char_Type, (*a_PcList)[i].Max_Hp, (*a_PcList)[i].Max_Mp, (*a_PcList)[i].Att_Speed,
			(*a_PcList)[i].Str, (*a_PcList)[i].INT, (*a_PcList)[i].Dex);
	}

	printf("\n");
}


void Pc::PcCheck(vector<Pc> *a_PcList,int &log)
{
	printf("�̸��� �Է����ּ���\n");
	char Id[25];
	scanf("%s", Id);
	getchar();

	for (int i = 0; i < a_PcList->size(); i++)
	{
		if (strcmp(Id, (*a_PcList)[i].Name) == 0)
		{
			printf("%s�� ȯ���մϴ�\n",(*a_PcList)[i].Name);
			log = i;
			break;
		}
		
	}

	
}
