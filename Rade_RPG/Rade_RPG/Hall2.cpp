#include "Hall2.h"



Hall2::Hall2()
{
	Name[0] = '\0';
}
Hall2::Hall2(const char * n)
{
	strcpy(Name, n);
}

Hall2::~Hall2()
{
}


void Hall2::HallPrint(vector<Pc>*a_PcList, vector<PcGuild>*a_PcGdList, vector<Hall2>*a_Hall2List, int log)
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
		printf("早                                                                            早早				                                                              早");
		y++;
		Pc::gotoxy2(x, y);
		printf("早                                                                            早早1.釭陛晦                                                                    早");
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

			if (a_Hall2List->size() > i)
			{
				Pc::gotoxy2(50, y);
				printf("%-3d.檜葷:", i + 1, (*a_Hall2List)[i].Name);
			}
			y++;
		}
		Pc::gotoxy2(x, y); printf(" 曲收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旭");
		//早%-3d.檜葷:%-13s?? : %-3d 團繪 : %-3d 雖棟 : %-3d 撩晝 : %-2d 蛔晝 : %-2d溯漣 : %-3d瞪辨霜機 : %-10s陛問 : %-4d        早 早


		int a_Sel = 0;

		y = 46;
		x = 108;
		Pc::gotoxy2(x, y);
		scanf_s("%d", &a_Sel);
		getchar();

		if (a_Sel == 1) break;


	}
}

void Hall2::HallSetting(vector<Hall2>*a_Hall2List)
{
	Hall2("寰喟嬴棲");
}
