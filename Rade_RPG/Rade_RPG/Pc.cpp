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


void Pc::CursorView(char show)//커서숨기기
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
	//셋팅하는곳 
	CursorView(0);

	int xx = 0;
	int yy = 0;
	while (true)
	{
		xx = 0;
		yy = 0;
		printf("<가입하기>");
		
		yy++;

		gotoxy2(xx, yy);
		printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━");

		yy += 5;
		xx += 60;
		gotoxy2(xx, yy);
		printf("원하시는 직업의 번호를 입력해주세요\n");




		yy += 15;
		xx = 17;

		gotoxy2(xx, yy);
		printf("            ① \t                      ②\t                    ③\t                           ④");
		yy++;
		gotoxy2(xx, yy);
		printf("┏━━━━━━━━━━┓\t  ┏━━━━━━━━━━┓\t┏━━━━━━━━━━┓\t┏━━━━━━━━━━┓");


		yy++;
		//xx++;
		gotoxy2(xx, yy);
		printf("┃직업:전사           ┃\t  ┃직업:궁수           ┃\t┃직업:마법사         ┃\t┃직업:사제           ┃");



		yy++;
		gotoxy2(xx, yy);
		printf("┃체력:500 마나:10    ┃\t  ┃체력:350 마나:10    ┃\t┃체력:300 마나:100   ┃\t┃체력:250 마나:100   ┃");

		yy++;
		gotoxy2(xx, yy);
		printf("┃공격:30  방어:50    ┃\t  ┃공격:15  방어:10    ┃\t┃공격:5   방어:5     ┃\t┃공격:4   방어:2     ┃");

		yy++;
		gotoxy2(xx, yy);
		printf("┃공속:1   레벨:1     ┃\t  ┃공속:2   레벨:1     ┃\t┃공속:1   레벨:1     ┃\t┃공속:1    레벨:1    ┃");

		yy++;
		gotoxy2(xx, yy);
		printf("┃힘:5 민첩:0 지능:0  ┃\t  ┃힘:0 민첩:5 지능:0  ┃\t┃힘:0 민첩:0 지능:10 ┃\t┃힘:0 민첩:0 지능:10 ┃");

		yy++;
		gotoxy2(xx, yy);
		printf("┗━━━━━━━━━━┛\t  ┗━━━━━━━━━━┛\t┗━━━━━━━━━━┛\t┗━━━━━━━━━━┛");
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
		//스킬은나중에 
		if (a_Sel == 1) //전사
		{
			system("cls");

			xx = 0;
			yy = 0;


			printf("<가입하기>");

			yy++;

			gotoxy2(xx, yy);
			printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━");

			yy += 5;
			xx += 60;
			gotoxy2(xx, yy);
			printf("이름(아이디)을 입력해주세요\n");
				char a_Name[128];
				yy += 5;
				xx += 5;
				gotoxy2(xx, yy);
				scanf("%s", a_Name);
				getchar();		
				
				//일부로 오버로딩 이용
				Pc Node(a_Name, 0, 500, 0, 10, 5, 0, 0, 30, 50, 1,"전사",1, 10000);

				a_PcList->push_back(Node);
			//	//save 구현 
				//getchar();
				break; 

		}
		else if (a_Sel == 2)//궁수
		{

			system("cls");

			xx = 0;
			yy = 0;


			printf("<가입하기>");

			yy++;

			gotoxy2(xx, yy);
			printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━");

			yy += 5;
			xx += 60;
			gotoxy2(xx, yy);
			printf("이름(아이디)을 입력해주세요\n");
				char a_Name[128];
				yy += 5;
				xx += 5;
				gotoxy2(xx, yy);
				scanf("%s", a_Name);
				getchar();

				//일부로 오버로딩 이용
				Pc Node2(a_Name, 0, 350, 0, 10, 0, 5, 0, 30, 10, 2, "궁수", 1, 10000);

				a_PcList->push_back(Node2);
				break;
		}//else if (a_Sel == 2)//궁수
		else if (a_Sel == 3) //마법사
		{
			system("cls");

			xx = 0;
			yy = 0;


			printf("<가입하기>");

			yy++;

			gotoxy2(xx, yy);
			printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━");

			yy += 5;
			xx += 60;
			gotoxy2(xx, yy);
			printf("이름(아이디)을 입력해주세요\n");
				char a_Name[128];
				yy += 5;
				xx += 5;
				gotoxy2(xx, yy);
				scanf("%s", a_Name);
				getchar();

				//일부로 오버로딩 이용
				Pc Node3(a_Name, 0, 300, 0, 100, 0, 0, 10, 40, 5, 1, "마법사", 1, 10000);

				a_PcList->push_back(Node3);
				
				break;
			//getchar();
		}//else if (a_Sel == 3) //마법사
		else if (a_Sel == 4) //사제
		{
			system("cls");

			xx = 0;
			yy = 0;


			printf("<가입하기>");

			yy++;

			gotoxy2(xx, yy);
			printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━");

			yy += 5;
			xx += 60;
			gotoxy2(xx, yy);
			printf("이름(아이디)을 입력해주세요\n");
				char a_Name[128];
				yy += 5;
				xx += 5;
				gotoxy2(xx, yy);
				scanf("%s", a_Name);
				getchar();

				//일부로 오버로딩 이용
				Pc Node4(a_Name, 0, 250, 0, 100, 0, 0, 10, 30, 2, 1, "사제", 1, 10000);

				a_PcList->push_back(Node4);
				break;
		}//else if (a_Sel == 4) //사제

		Sleep(500);

		getchar();
	}




	//셋팅하는곳 
	//if (a_sel < 1 || a_sel > 4)
	//{
	//	printf("번호를 제대로 선택해주세요\n");
	//	getchar();
	//	return;
	//}
	//if (a_sel == 1) //전사
	//{
	//	printf("이름을(아이디) 입력해주세요");
	//	char a_Name[128];
	//	scanf("%s", a_Name);
	//	getchar();		
	//	
	//	//일부로 오버로딩 이용
	//	Pc Node(a_Name, 0, 500, 0, 10, 5, 0, 0, 30, 50, 1,"전사",1, 10000);

	//	a_PcList->push_back(Node);
	//	//save 구현 

	//	
	//}//	if (a_sel == 1) //전사

	////const char* n, int h, int mh, int m, int mm, int str, int dex, int a_int, int a, int d, int as, const char* ch, int l, int g
	//else if (a_sel == 2) //궁수
	//{
	//	printf("이름을(아이디) 입력해주세요");
	//	char a_Name[128];
	//	scanf("%s", a_Name);
	//	getchar();

	//	//일부로 오버로딩 이용
	//	Pc Node2(a_Name, 0, 350, 0, 10, 0, 5, 0, 15, 10, 2, "궁수", 1, 10000);

	//	a_PcList->push_back(Node2);
	//}//	else if (a_sel == 2) //궁수
	//else if (a_sel == 3) //마법사
	//{
	//	printf("이름을(아이디) 입력해주세요");
	//	char a_Name[128];
	//	scanf("%s", a_Name);
	//	getchar();

	//	//일부로 오버로딩 이용
	//	Pc Node3(a_Name, 0, 300, 0, 100, 0, 0, 10, 5, 5, 1, "마법사", 1, 10000);

	//	a_PcList->push_back(Node3);
	//}//else if (a_sel == 3) //마법사
	//else if (a_sel == 4) //사제
	//{
	//	printf("이름을(아이디) 입력해주세요");
	//	char a_Name[128];
	//	scanf("%s", a_Name);
	//	getchar();

	//	//일부로 오버로딩 이용
	//	Pc Node4(a_Name, 0, 250, 0, 100, 0, 0, 10, 4, 2, 1, "사제", 1, 10000);

	//	a_PcList->push_back(Node4);
	//}

	
	
}

void Pc::PcPrintList(vector<Pc> *a_PcList)
{
	printf("<플레이어>\n");
	for (int i = 0; i < a_PcList->size(); i++)
	{
		printf("이름:%s 직업:%s 체력:%d 마나:%d 공속:%d 힘:%d 지능:%d 민첩:%d\n",
			(*a_PcList)[i].Name, (*a_PcList)[i].Char_Type, (*a_PcList)[i].Max_Hp, (*a_PcList)[i].Max_Mp, (*a_PcList)[i].Att_Speed,
			(*a_PcList)[i].Str, (*a_PcList)[i].INT, (*a_PcList)[i].Dex);
	}

	printf("\n");
}


void Pc::PcCheck(vector<Pc> *a_PcList,int &log)
{
	printf("이름을 입력해주세요\n");
	char Id[25];
	scanf("%s", Id);
	getchar();

	for (int i = 0; i < a_PcList->size(); i++)
	{
		if (strcmp(Id, (*a_PcList)[i].Name) == 0)
		{
			printf("%s님 환영합니다\n",(*a_PcList)[i].Name);
			log = i;
			break;
		}
		
	}

	
}
