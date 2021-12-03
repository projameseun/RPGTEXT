#include "PcGuild.h"



PcGuild::PcGuild()
{
	Char_Type[0] = '\0';
	Level = 0;
}
PcGuild::PcGuild(const char* n, int h, int mh, int m, int mm, int str, int dex, int a_int, int a, int d, int as, const char* ch, int l) : Unit(n, h, mh, m, mm, str, dex, a_int, a, d, as)
{

	strcpy(Char_Type, ch);
	Level = l;
}


PcGuild::~PcGuild()
{
}

void Guild::GuildNewAdd(vector<Guild> *a_GdList, vector<Pc> *a_PcLit)
{




	Guild Node("불타고있다", 0, 500, 0, 10, 5, 0, 0, 30, 50, 1, "전사", 1);

	a_GdList->push_back(Node);

	Guild Node2("활잡이", 0, 350, 0, 10, 0, 5, 0, 15, 10, 2, "궁수", 1);

	a_GdList->push_back(Node2);

	Guild Node3("영창가자", 0, 300, 0, 100, 0, 0, 10, 5, 5, 1, "마법사", 1);

	a_GdList->push_back(Node3);

	Guild Node4("힐바드세여", 0, 250, 0, 100, 0, 0, 10, 4, 2, 1, "사제", 1);

	a_GdList->push_back(Node4);

	Guild Node5("개빠른아이", 0, 400, 0, 10, 0, 5, 0, 15, 20, 2, "도적", 1);

	a_GdList->push_back(Node5);

	Guild Node6("엄마들어옴", 0, 350, 0, 200, 0, 0, 20, 5, 10, 1, "흑마법사", 1);

	a_GdList->push_back(Node6);


	system("cls");
}

