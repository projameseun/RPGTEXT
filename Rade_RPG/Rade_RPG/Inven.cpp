#include "Inven.h"


COORD getXY() {
	COORD Cur;
	CONSOLE_SCREEN_BUFFER_INFO a;

	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &a);
	Cur.X = a.dwCursorPosition.X;
	Cur.Y = a.dwCursorPosition.Y;
	printf("%d", Cur.X);
	return Cur;
}


Inven::Inven()
{
}

Inven::Inven(const char* n, const char* ch, int str, int dex, int a_int, int c, int s, int g, int l) : Item(n, ch, str, dex, a_int, c, s, g, l)
{

}

Inven::~Inven()
{
}


//up


void Inven::LevelUp(vector<Inven> *a_InList, vector<Pc> *a_PcList,vector<PcGuild>*a_PcGdList, int log)
{
	int x = 0;
	int  y = 0;

	while (true)
	{
		x = 0;
		y = 0;

		//x++;
		//y++;

		Pc::gotoxy2(x, y);
		printf("旨收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旬");
		y++;
		Pc::gotoxy2(x, y);
		printf("早                                                                                                                                                            早");

		x++;
		Pc::gotoxy2(x, y);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_GREEN); //ж棺儀
		printf("<Scence>");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //?羃?

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN); //喻嫌儀
		printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t   來");
		printf(" %-8d", (*a_PcList)[log].Gold);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //?羃?

		x--;
		y++;
		Pc::gotoxy2(x, y);
		printf("早                                                                                                                                                            早");
		y++;
		Pc::gotoxy2(x, y);
		printf("早  旨收收收收收收收收收收收收收收收收收旬                                                                                                                    早");
		y++;
		Pc::gotoxy2(x, y);
		printf("早  早檜葷:%-14s 霜機:%-9s早                                                                                                                    早", (*a_PcList)[log].Name, (*a_PcList)[log].Char_Type);

		y++;
		Pc::gotoxy2(x, y);
		printf("早  早羹溘:%-8d       葆釭:%-8d 早                                                                                                                    早", (*a_PcList)[log].Hp, (*a_PcList)[log].Mp);
		y++;
		Pc::gotoxy2(x, y);
		printf("早  早奢問:%-5d          寞橫:%-5d    早                                                                                                                    早", (*a_PcList)[log].Attack, (*a_PcList)[log].Deffence);
		y++;
		Pc::gotoxy2(x, y);
		printf("早  早奢樓:%-2d            溯漣:%-3d       早			                                                                                              早", (*a_PcList)[log].Att_Speed, (*a_PcList)[log].Level);
		y++;
		Pc::gotoxy2(x, y);
		printf("早  早??:%-4d 團繪:%-4d 雖棟:%-4d       早                                                                                                                    早", (*a_PcList)[log].Str, (*a_PcList)[log].Dex, (*a_PcList)[log].INT);
		y++;
		Pc::gotoxy2(x, y);

		printf("早  曲收收收收收收收收收收收收收收收收收旭                                                                                                                    早");
		y++;
		Pc::gotoxy2(x, y);
		printf("早  旨收收收收收收收收收收收收收收收收收旬                                                                                                                    早");
		y++;
		Pc::gotoxy2(x, y);
		printf("早  早檜葷:%-14s 霜機:%-9s早                                                                                                                    早", (*a_PcGdList)[0].Name, (*a_PcGdList)[0].Char_Type);
		y++;
		Pc::gotoxy2(x, y);
		printf("早  早羹溘:%-8d       葆釭:%-8d 早                                                                                                                    早", (*a_PcGdList)[0].Hp, (*a_PcGdList)[0].Mp);
		y++;
		Pc::gotoxy2(x, y);
		printf("早  早奢問:%-5d          寞橫:%-5d    早                                                                                                                    早", (*a_PcGdList)[0].Attack, (*a_PcGdList)[0].Deffence);
		y++;
		Pc::gotoxy2(x, y);
		printf("早  早奢樓:%-2d            溯漣:%-3d       早			                                                                                              早", (*a_PcGdList)[0].Att_Speed, (*a_PcGdList)[0].Level);
		y++;
		Pc::gotoxy2(x, y);
		printf("早  早??:%-4d 團繪:%-4d 雖棟:%-4d       早                                                                                                                    早", (*a_PcGdList)[0].Str, (*a_PcGdList)[0].Dex, (*a_PcGdList)[0].INT);
		y++;
		Pc::gotoxy2(x, y);

		printf("早  曲收收收收收收收收收收收收收收收收收旭                                                                                                                    早");
		y++;
		Pc::gotoxy2(x, y);
		printf("早  旨收收收收收收收收收收收收收收收收收旬                                                                                                                    早");
		y++;
		Pc::gotoxy2(x, y);
		printf("早  早檜葷:%-14s 霜機:%-9s早                                                                                                                    早", (*a_PcGdList)[1].Name, (*a_PcGdList)[1].Char_Type);
		y++;
		Pc::gotoxy2(x, y);
		printf("早  早羹溘:%-8d       葆釭:%-8d 早                                                                                                                    早", (*a_PcGdList)[1].Hp, (*a_PcGdList)[1].Mp);
		y++;
		Pc::gotoxy2(x, y);
		printf("早  早奢問:%-5d          寞橫:%-5d    早                                                                                                                    早", (*a_PcGdList)[1].Attack, (*a_PcGdList)[1].Deffence);
		y++;
		Pc::gotoxy2(x, y);
		printf("早  早奢樓:%-2d            溯漣:%-3d       早			                                                                                              早", (*a_PcGdList)[1].Att_Speed, (*a_PcGdList)[1].Level);
		y++;
		Pc::gotoxy2(x, y);
		printf("早  早??:%-4d 團繪:%-4d 雖棟:%-4d       早                                                                                                                    早", (*a_PcGdList)[1].Str, (*a_PcGdList)[1].Dex, (*a_PcGdList)[1].INT);
		y++;
		Pc::gotoxy2(x, y);

		printf("早  曲收收收收收收收收收收收收收收收收收旭                                                                                                                    早");
		y++;
		Pc::gotoxy2(x, y);
		printf("早  旨收收收收收收收收收收收收收收收收收旬                                                                                                                    早");
		y++;
		Pc::gotoxy2(x, y);
		printf("早  早檜葷:%-14s 霜機:%-9s早                                                                                                                    早", (*a_PcGdList)[2].Name, (*a_PcGdList)[2].Char_Type);
		y++;
		Pc::gotoxy2(x, y);
		printf("早  早羹溘:%-8d       葆釭:%-8d 早                                                                                                                    早", (*a_PcGdList)[2].Hp, (*a_PcGdList)[2].Mp);
		y++;
		Pc::gotoxy2(x, y);
		printf("早  早奢問:%-5d          寞橫:%-5d    早                                                                                                                    早", (*a_PcGdList)[2].Attack, (*a_PcGdList)[2].Deffence);
		y++;
		Pc::gotoxy2(x, y);
		printf("早  早奢樓:%-2d            溯漣:%-3d       早			                                                                                              早", (*a_PcGdList)[2].Att_Speed, (*a_PcGdList)[2].Level);
		y++;
		Pc::gotoxy2(x, y);
		printf("早  早??:%-4d 團繪:%-4d 雖棟:%-4d       早                                                                                                                    早", (*a_PcGdList)[2].Str, (*a_PcGdList)[2].Dex, (*a_PcGdList)[2].INT);
		y++;
		Pc::gotoxy2(x, y);

		printf("早  曲收收收收收收收收收收收收收收收收收旭                                                                                                                    早");
		y++;
		Pc::gotoxy2(x, y);

		printf("早                                                                                                                                                            早");
		y++;
		Pc::gotoxy2(x, y);
		printf("早                                                                                                                                                            早");
		y++;
		Pc::gotoxy2(x, y);
		printf("早                                                                                                                                                            早");
		Pc::gotoxy2(x, y);
		printf("曲收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旭");
		y++;
		Pc::gotoxy2(x, y);

		printf("旨收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旬旨收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旬");

		x++;
		Pc::gotoxy2(x, y);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_INTENSITY | FOREGROUND_RED); //ж棺儀
		printf("<SystemPrint>");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //?羃?

		x += 79;
		Pc::gotoxy2(x, y);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN); //ж棺儀
		printf("<Menu>");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //?羃?
		x = 0;
		y++;
		Pc::gotoxy2(x, y);
		printf("早                                                                            早早                                                                            早");
		y++;
		Pc::gotoxy2(x, y);
		printf("早                                                                            早早																			  早");
		y++;
		Pc::gotoxy2(x, y);
		printf("早                                                                            早早                                                                            早");
		y++;
		Pc::gotoxy2(x, y);
		printf("早                                                                            早早                                                                            早");
		y++;
		Pc::gotoxy2(x, y);
		printf("早                                                                            早早                                                                            早");
		y++;
		Pc::gotoxy2(x, y);
		printf("早                                                                            早早                                                                            早");
		y++;
		Pc::gotoxy2(x, y);
		printf("早                                                                            早早                                                                            早");
		y++;
		Pc::gotoxy2(x, y);
		printf("早                                                                            早早                                                                            早");
		y++;
		Pc::gotoxy2(x, y);
		printf("早                                                                            早早                                                                            早");
		y++;
		Pc::gotoxy2(x, y);
		printf("早                                                                            早早                                                                            早");
		y++;
		Pc::gotoxy2(x, y);
		printf("早                                                                            早早                                                                            早");
		y++;
		Pc::gotoxy2(x, y);
		printf("早                                                                            早早機斜溯檜萄廓?ㄧ? 殮溘п輿撮蹂:                                              早");
		y++;
		Pc::gotoxy2(x, y);
		printf("早                                                                            早早                                                                            早");
		y++;
		Pc::gotoxy2(x, y);
		printf("曲收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旭曲收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旭");

		x = 47, y = 3;
		Pc::gotoxy2(x, y); printf(" 旨收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旬"); y++;
		Pc::gotoxy2(x, y); printf(" 早");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN); //喻嫌儀
		printf("<嬴檜蠱跡煙>");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //?羃?
		Pc::gotoxy2(156, y); printf("早早"); y++;

		for (int i = 0; i < 25; i++)
		{
			Pc::gotoxy2(x, y);
			printf(" 早                                                                                                          早");

			if (a_InList->size() > i)
			{
				Pc::gotoxy2(50, y);
				printf("%-3d.檜葷:%-13s??:%-3d 團繪:%-3d 雖棟:%-3d 撩晝:%-2d 蛔晝:%-2d溯漣:%-3d瞪辨霜機:%-10s陛問:%-4d", i + 1, (*a_InList)[i].Name,
					(*a_InList)[i].Str, (*a_InList)[i].Dex, (*a_InList)[i].a_Int, (*a_InList)[i].Star, (*a_InList)[i].Grade, (*a_InList)[i].Level, (*a_InList)[i].Char_Type,
					(*a_InList)[i].Cost);
			}
			y++;
		}
		Pc::gotoxy2(x, y); printf(" 曲收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旭");
		//早%-3d.檜葷:%-13s?? : %-3d 團繪 : %-3d 雖棟 : %-3d 撩晝 : %-2d 蛔晝 : %-2d溯漣 : %-3d瞪辨霜機 : %-10s陛問 : %-4d        早 早


		int a_Sel = 0;
		y = 46;
		x = 118;
		Pc::gotoxy2(x, y);
		scanf_s("%d", &a_Sel);
		getchar();
		a_Sel--;

		if (a_Sel < 0 || a_Sel >= a_InList->size())
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),  //<--旋噢儀 夥紱晦...
				FOREGROUND_INTENSITY | FOREGROUND_RED); //IN
			x = 2;
			y = 36;
			Pc::gotoxy2(x, y);
			printf("澀跤脹 廓??殮棲棻\n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),  //<--旋噢儀 夥紱晦...
				FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE); //IN
			getchar();
			return;
		}

		if ((*a_PcList)[log].Gold < 1000)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),  //<--旋噢儀 夥紱晦...
				FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN); //IN
			x = 2;
			y = 36;
			Pc::gotoxy2(x, y);
			printf("爾嶸埤萄陛 睡褶м棲棻\n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),  //<--旋噢儀 夥紱晦...
				FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE); //IN
			getchar();
			return;
		}

		if ((*a_InList)[a_Sel].Level > 30)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),  //<--旋噢儀 夥紱晦...
				FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN); //IN
			x = 2;
			y = 36;
			Pc::gotoxy2(x, y);
			printf("檜嘐 譆堅纂 溯漣殮棲棻\n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),  //<--旋噢儀 夥紱晦...
				FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE); //IN
			getchar();
			return;
		}

		//溯漣掘⑷
		int a_Step = (*a_InList)[a_Sel].Level;
		float a_Rate = (31 - a_Step) / 30.0f * 100.0f;

		x = 2;
		y = 36;
		Pc::gotoxy2(x, y);
		printf("溯漣機 ?捕?擎 %d %%殮棲棻. 啗樓ж衛啊蝗棲梱? 1.Yes 2.No", (int)a_Rate);
		int a_Go = 0; // 褒ч睡碟
		x = 60;
		y = 36;
		Pc::gotoxy2(x, y);
		scanf("%d", &a_Go);
		getchar();

		if (a_Go == 2) return;

		//翱轎
		x = 20;
		y = 37;
		Pc::gotoxy2(x, y);
		for (int i = 0; i < 3; i++)
		{
		
			printf(". ");
			Sleep(500);
		}
		printf("\n");

		int a_Chance = (rand() % 30) + 2; //1擎鼠褻剪 100Щ煎
		if (a_Step < a_Chance)
		{
			(*a_InList)[a_Sel].Level++;
			(*a_PcList)[log].Gold -= 1000;
			x = 2;
			y = 36;
			Pc::gotoxy2(x, y);
			printf("溯漣機縑 撩奢ж樟蝗棲棻 + 1 溯漣鼻蝓 \n");
			(*a_InList)[a_Sel].Cost += (*a_InList)[a_Sel].Cost + 200;
			

			///
			(*a_InList)[a_Sel].Str += 10;
		

			//Ы溯檜橫 奢問溘 寞橫溘 蹺陛睡碟
		}
		else
		{
			x = 2;
			y = 36;
			Pc::gotoxy2(x, y);
			printf("溯漣機 褒ぬ\n");


			(*a_InList).erase(a_InList->begin() + a_Sel);
		}



	}
}
void Inven::StarUp(vector<Inven> *a_InList, vector<Pc> *a_PcList, vector<PcGuild>*a_PcGdList, int log)
{

}
void Inven::GradeUp(vector<Inven> *a_InList, vector<Pc> *a_PcList, vector<PcGuild>*a_PcGdList, int log)
{

}



