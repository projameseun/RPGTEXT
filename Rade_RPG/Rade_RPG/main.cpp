#pragma once
#include "Interface.h"
#include "Inven.h"
#include <time.h>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <string>
#include <string.h>
#include <windows.h>
#include "Item.h"
#include "Shop.h"
#include "Monster.h"
#include "HallOf.h"

void gotoxy(int x, int y)
{
	COORD Pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);  //<--#include <windows.h> 
}

//int Login = 0;

int a_Log = 0;

void main()
{
	
	//Login = -1;
	bool isChange = true;
	bool isReverse = true; //반전공간
	bool isSleep = true;
	int  re_Count = 0; //반전카운트

	system("mode con: cols=160 lines=50");
	srand(unsigned(time(NULL)));  //시간 계속초기화

	vector<Pc> PcList;
	vector<Guild> GdList;
	vector<PcGuild> PcGdList;
	vector<Interface>a_Inter;
	vector<Inven> Inven;
	vector <Item> ItemList;
	vector <Monster>MonList;
	vector <HallOf> HallList;
	
	//UI ui_Manger;
	int x = 0;
	int y = 0;

	//test

	/*Pc::PcNewAdd(&PcList);
	Guild::GuildNewAdd(&GdList, &PcList);
	Guild::GdPrintList(&GdList, &PcList,&PcGdList);*/

	int log = -1;
//	Hall::HallSetting(&HallList);
	Monster::MonSetting(&MonList);
	Item::ItemNewSetting(&ItemList);
	Interface::Load(&PcList, &PcGdList,&Inven,log);
	HallOf::HallLoad(&PcList, &HallList, log);

	while (true)
	{
		if (log != -1)
		{
			system("cls");
			break;
		}
		if (isChange == true)
		{
			re_Count = 0;

			x = 57;
			y = 11;
			//드래곤글씨체
			/*
					■■■■□□□□■□□□■□□□□■■□□□■□□□□□□□□□□
					■□□□■□□□■□□□■□□□□■□■□□■□□□□□□□□□□
					■□□□■□□□■□□□■□□□□■□□■□■□□□□□□□□□□
					■□□□■□□□■□□□■□□□□■□□□■■□□□□□□□□□□
					■■■■□□□□□■■■□□□□□■□□□□■□□□□□□□□□□
					□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□
					■■■■□□□□■■■■□□□□□□■■■■□□□□□□□■■■□
					■□□□■□□□■□□□■□□□□■□□□□■□□□□□■□□□■
					■□□□■□□□■□□□■□□□□■■■■■■□□□□□■□■■■
					■□□□■□□□■■■■□□□□□■□□□□■□□□□□■□□□■
					■■■■□□□□■□□□■□□□□■□□□□■□□□□□□■■■□
					□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□
					□□□□□□□□□□□□□□□□□■■□□□■□□□□□□□□□□
					□□□□□□□□□□□□□□□□□■□■□□■□□□□□□□□□□
					□□□□□□□□□□□□□□□□□■□□■□■□□□□□□□□□□
					□□□□□□□□□□□□□□□□□■□□□■■□□□□□□□□□□
					□□□□□□□□□□□□□□□□□■□□□□■□□□□□□□□□□*/
					//   ■    □
			gotoxy(x, y);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
				FOREGROUND_INTENSITY | FOREGROUND_RED); //빨강색
			printf("■■■■\t■      ■\t■■      ■");
			Sleep(100);
			y++;
			gotoxy(x, y);
			printf("■      ■\t■      ■\t■  ■    ■");
			Sleep(100);
			y++;
			gotoxy(x, y);
			printf("■      ■\t■      ■\t■   ■   ■");
			Sleep(100);
			y++;
			gotoxy(x, y);
			printf("■      ■\t■      ■\t■      ■■");
			Sleep(100);
			y++;
			gotoxy(x, y);
			printf("■■■■   \t  ■■■\t■        ■");
			Sleep(100);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
				FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //흰색

			y += 6;
			x -= 20;
			gotoxy(x, y); //30 , 21


			//\t2번
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
				FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN); //노랑색
			printf("■■■■\t   ■■■■\t  ■■■■\t  ■■■\t  ■■■■\t  ■■\t    ■");
			Sleep(100);
			y++;
			gotoxy(x, y);
			printf("■     ■\t   ■     ■\t■        ■\t■      ■\t■        ■\t  ■  ■    ■");
			Sleep(100);
			y++;
			gotoxy(x, y);
			printf("■     ■\t   ■     ■\t■■■■■■\t■  ■■■\t■        ■\t  ■    ■  ■");
			Sleep(100);
			y++;
			gotoxy(x, y);
			printf("■     ■\t   ■■■■\t■        ■\t■      ■\t■        ■\t  ■      ■■");
			Sleep(100);
			y++;
			gotoxy(x, y);
			printf("■■■■\t   ■     ■\t■        ■\t  ■■■\t  ■■■■\t  ■        ■");
			Sleep(100);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
				FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //흰색
			isChange = !isChange; //반전
		} //true
		if (isChange == false)
		{

			while (true)
			{

				if (log != -1) break;
				x = 50;
				y = 11;



				int key;
				///////////Key 값 입력받는곳
				if (kbhit())
				{
					key = getch();
					if (key == 49) //1 login
					{
						system("cls");
						x = 0;
						y = 0;

						y += 5;
						x += 60;
						gotoxy(x, y);
						printf("<=====이름을 입력해주세요=====>");
					

						char id[128];
						x = 0;
						y = 0;

						y += 7;
						x += 70;
						gotoxy(x, y);
						scanf("%s", id);
						getchar();
						int Login = -1;

						for (int i = 0; i < PcList.size(); i++)
						{
							if (strcmp(id, PcList[i].Name) == 0)
							{
								system("cls");
								x= 0;
								y= 0;

								y += 5;
								x += 55;
								gotoxy(x, y);
								printf("%s 님 로그인되셨습니다", PcList[i].Name);
								//getchar();
								system("cls");
								Sleep(500);
								

								x = 0;
								y = 0;

								y = 10;
								x = 30;
							
								Pc::CursorView(0);
								gotoxy(x, y);
								printf("로그인중입니다...□□□□□□ ");
								x = 30;
								//getchar();
								gotoxy(x, y);
								Sleep(100);
								printf("로그인중입니다...■□□□□□");
								
								x = 30;
								gotoxy(x, y);
								Sleep(100);
								printf("로그인중입니다...■■□□□□");

								x = 30;
								gotoxy(x, y);
								Sleep(100);
								printf("로그인중입니다...■■■□□□");

								x = 30;
								gotoxy(x, y);
								Sleep(100);
								printf("로그인중입니다...■■■■□□ ");

								x = 30;
								gotoxy(x, y);
								Sleep(100);
								printf("로그인중입니다...■■■■■□");

								x = 30;
								gotoxy(x, y);
								Sleep(100);
								printf("로그인중입니다...■■■■■■");

								system("cls");
								y = 10;
								x = 30;
								gotoxy(x, y);
								printf("잠시후 게임으로 들어갑니다 즐거운 시간되세요");
								isSleep = !isSleep;
								Sleep(500);
								log = i;
								Login = i;
								a_Log = i;
								

								
								//getchar();
								break;

							}
							


						}

						if (log == -1)
						{
							system("cls");
							x = 0;
							y = 0;

							y += 5;
							x += 60;
							gotoxy(x, y);
							printf("이름이 없습니다");
							getchar();
							system("cls");
						}

						;
					}
					else if (key == 50) // 2 sign
					{
						system("cls");

						Pc::PcNewAdd(&PcList);
						Guild::GuildNewAdd(&GdList, &PcList);
						PcGuild::PcGdPrintList(&PcGdList,&PcList);
						

						

						//UI::UIInven(&PcList, &GdList);



						system("cls");
					}
					else if (key == 27) //esc
					{
						system("cls");
						printf("이용해주셔서 감사합니다\n");
						getchar();
						exit(1);
					}
				}

				if (isReverse == true)
				{
					if (log != -1) break;

					x = 57;
					y = 11;
					gotoxy(x, y);

					printf("■■■■\t■      ■\t■■      ■");
					y++;
					gotoxy(x, y);
					printf("■      ■\t■      ■\t■  ■    ■");
					y++;
					gotoxy(x, y);
					printf("■      ■\t■      ■\t■   ■   ■");
					y++;
					gotoxy(x, y);
					printf("■      ■\t■      ■\t■      ■■");
					y++;
					gotoxy(x, y);
					printf("■■■■   \t  ■■■\t■        ■");


					y += 6;
					x -= 20;
					gotoxy(x, y); //30 , 21


					//\t2번

					printf("■■■■\t   ■■■■\t  ■■■■\t  ■■■\t  ■■■■\t  ■■\t    ■");
					y++;
					gotoxy(x, y);
					printf("■     ■\t   ■     ■\t■        ■\t■      ■\t■        ■\t  ■  ■    ■");
					y++;
					gotoxy(x, y);
					printf("■     ■\t   ■     ■\t■■■■■■\t■  ■■■\t■        ■\t  ■    ■  ■");
					y++;
					gotoxy(x, y);
					printf("■     ■\t   ■■■■\t■        ■\t■      ■\t■        ■\t  ■      ■■");
					y++;
					gotoxy(x, y);
					printf("■■■■\t   ■     ■\t■        ■\t  ■■■\t  ■■■■\t  ■        ■");
					//isChange = !isChange; //반전
					y += 9;
					x += 20;
					gotoxy(x, y);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN); //노랑색
					printf("1.로그인 \t2.가입하기 \tESC.종료                    제작자:ProJames");
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //흰색
					//printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━");
					if(isSleep == true)
					Sleep(500);

					isReverse = !isReverse;
				}//isreverse true

				 //반전 
				if (isReverse == false)
				{
					x = 57;
					y = 11;

					gotoxy(x, y);

					printf("□□□□\t□      □\t□□      □");
					y++;
					gotoxy(x, y);
					printf("□      □\t□      □\t□  □    □");
					y++;
					gotoxy(x, y);
					printf("□      □\t□      □\t□   □   □");
					y++;
					gotoxy(x, y);
					printf("□      □\t□      □\t□      □□");
					y++;
					gotoxy(x, y);
					printf("□□□□   \t  □□□\t□        □");


					y += 6;
					x -= 20;
					gotoxy(x, y); //30 , 21


					//\t2번

					printf("□□□□\t   □□□□\t  □□□□\t  □□□\t  □□□□\t  □□\t    □");
					y++;
					gotoxy(x, y);
					printf("□     □\t   □     □\t□        □\t□      □\t□        □\t  □  □    □");
					y++;
					gotoxy(x, y);
					printf("□     □\t   □     □\t□□□□□□\t□  □□□\t□        □\t  □    □  □");
					y++;
					gotoxy(x, y);
					printf("□     □\t   □□□□\t□        □\t□      □\t□        □\t  □      □□");
					y++;
					gotoxy(x, y);
					printf("□□□□\t   □     □\t□        □\t  □□□\t  □□□□\t  □        □");
					y += 9;
					x += 20;
					gotoxy(x, y);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN); //노랑색
					printf("1.로그인 \t2.가입하기 \tESC.종료 ");
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //흰색
					printf("                   제작자:ProJames");
					/*	int a_Sel = 0;
						scanf("%d", &a_Sel);
						getchar();

						if (a_Sel == 1)
						{
							system("cls");
							printf("로그인\n");
							getchar();
						}
						else if (a_Sel == 2)
						{
							printf("가입하기\n");
							getchar();
						}*/
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //흰색
					//getchar();

					if (isSleep == true)
						Sleep(500);

					isReverse = !isReverse;
					//re_Count++;
				}//isreverse false

				/*if (re_Count >5 )
				{
					isChange = !isChange;
					break;
				}*/
			}//if2번째 while


		} //if 2번째
		//getchar();
	}//title while


	Interface::Load(&PcList, &PcGdList, &Inven, a_Log);

 //로그인이되면 넘어갈수있는곳
	while (true)
	{
		
		
		

		
		x = 0;
		y = 0;

		//x++;
		//y++;







		gotoxy(x, y);
		printf("┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓");
		y++;
		gotoxy(x, y);
		printf("┃                                                                                                                                                            ┃");

		x++;
		gotoxy(x, y);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_GREEN); //하늘색
		printf("<Scence>");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //흰색

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN); //노랑색
		printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t   ⓖ");
		printf(" %-8d", PcList[a_Log].Gold);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //흰색

		x--;
		y++;
		gotoxy(x, y);
		printf("┃                                                                                                                                                            ┃");
		y++;
		gotoxy(x, y);
		printf("┃                                                                                                                                                            ┃");
		y++;
		gotoxy(x, y);
		printf("┃                                                                                                                                                            ┃");
		y++;
		gotoxy(x, y);
		printf("┃                                                                                                                                                            ┃");
		y++;
		gotoxy(x, y);
		printf("┃                                                                                                                                                            ┃");
		y++;
		gotoxy(x, y);
		printf("┃                                                                                                                                                            ┃");
		y++;
		gotoxy(x, y);
		printf("┃                                                                                                                                                            ┃");
		y++;
		gotoxy(x, y);
		printf("┃                                                                                                                                                            ┃");
		y++;
		gotoxy(x, y);
		printf("┃                                                                                                                                                            ┃");
		y++;
		gotoxy(x, y);
		printf("┃                                                                                                                                                            ┃");
		y++;
		gotoxy(x, y);
		printf("┃                                                                                                                                                            ┃");
		y++;
		gotoxy(x, y);
		printf("┃                                                                                                                                                            ┃");
		y++;

		gotoxy(x, y);
		printf("┃                                                                                                                                                            ┃");
		y++;
		gotoxy(x, y);
		printf("┃                                                                                                                                                            ┃");
		y++;
		gotoxy(x, y);
		printf("┃                                                                                                                                                            ┃");
		y++;
		gotoxy(x, y);
		printf("┃                                                                                                                                                            ┃");
		y++;
		gotoxy(x, y);
		printf("┃                                                                                                                                                            ┃");
		y++;
		gotoxy(x, y);
		printf("┃                                                                                                                                                            ┃");
		y++;
		gotoxy(x, y);
		printf("┃                                                                                                                                                            ┃");
		y++;
		gotoxy(x, y);
		printf("┃                                                                                                                                                            ┃");
		y++;
		gotoxy(x, y);
		printf("┃                                                                                                                                                            ┃");
		y++;
		gotoxy(x, y);
		printf("┃                                                                                                                                                            ┃");
		y++;
		gotoxy(x, y);
		printf("┃                                                                                                                                                            ┃");
		y++;
		gotoxy(x, y);
		printf("┃                                                                                                                                                            ┃");
		y++;
		gotoxy(x, y);
		printf("┃                                                                                                                                                            ┃");
		y++;
		gotoxy(x, y);
		printf("┃                                                                                                                                                            ┃");
		y++;
		gotoxy(x, y);
		printf("┃                                                                                                                                                            ┃");
		y++;
		gotoxy(x, y);
		printf("┃                                                                                                                                                            ┃");
		y++;
		gotoxy(x, y);
		printf("┃                                                                                                                                                            ┃");
		y++;
		gotoxy(x, y);
		printf("┃                                                                                                                                                            ┃");
		y++;
		gotoxy(x, y);
		printf("┃                                                                                                                                                            ┃");
		y++;
		gotoxy(x, y);
		printf("┃                                                                                                                                                            ┃");

		gotoxy(x, y);
		printf("┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛");
		y++;
		gotoxy(x, y);
		printf("┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓");

		x++;
		gotoxy(x, y);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_INTENSITY | FOREGROUND_RED); //하늘색
		printf("<SystemPrint>");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //흰색

		x += 79;
		gotoxy(x, y);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN); //노랑색
		printf("<Menu>");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //흰색
		x = 0;
		y++;
		gotoxy(x, y);
		printf("┃                                                                            ┃┃");
		x += 100;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_GREEN); //하늘색
		printf("Please Select a Menu.                                                       ");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //흰색

		x += 160;
		gotoxy(x, y);
		printf("┃");
		x = 0;
		y++;
		gotoxy(x, y);
		printf("┃                                                                            ┃┃  1.INVEN TORY                                                              ┃");
		y++;
		gotoxy(x, y);
		printf("┃                                                                            ┃┃  2.SHOP                                                                    ┃");
		y++;
		gotoxy(x, y);
		printf("┃                                                                            ┃┃  3.DUNGEON                                                                 ┃");
		y++;
		gotoxy(x, y);
		printf("┃                                                                            ┃┃  4.SAVE                                                                    ┃");
		y++;
		gotoxy(x, y);
		printf("┃                                                                            ┃┃  5.Hall Of Fame                                                            ┃");
		y++;
		gotoxy(x, y);
		printf("┃                                                                            ┃┃  6.EXIT                                                                    ┃");
		y++;
		gotoxy(x, y);
		printf("┃                                                                            ┃┃                                                                            ┃");
		y++;
		gotoxy(x, y);
		printf("┃                                                                            ┃┃                                                                            ┃");
		y++;
		gotoxy(x, y);
		printf("┃                                                                            ┃┃                                                                            ┃");
		y++;
		gotoxy(x, y);
		printf("┃                                                                            ┃┃                                                                            ┃");
		y++;
		gotoxy(x, y);
		printf("┃                                                                            ┃┃  번호를 입력해주세요:                                                      ┃");
		y++;
		gotoxy(x, y);
		printf("┃                                                                            ┃┃                                                                            ┃");
		y++;
		gotoxy(x, y);
		printf("┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛");


		int a_Sel = 0;
		y = 46;
		x += 105;
		gotoxy(x, y);
		scanf_s("%d", &a_Sel);
		getchar();
		if (a_Sel < 1 || a_Sel > 5)
		{
			if (a_Sel == 6)
			{
				x = 0;
				y = 0;
				x += 70;
				y = 12;
				gotoxy(x, y);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
					FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN); //노랑색
				printf("이용해주셔서 감사합니다\n");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
					FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //흰색
				break;
			}
			x = 0;
			y = 0;
			x += 60;
			y = 12;
			gotoxy(x, y);
			printf("번호를 잘못선택하셨습니다 다시선택해주세요");
			//getchar();
			
		}
		if (a_Sel == 1)
		{
			x = 0;
			y = 0;
			x += 70;
			y = 12;
			gotoxy(x, y);
			printf("인벤토리로 들어갑니다");
			y += 2;
			gotoxy(x, y);
			printf("    □□□□□");
			gotoxy(x, y);
			Sleep(200);
			printf("    ■□□□□");
			gotoxy(x, y);
			Sleep(200);
			printf("    ■■□□□");
			gotoxy(x, y);
			Sleep(200);
			printf("    ■■■□□");
			gotoxy(x, y);
			Sleep(200);
			printf("    ■■■■□");
			gotoxy(x, y);
			Sleep(200);
			printf("    ■■■■■");;

			Inven::InvenPrint(&PcList, &PcGdList,&Inven,a_Log);
			
			//getchar();
		}//if (a_Sel == 1)
		//shop
		else if (a_Sel == 2)
		{
			x = 0;
			y = 0;
			x += 65;
			y = 12;
			gotoxy(x, y);
			printf("상점으로 들어갑니다");
			y += 2;
			gotoxy(x, y);
			printf("    □□□□□");
			gotoxy(x, y);
			Sleep(200);
			printf("    ■□□□□");
			gotoxy(x, y);
			Sleep(200);
			printf("    ■■□□□");
			gotoxy(x, y);
			Sleep(200);
			printf("    ■■■□□");
			gotoxy(x, y);
			Sleep(200);
			printf("    ■■■■□");
			gotoxy(x, y);
			Sleep(200);
			printf("    ■■■■■");;

			Shop::ShopInfo(&PcList, &PcGdList, &ItemList,&Inven, a_Log);
			//Interface::Save(&PcList, &PcGdList, &Inven, &HallList, a_Log);
		}//else if (a_Sel == 2) shop
		else if (a_Sel == 3)
		{
			//battle
			Battle::BattleStart(&PcList, &PcGdList, &MonList,&HallList,a_Log);

		}
		else if (a_Sel == 4)
		{
			Interface::Save(&PcList, &PcGdList, &Inven, a_Log);
			HallOf::HallSave(&PcList, &HallList, log);

		}
		else if (a_Sel == 5)
		{
			//명예
			HallOf::HallPrint(&PcList, &HallList, a_Log);

		}
		
		


		getchar();
		system("cls");
		
	}//while

	HallList.clear();
	PcList.clear();
	PcGdList.clear();
	GdList.clear();
	ItemList.clear();
	Inven.clear();
	getchar();



	} //main



