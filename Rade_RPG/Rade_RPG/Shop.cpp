#include "Shop.h"



Shop::Shop()
{
}


Shop::~Shop()
{
}


void Shop::ShopInfo(vector<Pc> *a_PcList, vector<PcGuild> *a_PcGdList, vector<Item> *a_ItemList, vector<Inven>*a_InList, int login)
{

	int x = 0;
	int y = 0;

	int num = 0;

	while (true)
	{
		x = 0;
		y = 0;

		num = 1;
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
			FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //�羃�

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN); //喻嫌儀
		printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t   來");
		printf(" %-8d", (*a_PcList)[login].Gold);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //�羃�

		x--;
		y++;
		Pc::gotoxy2(x, y);
		printf("早                                                                                                                                                            早");
		y++;
		Pc::gotoxy2(x, y);
		printf("早  旨收收收收收收收收收收收收收收收收收旬     旨收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旬 早");
		y++;
		Pc::gotoxy2(x, y);
		printf("早  早檜葷:%-14s 霜機:%-9s早     早", (*a_PcList)[login].Name, (*a_PcList)[login].Char_Type);

		x += 49;
		Pc::gotoxy2(x, y);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN); //喻嫌儀
		printf("<嬴檜蠱跡煙>");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //�羃�
		x += 106;
		y = 4;
		Pc::gotoxy2(x, y);
		printf("早 早");

		x = 0;
		y = 4;


		y++;
		Pc::gotoxy2(x, y);
		printf("早  早羹溘:%-8d       葆釭:%-8d 早     早										                                   早 早", (*a_PcList)[login].Hp, (*a_PcList)[login].Mp);
		y++;
		Pc::gotoxy2(x, y);
		printf("早  早奢問:%-5d          寞橫:%-5d    早     早%-3d.檜葷:%-13s��:%-3d 團繪:%-3d 雖棟:%-3d 撩晝:%-2d 蛔晝:%-2d溯漣:%-3d瞪辨霜機:%-10s陛問:%-4d        早 早", (*a_PcList)[login].Attack, (*a_PcList)[login].Deffence, num, (*a_ItemList)[0].Name, (*a_ItemList)[0].Star, (*a_ItemList)[0].Dex, (*a_ItemList)[0].a_Int, (*a_ItemList)[0].Star, (*a_ItemList)[0].Grade, (*a_ItemList)[0].Level, (*a_ItemList)[0].Char_Type, (*a_ItemList)[0].Cost);
		y++;
		num++;
		Pc::gotoxy2(x, y);
		printf("早  早奢樓:%-2d            溯漣:%-3d       早     早%-3d.檜葷:%-13s��:%-3d 團繪:%-3d 雖棟:%-3d 撩晝:%-2d 蛔晝:%-2d溯漣:%-3d瞪辨霜機:%-10s陛問:%-4d	   早 早", (*a_PcList)[login].Att_Speed, (*a_PcList)[login].Level, num, (*a_ItemList)[1].Name, (*a_ItemList)[1].Star, (*a_ItemList)[1].Dex, (*a_ItemList)[1].a_Int, (*a_ItemList)[1].Star, (*a_ItemList)[1].Grade, (*a_ItemList)[1].Level, (*a_ItemList)[1].Char_Type, (*a_ItemList)[1].Cost);
		y++;
		num++;
		Pc::gotoxy2(x, y);
		printf("早  早��:%-4d 團繪:%-4d 雖棟:%-4d       早     早%-3d.檜葷:%-13s��:%-3d 團繪:%-3d 雖棟:%-3d 撩晝:%-2d 蛔晝:%-2d溯漣:%-3d瞪辨霜機:%-10s陛問:%-4d	   早 早", (*a_PcList)[login].Str, (*a_PcList)[login].Dex, (*a_PcList)[login].INT, num, (*a_ItemList)[2].Name, (*a_ItemList)[2].Star, (*a_ItemList)[2].Dex, (*a_ItemList)[2].a_Int, (*a_ItemList)[2].Star, (*a_ItemList)[2].Grade, (*a_ItemList)[2].Level, (*a_ItemList)[2].Char_Type, (*a_ItemList)[2].Cost);
		y++;
		num++;
		Pc::gotoxy2(x, y);

		printf("早  曲收收收收收收收收收收收收收收收收收旭     早%-3d.檜葷:%-13s��:%-3d 團繪:%-3d 雖棟:%-3d 撩晝:%-2d 蛔晝:%-2d溯漣:%-3d瞪辨霜機:%-10s陛問:%-4d	   早 早", num, (*a_ItemList)[3].Name, (*a_ItemList)[3].Star, (*a_ItemList)[3].Dex, (*a_ItemList)[3].a_Int, (*a_ItemList)[3].Star, (*a_ItemList)[3].Grade, (*a_ItemList)[3].Level, (*a_ItemList)[3].Char_Type, (*a_ItemList)[3].Cost);
		y++;
		num++;
		Pc::gotoxy2(x, y);
		printf("早  旨收收收收收收收收收收收收收收收收收旬     早%-3d.檜葷:%-13s��:%-3d 團繪:%-3d 雖棟:%-3d 撩晝:%-2d 蛔晝:%-2d溯漣:%-3d瞪辨霜機:%-10s陛問:%-4d	   早 早", num, (*a_ItemList)[4].Name, (*a_ItemList)[4].Star, (*a_ItemList)[4].Dex, (*a_ItemList)[4].a_Int, (*a_ItemList)[4].Star, (*a_ItemList)[4].Grade, (*a_ItemList)[4].Level, (*a_ItemList)[4].Char_Type, (*a_ItemList)[4].Cost);
		y++;
		num++;
		Pc::gotoxy2(x, y);
		printf("早  早檜葷:%-14s 霜機:%-9s早     早%-3d.檜葷:%-13s��:%-3d 團繪:%-3d 雖棟:%-3d 撩晝:%-2d 蛔晝:%-2d溯漣:%-3d瞪辨霜機:%-10s陛問:%-4d	   早 早", (*a_PcGdList)[0].Name, (*a_PcGdList)[0].Char_Type, num, (*a_ItemList)[5].Name, (*a_ItemList)[5].Star, (*a_ItemList)[5].Dex, (*a_ItemList)[5].a_Int, (*a_ItemList)[5].Star, (*a_ItemList)[5].Grade, (*a_ItemList)[5].Level, (*a_ItemList)[5].Char_Type, (*a_ItemList)[5].Cost);
		y++;
		num++;
		Pc::gotoxy2(x, y);
		printf("早  早羹溘:%-8d       葆釭:%-8d 早     早%-3d.檜葷:%-13s��:%-3d 團繪:%-3d 雖棟:%-3d 撩晝:%-2d 蛔晝:%-2d溯漣:%-3d瞪辨霜機:%-10s陛問:%-4d	   早 早", (*a_PcGdList)[0].Hp, (*a_PcGdList)[0].Mp, num, (*a_ItemList)[6].Name, (*a_ItemList)[6].Star, (*a_ItemList)[6].Dex, (*a_ItemList)[6].a_Int, (*a_ItemList)[6].Star, (*a_ItemList)[6].Grade, (*a_ItemList)[6].Level, (*a_ItemList)[6].Char_Type, (*a_ItemList)[6].Cost);
		y++;
		num++;
		Pc::gotoxy2(x, y);
		printf("早  早奢問:%-5d          寞橫:%-5d    早     早%-3d.檜葷:%-13s��:%-3d 團繪:%-3d 雖棟:%-3d 撩晝:%-2d 蛔晝:%-2d溯漣:%-3d瞪辨霜機:%-10s陛問:%-4d        早 早", (*a_PcGdList)[0].Attack, (*a_PcGdList)[0].Deffence, num, (*a_ItemList)[7].Name, (*a_ItemList)[7].Star, (*a_ItemList)[7].Dex, (*a_ItemList)[7].a_Int, (*a_ItemList)[7].Star, (*a_ItemList)[7].Grade, (*a_ItemList)[7].Level, (*a_ItemList)[7].Char_Type, (*a_ItemList)[7].Cost);
		y++;
		num++;
		Pc::gotoxy2(x, y);
		printf("早  早奢樓:%-2d            溯漣:%-3d       早     早%-3d.檜葷:%-13s��:%-3d 團繪:%-3d 雖棟:%-3d 撩晝:%-2d 蛔晝:%-2d溯漣:%-3d瞪辨霜機:%-10s陛問:%-4d	   早 早", (*a_PcGdList)[0].Att_Speed, (*a_PcGdList)[0].Level, num, (*a_ItemList)[8].Name, (*a_ItemList)[8].Star, (*a_ItemList)[8].Dex, (*a_ItemList)[8].a_Int, (*a_ItemList)[8].Star, (*a_ItemList)[8].Grade, (*a_ItemList)[8].Level, (*a_ItemList)[8].Char_Type, (*a_ItemList)[8].Cost);
		y++;
		num++;
		Pc::gotoxy2(x, y);
		printf("早  早��:%-4d 團繪:%-4d 雖棟:%-4d       早     早%-3d.檜葷:%-13s��:%-3d 團繪:%-3d 雖棟:%-3d 撩晝:%-2d 蛔晝:%-2d溯漣:%-3d瞪辨霜機:%-10s陛問:%-4d	   早 早", (*a_PcGdList)[0].Str, (*a_PcGdList)[0].Dex, (*a_PcGdList)[0].INT, num, (*a_ItemList)[9].Name, (*a_ItemList)[9].Star, (*a_ItemList)[9].Dex, (*a_ItemList)[9].a_Int, (*a_ItemList)[9].Star, (*a_ItemList)[9].Grade, (*a_ItemList)[9].Level, (*a_ItemList)[9].Char_Type, (*a_ItemList)[9].Cost);
		y++;
		num++;
		Pc::gotoxy2(x, y);

		printf("早  曲收收收收收收收收收收收收收收收收收旭     早%-3d.檜葷:%-13s��:%-3d 團繪:%-3d 雖棟:%-3d 撩晝:%-2d 蛔晝:%-2d溯漣:%-3d瞪辨霜機:%-10s陛問:%-4d	   早 早", num, (*a_ItemList)[10].Name, (*a_ItemList)[10].Star, (*a_ItemList)[10].Dex, (*a_ItemList)[10].a_Int, (*a_ItemList)[10].Star, (*a_ItemList)[10].Grade, (*a_ItemList)[10].Level, (*a_ItemList)[10].Char_Type, (*a_ItemList)[10].Cost);
		y++;
		num++;
		Pc::gotoxy2(x, y);
		printf("早  旨收收收收收收收收收收收收收收收收收旬     早%-3d.檜葷:%-13s��:%-3d 團繪:%-3d 雖棟:%-3d 撩晝:%-2d 蛔晝:%-2d溯漣:%-3d瞪辨霜機:%-10s陛問:%-4d	   早 早", num, (*a_ItemList)[11].Name, (*a_ItemList)[11].Star, (*a_ItemList)[11].Dex, (*a_ItemList)[11].a_Int, (*a_ItemList)[11].Star, (*a_ItemList)[11].Grade, (*a_ItemList)[11].Level, (*a_ItemList)[11].Char_Type, (*a_ItemList)[11].Cost);
		y++;
		num++;
		Pc::gotoxy2(x, y);
		printf("早  早檜葷:%-14s 霜機:%-9s早     早%-3d.檜葷:%-13s��:%-3d 團繪:%-3d 雖棟:%-3d 撩晝:%-2d 蛔晝:%-2d溯漣:%-3d瞪辨霜機:%-10s陛問:%-4d	   早 早", (*a_PcGdList)[1].Name, (*a_PcGdList)[1].Char_Type, num, (*a_ItemList)[12].Name, (*a_ItemList)[12].Star, (*a_ItemList)[12].Dex, (*a_ItemList)[12].a_Int, (*a_ItemList)[12].Star, (*a_ItemList)[12].Grade, (*a_ItemList)[12].Level, (*a_ItemList)[12].Char_Type, (*a_ItemList)[12].Cost);
		y++;
		num++;
		Pc::gotoxy2(x, y);
		printf("早  早羹溘:%-8d       葆釭:%-8d 早     早%-3d.檜葷:%-13s��:%-3d 團繪:%-3d 雖棟:%-3d 撩晝:%-2d 蛔晝:%-2d溯漣:%-3d瞪辨霜機:%-10s陛問:%-4d	   早 早", (*a_PcGdList)[1].Hp, (*a_PcGdList)[1].Mp, num, (*a_ItemList)[13].Name, (*a_ItemList)[13].Star, (*a_ItemList)[13].Dex, (*a_ItemList)[13].a_Int, (*a_ItemList)[13].Star, (*a_ItemList)[13].Grade, (*a_ItemList)[13].Level, (*a_ItemList)[13].Char_Type, (*a_ItemList)[13].Cost);
		y++;
		num++;
		Pc::gotoxy2(x, y);
		printf("早  早奢問:%-5d          寞橫:%-5d    早     早					                                                                   早 早", (*a_PcGdList)[1].Attack, (*a_PcGdList)[1].Deffence);
		y++;
		num++;
		Pc::gotoxy2(x, y);
		printf("早  早奢樓:%-2d            溯漣:%-3d       早     早						                                                           早 早", (*a_PcGdList)[1].Att_Speed, (*a_PcGdList)[1].Level);
		y++;
		num++;
		Pc::gotoxy2(x, y);
		printf("早  早��:%-4d 團繪:%-4d 雖棟:%-4d       早     早						                                                           早 早", (*a_PcGdList)[1].Str, (*a_PcGdList)[1].Dex, (*a_PcGdList)[1].INT);
		y++;
		num++;
		Pc::gotoxy2(x, y);

		printf("早  曲收收收收收收收收收收收收收收收收收旭     早				                                                                           早 早");
		y++;
		Pc::gotoxy2(x, y);
		printf("早  旨收收收收收收收收收收收收收收收收收旬     早			                                                                                   早 早");
		y++;
		Pc::gotoxy2(x, y);
		printf("早  早檜葷:%-14s 霜機:%-9s早     早		                                                                                           早 早", (*a_PcGdList)[2].Name, (*a_PcGdList)[2].Char_Type);
		y++;
		Pc::gotoxy2(x, y);
		printf("早  早羹溘:%-8d       葆釭:%-8d 早     早							                                                       早 早", (*a_PcGdList)[2].Hp, (*a_PcGdList)[2].Mp);
		y++;
		Pc::gotoxy2(x, y);
		printf("早  早奢問:%-5d          寞橫:%-5d    早     早					                                                                   早 早", (*a_PcGdList)[2].Attack, (*a_PcGdList)[2].Deffence);
		y++;
		Pc::gotoxy2(x, y);
		printf("早  早奢樓:%-2d            溯漣:%-3d       早     早						                                                           早 早", (*a_PcGdList)[2].Att_Speed, (*a_PcGdList)[2].Level);
		y++;
		Pc::gotoxy2(x, y);
		printf("早  早��:%-4d 團繪:%-4d 雖棟:%-4d       早     早						                                                           早 早", (*a_PcGdList)[2].Str, (*a_PcGdList)[2].Dex, (*a_PcGdList)[2].INT);
		y++;
		Pc::gotoxy2(x, y);

		printf("早  曲收收收收收收收收收收收收收收收收收旭     曲收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旭 早");
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
			FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //�羃�

		x += 79;
		Pc::gotoxy2(x, y);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN); //喻嫌儀
		printf("<Menu>");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //�羃�
		x = 0;
		y++;
		Pc::gotoxy2(x, y);
		printf("早                                                                            早早");
		x += 100;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_GREEN); //ж棺儀
		printf("Please Select a Menu.                                                       ");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //�羃�

		x += 160;
		Pc::gotoxy2(x, y);
		printf("早");
		x = 0;
		y++;
		Pc::gotoxy2(x, y);
		printf("早                                                                            早早  1.Buy																	  早");
		y++;
		Pc::gotoxy2(x, y);
		printf("早                                                                            早早  2.Sell                                                                    早");
		y++;
		Pc::gotoxy2(x, y);
		printf("早                                                                            早早  3.EXIT                                                                    早");
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
		printf("早                                                                            早早  廓�ㄧ� 殮溘п輿撮蹂:                                                      早");
		y++;
		Pc::gotoxy2(x, y);
		printf("早                                                                            早早                                                                            早");
		y++;
		Pc::gotoxy2(x, y);
		printf("曲收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旭曲收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旭");




		int a_Sel = 0;
		y = 46;
		x += 105;
		Pc::gotoxy2(x, y);
		scanf_s("%d", &a_Sel);
		//getchar();
		if (a_Sel < 1 || a_Sel > 2)
		{
			if (a_Sel == 3)
			{

				break;
			}

			//getchar();

		}
		if (a_Sel == 1) //buy
		{
			system("cls");
			while (true)
			{
				x = 0;
				y = 0;

				num = 1;
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
					FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //�羃�

				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
					FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN); //喻嫌儀
				printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t   來");
				printf(" %-8d", (*a_PcList)[login].Gold);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
					FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //�羃�

				x--;
				y++;
				Pc::gotoxy2(x, y);
				printf("早                                                                                                                                                            早");
				y++;
				Pc::gotoxy2(x, y);
				printf("早  旨收收收收收收收收收收收收收收收收收旬     旨收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旬 早");
				y++;
				Pc::gotoxy2(x, y);
				printf("早  早檜葷:%-14s 霜機:%-9s早     早", (*a_PcList)[login].Name, (*a_PcList)[login].Char_Type);

				x += 49;
				Pc::gotoxy2(x, y);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
					FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN); //喻嫌儀
				printf("<嬴檜蠱跡煙>");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
					FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //�羃�
				x += 106;
				y = 4;
				Pc::gotoxy2(x, y);
				printf("早 早");

				x = 0;
				y = 4;


				y++;
				Pc::gotoxy2(x, y);
				printf("早  早羹溘:%-8d       葆釭:%-8d 早     早										                                   早 早", (*a_PcList)[login].Max_Hp, (*a_PcList)[login].Max_Mp);
				y++;
				Pc::gotoxy2(x, y);
				printf("早  早奢問:%-5d          寞橫:%-5d    早     早%-3d.檜葷:%-13s��:%-3d 團繪:%-3d 雖棟:%-3d 撩晝:%-2d 蛔晝:%-2d溯漣:%-3d瞪辨霜機:%-10s陛問:%-4d        早 早", (*a_PcList)[login].Attack, (*a_PcList)[login].Deffence, num, (*a_ItemList)[0].Name, (*a_ItemList)[0].Star, (*a_ItemList)[0].Dex, (*a_ItemList)[0].a_Int, (*a_ItemList)[0].Star, (*a_ItemList)[0].Grade, (*a_ItemList)[0].Level, (*a_ItemList)[0].Char_Type, (*a_ItemList)[0].Cost);
				y++;
				num++;
				Pc::gotoxy2(x, y);
				printf("早  早奢樓:%-2d            溯漣:%-3d       早     早%-3d.檜葷:%-13s��:%-3d 團繪:%-3d 雖棟:%-3d 撩晝:%-2d 蛔晝:%-2d溯漣:%-3d瞪辨霜機:%-10s陛問:%-4d	   早 早", (*a_PcList)[login].Att_Speed, (*a_PcList)[login].Level, num, (*a_ItemList)[1].Name, (*a_ItemList)[1].Star, (*a_ItemList)[1].Dex, (*a_ItemList)[1].a_Int, (*a_ItemList)[1].Star, (*a_ItemList)[1].Grade, (*a_ItemList)[1].Level, (*a_ItemList)[1].Char_Type, (*a_ItemList)[1].Cost);
				y++;
				num++;
				Pc::gotoxy2(x, y);
				printf("早  早��:%-4d 團繪:%-4d 雖棟:%-4d       早     早%-3d.檜葷:%-13s��:%-3d 團繪:%-3d 雖棟:%-3d 撩晝:%-2d 蛔晝:%-2d溯漣:%-3d瞪辨霜機:%-10s陛問:%-4d	   早 早", (*a_PcList)[login].Str, (*a_PcList)[login].Dex, (*a_PcList)[login].INT, num, (*a_ItemList)[2].Name, (*a_ItemList)[2].Star, (*a_ItemList)[2].Dex, (*a_ItemList)[2].a_Int, (*a_ItemList)[2].Star, (*a_ItemList)[2].Grade, (*a_ItemList)[2].Level, (*a_ItemList)[2].Char_Type, (*a_ItemList)[2].Cost);
				y++;
				num++;
				Pc::gotoxy2(x, y);

				printf("早  曲收收收收收收收收收收收收收收收收收旭     早%-3d.檜葷:%-13s��:%-3d 團繪:%-3d 雖棟:%-3d 撩晝:%-2d 蛔晝:%-2d溯漣:%-3d瞪辨霜機:%-10s陛問:%-4d	   早 早", num, (*a_ItemList)[3].Name, (*a_ItemList)[3].Star, (*a_ItemList)[3].Dex, (*a_ItemList)[3].a_Int, (*a_ItemList)[3].Star, (*a_ItemList)[3].Grade, (*a_ItemList)[3].Level, (*a_ItemList)[3].Char_Type, (*a_ItemList)[3].Cost);
				y++;
				num++;
				Pc::gotoxy2(x, y);
				printf("早  旨收收收收收收收收收收收收收收收收收旬     早%-3d.檜葷:%-13s��:%-3d 團繪:%-3d 雖棟:%-3d 撩晝:%-2d 蛔晝:%-2d溯漣:%-3d瞪辨霜機:%-10s陛問:%-4d	   早 早", num, (*a_ItemList)[4].Name, (*a_ItemList)[4].Star, (*a_ItemList)[4].Dex, (*a_ItemList)[4].a_Int, (*a_ItemList)[4].Star, (*a_ItemList)[4].Grade, (*a_ItemList)[4].Level, (*a_ItemList)[4].Char_Type, (*a_ItemList)[4].Cost);
				y++;
				num++;
				Pc::gotoxy2(x, y);
				printf("早  早檜葷:%-14s 霜機:%-9s早     早%-3d.檜葷:%-13s��:%-3d 團繪:%-3d 雖棟:%-3d 撩晝:%-2d 蛔晝:%-2d溯漣:%-3d瞪辨霜機:%-10s陛問:%-4d	   早 早", (*a_PcGdList)[0].Name, (*a_PcGdList)[0].Char_Type, num, (*a_ItemList)[5].Name, (*a_ItemList)[5].Star, (*a_ItemList)[5].Dex, (*a_ItemList)[5].a_Int, (*a_ItemList)[5].Star, (*a_ItemList)[5].Grade, (*a_ItemList)[5].Level, (*a_ItemList)[5].Char_Type, (*a_ItemList)[5].Cost);
				y++;
				num++;
				Pc::gotoxy2(x, y);
				printf("早  早羹溘:%-8d       葆釭:%-8d 早     早%-3d.檜葷:%-13s��:%-3d 團繪:%-3d 雖棟:%-3d 撩晝:%-2d 蛔晝:%-2d溯漣:%-3d瞪辨霜機:%-10s陛問:%-4d	   早 早", (*a_PcGdList)[0].Hp, (*a_PcGdList)[0].Mp, num, (*a_ItemList)[6].Name, (*a_ItemList)[6].Star, (*a_ItemList)[6].Dex, (*a_ItemList)[6].a_Int, (*a_ItemList)[6].Star, (*a_ItemList)[6].Grade, (*a_ItemList)[6].Level, (*a_ItemList)[6].Char_Type, (*a_ItemList)[6].Cost);
				y++;
				num++;
				Pc::gotoxy2(x, y);
				printf("早  早奢問:%-5d          寞橫:%-5d    早     早%-3d.檜葷:%-13s��:%-3d 團繪:%-3d 雖棟:%-3d 撩晝:%-2d 蛔晝:%-2d溯漣:%-3d瞪辨霜機:%-10s陛問:%-4d        早 早", (*a_PcGdList)[0].Attack, (*a_PcGdList)[0].Deffence, num, (*a_ItemList)[7].Name, (*a_ItemList)[7].Star, (*a_ItemList)[7].Dex, (*a_ItemList)[7].a_Int, (*a_ItemList)[7].Star, (*a_ItemList)[7].Grade, (*a_ItemList)[7].Level, (*a_ItemList)[7].Char_Type, (*a_ItemList)[7].Cost);
				y++;
				num++;
				Pc::gotoxy2(x, y);
				printf("早  早奢樓:%-2d            溯漣:%-3d       早     早%-3d.檜葷:%-13s��:%-3d 團繪:%-3d 雖棟:%-3d 撩晝:%-2d 蛔晝:%-2d溯漣:%-3d瞪辨霜機:%-10s陛問:%-4d	   早 早", (*a_PcGdList)[0].Att_Speed, (*a_PcGdList)[0].Level, num, (*a_ItemList)[8].Name, (*a_ItemList)[8].Star, (*a_ItemList)[8].Dex, (*a_ItemList)[8].a_Int, (*a_ItemList)[8].Star, (*a_ItemList)[8].Grade, (*a_ItemList)[8].Level, (*a_ItemList)[8].Char_Type, (*a_ItemList)[8].Cost);
				y++;
				num++;
				Pc::gotoxy2(x, y);
				printf("早  早��:%-4d 團繪:%-4d 雖棟:%-4d       早     早%-3d.檜葷:%-13s��:%-3d 團繪:%-3d 雖棟:%-3d 撩晝:%-2d 蛔晝:%-2d溯漣:%-3d瞪辨霜機:%-10s陛問:%-4d	   早 早", (*a_PcGdList)[0].Str, (*a_PcGdList)[0].Dex, (*a_PcGdList)[0].INT, num, (*a_ItemList)[9].Name, (*a_ItemList)[9].Star, (*a_ItemList)[9].Dex, (*a_ItemList)[9].a_Int, (*a_ItemList)[9].Star, (*a_ItemList)[9].Grade, (*a_ItemList)[9].Level, (*a_ItemList)[9].Char_Type, (*a_ItemList)[9].Cost);
				y++;
				num++;
				Pc::gotoxy2(x, y);

				printf("早  曲收收收收收收收收收收收收收收收收收旭     早%-3d.檜葷:%-13s��:%-3d 團繪:%-3d 雖棟:%-3d 撩晝:%-2d 蛔晝:%-2d溯漣:%-3d瞪辨霜機:%-10s陛問:%-4d	   早 早", num, (*a_ItemList)[10].Name, (*a_ItemList)[10].Star, (*a_ItemList)[10].Dex, (*a_ItemList)[10].a_Int, (*a_ItemList)[10].Star, (*a_ItemList)[10].Grade, (*a_ItemList)[10].Level, (*a_ItemList)[10].Char_Type, (*a_ItemList)[10].Cost);
				y++;
				num++;
				Pc::gotoxy2(x, y);
				printf("早  旨收收收收收收收收收收收收收收收收收旬     早%-3d.檜葷:%-13s��:%-3d 團繪:%-3d 雖棟:%-3d 撩晝:%-2d 蛔晝:%-2d溯漣:%-3d瞪辨霜機:%-10s陛問:%-4d	   早 早", num, (*a_ItemList)[11].Name, (*a_ItemList)[11].Star, (*a_ItemList)[11].Dex, (*a_ItemList)[11].a_Int, (*a_ItemList)[11].Star, (*a_ItemList)[11].Grade, (*a_ItemList)[11].Level, (*a_ItemList)[11].Char_Type, (*a_ItemList)[11].Cost);
				y++;
				num++;
				Pc::gotoxy2(x, y);
				printf("早  早檜葷:%-14s 霜機:%-9s早     早%-3d.檜葷:%-13s��:%-3d 團繪:%-3d 雖棟:%-3d 撩晝:%-2d 蛔晝:%-2d溯漣:%-3d瞪辨霜機:%-10s陛問:%-4d	   早 早", (*a_PcGdList)[1].Name, (*a_PcGdList)[1].Char_Type, num, (*a_ItemList)[12].Name, (*a_ItemList)[12].Star, (*a_ItemList)[12].Dex, (*a_ItemList)[12].a_Int, (*a_ItemList)[12].Star, (*a_ItemList)[12].Grade, (*a_ItemList)[12].Level, (*a_ItemList)[12].Char_Type, (*a_ItemList)[12].Cost);
				y++;
				num++;
				Pc::gotoxy2(x, y);
				printf("早  早羹溘:%-8d       葆釭:%-8d 早     早%-3d.檜葷:%-13s��:%-3d 團繪:%-3d 雖棟:%-3d 撩晝:%-2d 蛔晝:%-2d溯漣:%-3d瞪辨霜機:%-10s陛問:%-4d	   早 早", (*a_PcGdList)[1].Hp, (*a_PcGdList)[1].Mp, num, (*a_ItemList)[13].Name, (*a_ItemList)[13].Star, (*a_ItemList)[13].Dex, (*a_ItemList)[13].a_Int, (*a_ItemList)[13].Star, (*a_ItemList)[13].Grade, (*a_ItemList)[13].Level, (*a_ItemList)[13].Char_Type, (*a_ItemList)[13].Cost);
				y++;
				num++;
				Pc::gotoxy2(x, y);
				printf("早  早奢問:%-5d          寞橫:%-5d    早     早					                                                                   早 早", (*a_PcGdList)[1].Attack, (*a_PcGdList)[1].Deffence);
				y++;
				num++;
				Pc::gotoxy2(x, y);
				printf("早  早奢樓:%-2d            溯漣:%-3d       早     早						                                                           早 早", (*a_PcGdList)[1].Att_Speed, (*a_PcGdList)[1].Level);
				y++;
				num++;
				Pc::gotoxy2(x, y);
				printf("早  早��:%-4d 團繪:%-4d 雖棟:%-4d       早     早						                                                           早 早", (*a_PcGdList)[1].Str, (*a_PcGdList)[1].Dex, (*a_PcGdList)[1].INT);
				y++;
				num++;
				Pc::gotoxy2(x, y);

				printf("早  曲收收收收收收收收收收收收收收收收收旭     早				                                                                           早 早");
				y++;
				Pc::gotoxy2(x, y);
				printf("早  旨收收收收收收收收收收收收收收收收收旬     早			                                                                                   早 早");
				y++;
				Pc::gotoxy2(x, y);
				printf("早  早檜葷:%-14s 霜機:%-9s早     早		                                                                                           早 早", (*a_PcGdList)[2].Name, (*a_PcGdList)[2].Char_Type);
				y++;
				Pc::gotoxy2(x, y);
				printf("早  早羹溘:%-8d       葆釭:%-8d 早     早							                                                       早 早", (*a_PcGdList)[2].Hp, (*a_PcGdList)[2].Mp);
				y++;
				Pc::gotoxy2(x, y);
				printf("早  早奢問:%-5d          寞橫:%-5d    早     早					                                                                   早 早", (*a_PcGdList)[2].Attack, (*a_PcGdList)[2].Deffence);
				y++;
				Pc::gotoxy2(x, y);
				printf("早  早奢樓:%-2d            溯漣:%-3d       早     早						                                                           早 早", (*a_PcGdList)[2].Att_Speed, (*a_PcGdList)[2].Level);
				y++;
				Pc::gotoxy2(x, y);
				printf("早  早��:%-4d 團繪:%-4d 雖棟:%-4d       早     早						                                                           早 早", (*a_PcGdList)[2].Str, (*a_PcGdList)[2].Dex, (*a_PcGdList)[2].INT);
				y++;
				Pc::gotoxy2(x, y);

				printf("早  曲收收收收收收收收收收收收收收收收收旭     曲收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旭 早");
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
					FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //�羃�

				x += 79;
				Pc::gotoxy2(x, y);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
					FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN); //喻嫌儀
				printf("<Menu>");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
					FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //�羃�
				x = 0;
				y++;
				Pc::gotoxy2(x, y);
				printf("早                                                                            早早");
				x += 100;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
					FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_GREEN); //ж棺儀
				printf("Please Select a Menu.                                                       ");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
					FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //�羃�

				x += 160;
				Pc::gotoxy2(x, y);
				printf("早");
				x = 0;
				y++;
				Pc::gotoxy2(x, y);
				printf("早                                                                            早早  																	      早");
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
				printf("早                                                                            早早  餌褒嬴檜蠱曖 廓�ㄧ� 殮溘п輿撮蹂:                                         早");
				y++;
				Pc::gotoxy2(x, y);
				printf("早                                                                            早早                                                                            早");
				y++;
				Pc::gotoxy2(x, y);
				printf("曲收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旭曲收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旭");



				int by_Sel = 0;
				y = 46;
				x += 119;
				Pc::gotoxy2(x, y);
				scanf_s("%d", &by_Sel);
				getchar();

				by_Sel--;

				if ((*a_PcList)[login].Gold < (*a_ItemList)[by_Sel].Cost)
				{
					printf("旎擋檜 睡褶м棲棻");

					getchar();
					break;
				}
				if ((*a_PcList)[login].Level < (*a_ItemList)[by_Sel].Level)
				{
					printf("溯漣檜 睡褶м棲棻");
					getchar();
					break;

				}
				if (strcmp((*a_PcList)[login].Char_Type, (*a_ItemList)[by_Sel].Char_Type) != 0)
				{
					printf("霜機檜 棻落棲棻");
					getchar();
					break;
				}

				(*a_PcList)[login].Gold -= (*a_ItemList)[by_Sel].Cost;
				Inven::InvenItem(a_ItemList, a_InList, by_Sel);
				//Inven::InvenList(a_InList);

				//test 
				//Inven::InvenList(a_InList);

				break;


			}//while(true) by while
			//getchar();
		}//if (a_Sel == 1)


		 //sell
		else if (a_Sel == 2)
		{
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
					FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //�羃�

				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
					FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN); //喻嫌儀
				printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t   來");
				printf(" %-8d", (*a_PcList)[login].Gold);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
					FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //�羃�

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
				printf("早  早��:%-4d 團繪:%-4d 雖棟:%-4d       早                                                                                                                    早", (*a_PcList)[login].Str, (*a_PcList)[login].Dex, (*a_PcList)[login].INT);
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
				printf("早  早��:%-4d 團繪:%-4d 雖棟:%-4d       早                                                                                                                    早", (*a_PcGdList)[0].Str, (*a_PcGdList)[0].Dex, (*a_PcGdList)[0].INT);
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
				printf("早  早��:%-4d 團繪:%-4d 雖棟:%-4d       早                                                                                                                    早", (*a_PcGdList)[1].Str, (*a_PcGdList)[1].Dex, (*a_PcGdList)[1].INT);
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
				printf("早  早��:%-4d 團繪:%-4d 雖棟:%-4d       早                                                                                                                    早", (*a_PcGdList)[2].Str, (*a_PcGdList)[2].Dex, (*a_PcGdList)[2].INT);
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
					FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //�羃�

				x += 79;
				Pc::gotoxy2(x, y);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
					FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN); //ж棺儀
				printf("<Menu>");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
					FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //�羃�
				x = 0;
				y++;
				Pc::gotoxy2(x, y);
				printf("早                                                                            早早                                                                            早");
				y++;
				Pc::gotoxy2(x, y);
				printf("早                                                                            早早99.釭陛晦				                                                      早");
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
				printf("早                                                                            早早だ褒廓�ㄧ� 殮溘п輿撮蹂:                                                    早");
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
					FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //�羃�
				Pc::gotoxy2(156, y); printf("早早"); y++;

				for (int i = 0; i < 25; i++)
				{
					Pc::gotoxy2(x, y);
					printf(" 早                                                                                                          早");

					if (a_InList->size() > i)
					{
						Pc::gotoxy2(50, y);
						printf("%-3d.檜葷:%-13s��:%-3d 團繪:%-3d 雖棟:%-3d 撩晝:%-2d 蛔晝:%-2d溯漣:%-3d瞪辨霜機:%-10s陛問:%-4d", i + 1, (*a_InList)[i].Name,
							(*a_InList)[i].Str, (*a_InList)[i].Dex, (*a_InList)[i].a_Int, (*a_InList)[i].Star, (*a_InList)[i].Grade, (*a_InList)[i].Level, (*a_InList)[i].Char_Type,
							(*a_InList)[i].Cost);
					}
					y++;
				}
				Pc::gotoxy2(x, y); printf(" 曲收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旭");
				//早%-3d.檜葷:%-13s�� : %-3d 團繪 : %-3d 雖棟 : %-3d 撩晝 : %-2d 蛔晝 : %-2d溯漣 : %-3d瞪辨霜機 : %-10s陛問 : %-4d        早 早


				int by_Sel = 0;
			
				y = 46;
				x = 108;
				Pc::gotoxy2(x, y);
				scanf_s("%d", &by_Sel);
				getchar();
				if (by_Sel <0 || by_Sel > a_InList->size())
				{
					if (by_Sel == 99) break;
					
					x = 2;
					y = 36;
					Pc::gotoxy2(x, y);
					printf("澀跤殮溘ж樟蝗棲棻");
					return;
				}

				by_Sel--;

				system("cls");
				x = 98;
				y = 46;
				Pc::gotoxy2(x, y);
				printf("嬴檜蠱擊 だ衛啊蝗棲梱? 1.Yes 2.No");
				int a_Sel = 0;
				
				y = 46;
				x = 135;
				Pc::gotoxy2(x, y);
				scanf("%d", &a_Sel);
				getchar();
				
				if(a_Sel == 2)
					return;
				

				(*a_PcList)[login].Gold += (*a_InList)[by_Sel].Cost / 2;

				int SellResult = (*a_InList)[by_Sel].Cost / 2;
				a_InList->erase(a_InList->begin() + by_Sel);
				system("cls");
				x = 95;
				y = 46;
				Pc::gotoxy2(x, y);
				printf("だ褐旎擋 :%d  Ы溯檜橫 絲:%d\n", SellResult,(*a_PcList)[login].Gold);
				
			//	system("cls");
				//break;

				getchar();

			}




		}//else if (a_Sel == 2)
	}
}