void Inven::InvenPrint(vector<Pc> *a_PcList, vector<PcGuild> *a_PcGdList, vector<Inven> *a_InList,int login)
{
	int x = 0;
	int  y = 0;

	while (true)
	{
		x = 0;
		y = 0;

		//x++;
		//y++;

		Pc::gotoxy2(x, y);
		printf("旨收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旬");
		y++;
		Pc::gotoxy2(x, y);
		printf("早                                                                                                                                                            早");

		x++;
		Pc::gotoxy2(x, y);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_GREEN); //ж棺儀
		printf("<Scence>");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //?羃?

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN); //喻嫌儀
		printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t   來");
		printf(" %-8d", (*a_PcList)[login].Gold);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //?羃?

		x--;
		y++;
		Pc::gotoxy2(x, y);
		printf("早                                                                                                                                                            早");
		y++;
		Pc::gotoxy2(x, y);
		printf("早  旨收收收收收收收收收收收收收收收收收旬                                                                                                                    早");
		y++;
		Pc::gotoxy2(x, y);
		printf("早  早檜葷:%-14s 霜機:%-9s早                                                                                                                    早", (*a_PcList)[login].Name, (*a_PcList)[login].Char_Type);

		y++;
		Pc::gotoxy2(x, y);
		printf("早  早羹溘:%-8d       葆釭:%-8d 早                                                                                                                    早", (*a_PcList)[login].Hp, (*a_PcList)[login].Mp);
		y++;
		Pc::gotoxy2(x, y);
		printf("早  早奢問:%-5d          寞橫:%-5d    早                                                                                                                    早", (*a_PcList)[login].Attack, (*a_PcList)[login].Deffence);
		y++;
		Pc::gotoxy2(x, y);
		printf("早  早奢樓:%-2d            溯漣:%-3d       早			                                                                                              早", (*a_PcList)[login].Att_Speed, (*a_PcList)[login].Level);
		y++;
		Pc::gotoxy2(x, y);
		printf("早  早??:%-4d 團繪:%-4d 雖棟:%-4d       早                                                                                                                    早", (*a_PcList)[login].Str, (*a_PcList)[login].Dex,(*a_PcList)[login].INT);
		y++;
		Pc::gotoxy2(x, y);

		printf("早  曲收收收收收收收收收收收收收收收收收旭                                                                                                                    早");
		y++;
		Pc::gotoxy2(x, y);
		printf("早  旨收收收收收收收收收收收收收收收收收旬                                                                                                                    早");
		y++;
		Pc::gotoxy2(x, y);
		printf("早  早檜葷:%-14s 霜機:%-9s早                                                                                                                    早",(*a_PcGdList)[0].Name, (*a_PcGdList)[0].Char_Type);
		y++;
		Pc::gotoxy2(x, y);
		printf("早  早羹溘:%-8d       葆釭:%-8d 早                                                                                                                    早", (*a_PcGdList)[0].Hp, (*a_PcGdList)[0].Mp);
		y++;
		Pc::gotoxy2(x, y);
		printf("早  早奢問:%-5d          寞橫:%-5d    早                                                                                                                    早", (*a_PcGdList)[0].Attack, (*a_PcGdList)[0].Deffence);
		y++;
		Pc::gotoxy2(x, y);
		printf("早  早奢樓:%-2d            溯漣:%-3d       早			                                                                                              早", (*a_PcGdList)[0].Att_Speed, (*a_PcGdList)[0].Level);
		y++;
		Pc::gotoxy2(x, y);
		printf("早  早??:%-4d 團繪:%-4d 雖棟:%-4d       早                                                                                                                    早", (*a_PcGdList)[0].Str, (*a_PcGdList)[0].Dex, (*a_PcGdList)[0].INT);
		y++;
		Pc::gotoxy2(x, y);

		printf("早  曲收收收收收收收收收收收收收收收收收旭                                                                                                                    早");
		y++;
		Pc::gotoxy2(x, y);
		printf("早  旨收收收收收收收收收收收收收收收收收旬                                                                                                                    早");
		y++;
		Pc::gotoxy2(x, y);
		printf("早  早檜葷:%-14s 霜機:%-9s早                                                                                                                    早", (*a_PcGdList)[1].Name, (*a_PcGdList)[1].Char_Type);
		y++;
		Pc::gotoxy2(x, y);
		printf("早  早羹溘:%-8d       葆釭:%-8d 早                                                                                                                    早", (*a_PcGdList)[1].Hp, (*a_PcGdList)[1].Mp);
		y++;
		Pc::gotoxy2(x, y);
		printf("早  早奢問:%-5d          寞橫:%-5d    早                                                                                                                    早", (*a_PcGdList)[1].Attack, (*a_PcGdList)[1].Deffence);
		y++;
		Pc::gotoxy2(x, y);
		printf("早  早奢樓:%-2d            溯漣:%-3d       早			                                                                                              早", (*a_PcGdList)[1].Att_Speed, (*a_PcGdList)[1].Level);
		y++;
		Pc::gotoxy2(x, y);
		printf("早  早??:%-4d 團繪:%-4d 雖棟:%-4d       早                                                                                                                    早", (*a_PcGdList)[1].Str, (*a_PcGdList)[1].Dex, (*a_PcGdList)[1].INT);
		y++;
		Pc::gotoxy2(x, y);

		printf("早  曲收收收收收收收收收收收收收收收收收旭                                                                                                                    早");
		y++;
		Pc::gotoxy2(x, y);
		printf("早  旨收收收收收收收收收收收收收收收收收旬                                                                                                                    早");
		y++;
		Pc::gotoxy2(x, y);
		printf("早  早檜葷:%-14s 霜機:%-9s早                                                                                                                    早", (*a_PcGdList)[2].Name, (*a_PcGdList)[2].Char_Type);
		y++;
		Pc::gotoxy2(x, y);
		printf("早  早羹溘:%-8d       葆釭:%-8d 早                                                                                                                    早", (*a_PcGdList)[2].Hp, (*a_PcGdList)[2].Mp);
		y++;
		Pc::gotoxy2(x, y);
		printf("早  早奢問:%-5d          寞橫:%-5d    早                                                                                                                    早", (*a_PcGdList)[2].Attack, (*a_PcGdList)[2].Deffence);
		y++;
		Pc::gotoxy2(x, y);
		printf("早  早奢樓:%-2d            溯漣:%-3d       早			                                                                                              早", (*a_PcGdList)[2].Att_Speed, (*a_PcGdList)[2].Level);
		y++;
		Pc::gotoxy2(x, y);
		printf("早  早??:%-4d 團繪:%-4d 雖棟:%-4d       早                                                                                                                    早", (*a_PcGdList)[2].Str, (*a_PcGdList)[2].Dex, (*a_PcGdList)[2].INT);
		y++;
		Pc::gotoxy2(x, y);

		printf("早  曲收收收收收收收收收收收收收收收收收旭                                                                                                                    早");
		y++;
		Pc::gotoxy2(x, y);

		printf("早                                                                                                                                                            早");
		y++;
		Pc::gotoxy2(x, y);
		printf("早                                                                                                                                                            早");
		y++;
		Pc::gotoxy2(x, y);
		printf("早                                                                                                                                                            早");
		Pc::gotoxy2(x, y);
		printf("曲收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旭");
		y++;
		Pc::gotoxy2(x, y);

		printf("旨收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旬旨收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旬");

		x++;
		Pc::gotoxy2(x, y);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_INTENSITY | FOREGROUND_RED); //ж棺儀
		printf("<SystemPrint>");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //?羃?

		x += 79;
		Pc::gotoxy2(x, y);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN); //ж棺儀
		printf("<Menu>");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //?羃?
		x = 0;
		y++;
		Pc::gotoxy2(x, y);
		printf("早                                                                            早早                                                                            早");
		y++;
		Pc::gotoxy2(x, y);
		printf("早                                                                            早早1.機斜溯檜萄                                                                早");
		y++;
		Pc::gotoxy2(x, y);
		printf("早                                                                            早早2.釭陛晦                                                                    早");
		y++;
		Pc::gotoxy2(x, y);
		printf("早                                                                            早早                                                                            早");
		y++;
		Pc::gotoxy2(x, y);
		printf("早                                                                            早早                                                                            早");
		y++;
		Pc::gotoxy2(x, y);
		printf("早                                                                            早早                                                                            早");
		y++;
		Pc::gotoxy2(x, y);
		printf("早                                                                            早早                                                                            早");
		y++;
		Pc::gotoxy2(x, y);
		printf("早                                                                            早早                                                                            早");
		y++;
		Pc::gotoxy2(x, y);
		printf("早                                                                            早早                                                                            早");
		y++;
		Pc::gotoxy2(x, y);
		printf("早                                                                            早早                                                                            早");
		y++;
		Pc::gotoxy2(x, y);
		printf("早                                                                            早早                                                                            早");
		y++;
		Pc::gotoxy2(x, y);
		printf("早                                                                            早早廓?ㄧ? 殮溘п輿撮蹂:                                                        早");
		y++;
		Pc::gotoxy2(x, y);
		printf("早                                                                            早早                                                                            早");
		y++;
		Pc::gotoxy2(x, y);
		printf("曲收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旭曲收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旭");

		x = 47, y = 3;
		Pc::gotoxy2(x, y);printf(" 旨收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旬");y++;
		Pc::gotoxy2(x, y);printf(" 早");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN); //喻嫌儀
		printf("<嬴檜蠱跡煙>");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //?羃?
		Pc::gotoxy2(156, y); printf("早早");y++;
		
		for (int i = 0; i < 25; i++)
		{
			Pc::gotoxy2(x, y);
			printf(" 早                                                                                                          早");
			
			if (a_InList->size()>i)
			{
				Pc::gotoxy2(50, y);
				printf("%-3d.檜葷:%-13s??:%-3d 團繪:%-3d 雖棟:%-3d 撩晝:%-2d 蛔晝:%-2d溯漣:%-3d瞪辨霜機:%-10s陛問:%-4d",i+1,(*a_InList)[i].Name,
					(*a_InList)[i].Str, (*a_InList)[i].Dex, (*a_InList)[i].a_Int, (*a_InList)[i].Star, (*a_InList)[i].Grade, (*a_InList)[i].Level, (*a_InList)[i].Char_Type,
					(*a_InList)[i].Cost);
			}
			y++;
		}
		Pc::gotoxy2(x, y); printf(" 曲收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旭");
		//早%-3d.檜葷:%-13s?? : %-3d 團繪 : %-3d 雖棟 : %-3d 撩晝 : %-2d 蛔晝 : %-2d溯漣 : %-3d瞪辨霜機 : %-10s陛問 : %-4d        早 早

		


		int a_Sel = 0;
		y = 46;
		x = 103;
		Pc::gotoxy2(x, y);
		scanf_s("%d", &a_Sel);
		//getchar();
		if (a_Sel < 1 || a_Sel >= 2 )
		{
			if (a_Sel == 2 )
			{

				break;
			}

			//getchar();

		}
		if (a_Sel == 1) //up
		{
			y = 36;
			x = 82;
			Pc::gotoxy2(x, y);
			printf("1.溯漣機斜溯檜萄");
			y++;
			Pc::gotoxy2(x, y);
			printf("2.撩晝機斜溯檜萄");
			y++;
			Pc::gotoxy2(x, y);
			printf("3.蛔晝機斜溯檜萄");
			
			int up_Sel = 0;
			y = 46;
			x = 103;
			Pc::gotoxy2(x, y);
			scanf_s("%d", &up_Sel);
			getchar();
			
			if (up_Sel < 0 || up_Sel > 3)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),  //<--旋噢儀 夥紱晦...
					FOREGROUND_INTENSITY | FOREGROUND_RED); //IN
				x = 2;
				y = 36;
				Pc::gotoxy2(x, y);
				printf("澀跤脹 廓??殮棲棻");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),  //<--旋噢儀 夥紱晦...
					FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE); //IN
				//getchar();

			}//if (up_Sel < 0 || up_Sel > 3)
			if (up_Sel == 1)
			{
				Inven::ItemUpGrade(a_InList, a_PcList, a_PcGdList,login, Inven::LevelUp);
			}
			else if (up_Sel == 2)
			{
				Inven::ItemUpGrade(a_InList, a_PcList, a_PcGdList, login ,Inven::StarUp);
			}
			else if (up_Sel == 3)
			{
				Inven::ItemUpGrade(a_InList, a_PcList, a_PcGdList,login, Inven::GradeUp);
			}
		}

		getchar();
		system("cls");
	}

	
}