void PcGuild::PcGdPrintList(vector<PcGuild> *a_PcGdList, vector<Pc> *a_PcList)
{
	int xx = 0;
	int yy = 0;

	int sel_Count = 0; //갯수제한

	bool is_Warrior = true;
	bool is_Archer = true;
	bool is_Wizard = true;
	bool is_Priest = true;
	bool is_Thief = true;
	bool is_DkWizard = true;

	Pc::CursorView(0);


	while (true)
	{
		xx = 0;
		yy = 0;


		if (sel_Count == 3)
		{
			xx = 0;
			yy = 0;

			yy += 5;
			xx += 55;
			Pc::gotoxy2(xx, yy);
			printf("=====로그인 하시고 즐거운 모험이 되세요======");
			getchar();
			break;
		}


		printf("<길드원 목록>");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN); //노랑색
		xx += 100;
		yy = 0;
		Pc::gotoxy2(xx, yy);
		printf("\t\t\t\t\t\tⓖ:%d", (*a_PcList)[0].Gold);

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //흰색
		xx = 0;
		yy = 0;

		yy++;

		Pc::gotoxy2(xx, yy);
		printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━");

		yy += 5;
		xx += 40;
		Pc::gotoxy2(xx, yy);
		printf("함께할 동료의 번호를 입력해주세요 -(총3명 고를수 있습니다)-중복불가능");


		Pc::gotoxy2(xx, yy);
		//길드원목록만들기 
		yy += 10;
		xx = 17;
		//④ ⑤ ⑥
		//②\t                                 ③ 
		Pc::gotoxy2(xx, yy);


		printf("                   ①");
		printf("\t				  ②\t                                 ③");




		yy++;
		xx = 20;
		Pc::gotoxy2(xx, yy);
		printf("┏━━━━━━━━━━━━━━━┓\t  ┏━━━━━━━━━━━━━━━┓\t┏━━━━━━━━━━━━━━━┓");

		yy++;
		//xx++;
		Pc::gotoxy2(xx, yy);
		printf("┃이름:불타고있다 직업:전사     ┃\t  ┃이름:활잡이 직업:궁수         ┃\t┃이름:영창가자 직업:마법사     ┃");



		yy++;
		Pc::gotoxy2(xx, yy);
		printf("┃체력:500       마나:10        ┃\t  ┃체력:350    마나:10           ┃\t┃체력:300      마나:100        ┃");

		yy++;
		Pc::gotoxy2(xx, yy);
		printf("┃공격:30        방어:50        ┃\t  ┃공격:15     방어:10           ┃\t┃공격:5        방어:5          ┃");

		yy++;
		Pc::gotoxy2(xx, yy);
		printf("┃공속:1         레벨:1         ┃\t  ┃공속:2      레벨:1            ┃\t┃공속:1        레벨:1          ┃");

		yy++;
		Pc::gotoxy2(xx, yy);
		printf("┃힘:5 민첩:0 지능:0            ┃\t  ┃힘:0 민첩:5 지능:0            ┃\t┃힘:0 민첩:0 지능:10           ┃");

		yy++;
		Pc::gotoxy2(xx, yy);
		printf("┗━━━━━━━━━━━━━━━┛\t  ┗━━━━━━━━━━━━━━━┛\t┗━━━━━━━━━━━━━━━┛");


		yy += 3;


		Pc::gotoxy2(xx, yy);
		printf("                ④\t                                  ⑤\t                                 ⑥ ");

		yy++;
		xx = 20;
		Pc::gotoxy2(xx, yy);
		printf("┏━━━━━━━━━━━━━━━┓\t  ┏━━━━━━━━━━━━━━━┓\t┏━━━━━━━━━━━━━━━┓");
		//두번째줄
		yy++;
		//xx++;
		Pc::gotoxy2(xx, yy);
		printf("┃이름:힐바드세여 직업:사제     ┃\t  ┃이름:개빠른아이 직업:도적     ┃\t┃이름:엄마들어옴 직업:흑마법사 ┃");



		yy++;
		Pc::gotoxy2(xx, yy);
		printf("┃체력:250        마나:100      ┃\t  ┃체력:400        마나:10       ┃\t┃체력:350        마나:200      ┃");

		yy++;
		Pc::gotoxy2(xx, yy);
		printf("┃공격:30         방어:50       ┃\t  ┃공격:15         방어:10       ┃\t┃공격:5          방어:5        ┃");

		yy++;
		Pc::gotoxy2(xx, yy);
		printf("┃공속:1          레벨:1        ┃\t  ┃공속:2          레벨:1        ┃\t┃공속:1          레벨:1        ┃");

		yy++;
		Pc::gotoxy2(xx, yy);
		printf("┃힘:5 민첩:0 지능:0            ┃\t  ┃힘:0 민첩:5 지능:0            ┃\t┃힘:0 민첩:0 지능:10           ┃");

		yy++;
		Pc::gotoxy2(xx, yy);
		printf("┗━━━━━━━━━━━━━━━┛\t  ┗━━━━━━━━━━━━━━━┛\t┗━━━━━━━━━━━━━━━┛");

		//system("cls");
		int a_Sel = 0;
		yy += 5;
		xx += 60;
		Pc::gotoxy2(xx, yy);
		scanf("%d", &a_Sel);
		getchar();

		

		if (a_Sel < 0 || a_Sel > 6 || sel_Count == 3)
		{
			
			system("cls");
			continue;

		}
		if (a_Sel == 1 && is_Warrior == true) //전사
		{
			char a_Name[128];
			yy += 5;
			xx += 5;
			Pc::gotoxy2(xx, yy);
			strcpy(a_Name, "불타고있다");

			//const char* n, int h, int mh, int m, int mm, int str, int dex, int a_int, int a, int d, int as, const char* ch, int l
			//일부로 오버로딩 이용
			PcGuild Node(a_Name, 0, 500, 0, 10, 5, 0, 0, 30, 50, 1, "전사", 1);

			a_PcGdList->push_back(Node);

			//	//save 구현 
			sel_Count++;
			is_Warrior = !is_Warrior;
			//getchar();
		//break;
		}
		else if (a_Sel == 1 && is_Warrior == false)
		{
			printf("전사는 이미 선택했습니다\n");
			getchar();
		}
		if (a_Sel == 2 && is_Archer == true)//궁수
		{
			char a_Name[128];
			yy += 5;
			xx += 5;
			Pc::gotoxy2(xx, yy);
			strcpy(a_Name, "활잡이");


			//일부로 오버로딩 이용
			PcGuild Node2(a_Name, 0, 350, 0, 10, 0, 5, 0, 15, 10, 2, "궁수", 1);

			a_PcGdList->push_back(Node2);
			sel_Count++;
			//	//save 구현 
			is_Archer = !is_Archer;
		}
		else if (a_Sel == 2 && is_Archer == false)
		{
			printf("궁수는 이미 선택했습니다\n");
			getchar();
		}
		if (a_Sel == 3 && is_Wizard == true)//마법사
		{
			char a_Name[128];
			yy += 5;
			xx += 5;
			Pc::gotoxy2(xx, yy);
			strcpy(a_Name, "어디든간다");


			PcGuild Node3(a_Name, 0, 300, 0, 100, 0, 0, 10, 5, 5, 1, "마법사", 1);

			a_PcGdList->push_back(Node3);
			sel_Count++;
			//	//save 구현 
			is_Wizard = !is_Wizard;
		}
		else if (a_Sel == 3 && is_Wizard == false)
		{
			printf("마법사는 이미 선택했습니다\n");
			getchar();
		}
		if (a_Sel == 4 && is_Priest == true)//사제
		{
			char a_Name[128];
			yy += 5;
			xx += 5;
			Pc::gotoxy2(xx, yy);
			strcpy(a_Name, "힐바드세여");


			PcGuild Node4(a_Name, 0, 250, 0, 100, 0, 0, 10, 4, 2, 1, "사제", 1);

			a_PcGdList->push_back(Node4);
			sel_Count++;
			//	//save 구현 
			is_Priest = !is_Priest;
		}
		else if (a_Sel == 4 && is_Priest == false)
		{
			printf("사제는 이미 선택했습니다\n");
			getchar();
		}
		if (a_Sel == 5 && is_Thief == true)//도적
		{
			char a_Name[128];
			yy += 5;
			xx += 5;
			Pc::gotoxy2(xx, yy);
			strcpy(a_Name, "빠른아이");


			PcGuild Node5(a_Name, 0, 400, 0, 10, 0, 5, 0, 15, 20, 2, "도적", 1);

			a_PcGdList->push_back(Node5);
			sel_Count++;
			//	//save 구현 
			is_Thief = !is_Thief;
		}
		else if (a_Sel == 5 && is_Thief == false)
		{
			printf("도적은 이미 선택했습니다\n");
			getchar();
		}
		if (a_Sel == 6 && is_DkWizard == true)//흑마법사
		{
			char a_Name[128];
			yy += 5;
			xx += 5;
			Pc::gotoxy2(xx, yy);
			strcpy(a_Name, "엄마들어옴");


			PcGuild Node6(a_Name, 0, 350, 0, 200, 0, 0, 20, 5, 10, 1, "흑마법사", 1);

			a_PcGdList->push_back(Node6);

			//	//save 구현 
			sel_Count++;
			is_DkWizard = !is_DkWizard;


		}
		else if (a_Sel == 6 && is_DkWizard == false)
		{
			printf("흑마법사는 이미 선택했습니다\n");
			getchar();
		}

		system("cls");
	}//while

	//printf("\n");
}