void Inven::InvenItem(vector<Item> *a_ItemList, vector<Inven> *a_InList, int by_idx)
{
	Inven Node((*a_ItemList)[by_idx].Name, (*a_ItemList)[by_idx].Char_Type, (*a_ItemList)[by_idx].Str, (*a_ItemList)[by_idx].Dex, (*a_ItemList)[by_idx].a_Int,
		(*a_ItemList)[by_idx].Cost, (*a_ItemList)[by_idx].Star, (*a_ItemList)[by_idx].Grade, (*a_ItemList)[by_idx].Level);


	a_InList->push_back(Node);

}

void Inven::InvenList(vector<Inven>*a_List)
{
	
	//system("cls");
	for (int i = 0; i < a_List->size(); i++)
	{
		printf("%s %s %d %d %d %d %d %d %d\n",
			(*a_List)[i].Name,
			(*a_List)[i].Char_Type,
			(*a_List)[i].Str,
			(*a_List)[i].Dex,
			(*a_List)[i].a_Int,
			(*a_List)[i].Cost,
			(*a_List)[i].Star,
			(*a_List)[i].Grade,
			(*a_List)[i].Level



		);

		getchar();
	}


	
}

void Inven::ItemUpGrade(vector<Inven> *a_InList, vector<Pc> *a_PcList ,vector<PcGuild>*a_PcGdList, int log,
	void(*Up_Func)(vector<Inven> *a_InList, vector<Pc> *a_PcList, vector<PcGuild>*a_PcGdList, int))
{

	Up_Func(a_InList, a_PcList, a_PcGdList ,log);

}


