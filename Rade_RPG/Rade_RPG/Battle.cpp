#include "Battle.h"



bool Battle::p_attack = true;
bool Battle::p2_attack = true;
bool Battle::p3_attack = true;
bool Battle::p4_attack = true;

bool Battle::e_attack = true;
bool Battle::e_attack2 = true;
bool Battle::e_attack3 = true;

Battle::Battle()
{
}


Battle::~Battle()
{
}

void Battle::BattleStart(vector<Pc>*a_PcList, vector<PcGuild>*a_PcGdList, vector<Monster>*a_MonList,vector<HallOf>*HallList,int log)
{
	system("cls");
	int x = 0;
	int y = 0;
	
	int DunCount = 0;
	

	srand(unsigned(time(NULL)));


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
		printf(" %-8d", (*a_PcList)[log].Gold);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //�羃�

		x--;
		y++;
		Pc::gotoxy2(x, y); printf("早                                                                                                                                                            早");y++;
		Pc::gotoxy2(x, y); printf("早  旨收收收收收收收收收收收收收收收收收旬                                                                                          旨收收收收收收收收收收收旬早");y++;
		Pc::gotoxy2(x, y); printf("早  早                                  早                                                                                          早                      早早");y++;
		Pc::gotoxy2(x, y); printf("早  早                                  早                                                                                          早                      早早");y++;
		Pc::gotoxy2(x, y); printf("早  早                                  早                                                                                          早                      早早");y++;
		Pc::gotoxy2(x, y); printf("早  早                                  早                                                                                          早                      早早");y++;
		Pc::gotoxy2(x, y); printf("早  早                                  早                                                                                          早                      早早");y++;
		Pc::gotoxy2(x, y); printf("早  曲收收收收收收收收收收收收收收收收收旭                                                                                          曲收收收收收收收收收收收旭早");y++;
		Pc::gotoxy2(x, y); printf("早  旨收收收收收收收收收收收收收收收收收旬                                                                                          旨收收收收收收收收收收收旬早"); y++;
		Pc::gotoxy2(x, y); printf("早  早                                  早                                                                                          早                      早早"); y++;
		Pc::gotoxy2(x, y); printf("早  早                                  早                                                                                          早                      早早"); y++;
		Pc::gotoxy2(x, y); printf("早  早                                  早                                                                                          早                      早早"); y++;
		Pc::gotoxy2(x, y); printf("早  早                                  早                                                                                          早                      早早"); y++;
		Pc::gotoxy2(x, y); printf("早  早                                  早                                                                                          早                      早早"); y++;
		Pc::gotoxy2(x, y); printf("早  曲收收收收收收收收收收收收收收收收收旭                                                                                          曲收收收收收收收收收收收旭早"); y++;
		Pc::gotoxy2(x, y); printf("早  旨收收收收收收收收收收收收收收收收收旬                                                                                          旨收收收收收收收收收收收旬早"); y++;
		Pc::gotoxy2(x, y); printf("早  早                                  早                                                                                          早                      早早"); y++;
		Pc::gotoxy2(x, y); printf("早  早                                  早                                                                                          早                      早早"); y++;
		Pc::gotoxy2(x, y); printf("早  早                                  早                                                                                          早                      早早"); y++;
		Pc::gotoxy2(x, y); printf("早  早                                  早                                                                                          早                      早早"); y++;
		Pc::gotoxy2(x, y); printf("早  早                                  早                                                                                          早                      早早"); y++;
		Pc::gotoxy2(x, y); printf("早  曲收收收收收收收收收收收收收收收收收旭                                                                                          曲收收收收收收收收收收收旭早"); y++;
		Pc::gotoxy2(x, y); printf("早  旨收收收收收收收收收收收收收收收收收旬                                                                                          旨收收收收收收收收收收收旬早"); y++;
		Pc::gotoxy2(x, y); printf("早  早                                  早                                                                                          早                      早早"); y++;
		Pc::gotoxy2(x, y); printf("早  早                                  早                                                                                          早                      早早"); y++;
		Pc::gotoxy2(x, y); printf("早  早                                  早                                                                                          早                      早早"); y++;
		Pc::gotoxy2(x, y); printf("早  早                                  早                                                                                          早                      早早"); y++;
		Pc::gotoxy2(x, y); printf("早  早                                  早                                                                                          早                      早早"); y++;
		Pc::gotoxy2(x, y); printf("早  曲收收收收收收收收收收收收收收收收收旭                                                                                          曲收收收收收收收收收收收旭早"); y++;
		Pc::gotoxy2(x, y); printf("早                                                                                                                                                            早"); y++;
		Pc::gotoxy2(x, y); printf("早                                                                                                                                                            早"); y++;
		Pc::gotoxy2(x, y); printf("早                                                                                                                                                            早");
		Pc::gotoxy2(x, y); printf("曲收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旭");y++;
		Pc::gotoxy2(x, y); printf("旨收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旬旨收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旬");x++;
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
		printf("早                                                                            早早1.螃辦剪曖 寞                                                               早");
		y++;
		Pc::gotoxy2(x, y);
		printf("早                                                                            早早2.橫菸曖濰模                                                                早");
		y++;
		Pc::gotoxy2(x, y);
		printf("早                                                                            早早3.萄楚堆曖寞                                                                早");
		y++;
		Pc::gotoxy2(x, y);
		printf("早                                                                            早早4.釭陛晦                                                                    早");
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
		printf("早                                                                            早早 廓�ㄧ� 殮溘п輿撮蹂.                                                       早");
		y++;
		Pc::gotoxy2(x, y);
		printf("早                                                                            早早                                                                            早");
		y++;
		Pc::gotoxy2(x, y);
		printf("曲收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旭曲收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旭");

		
		

		

	
		//寞菟橫陛晦

		int a_Sel = 0;
		y = 46;
		x += 105;
		Pc::gotoxy2(x, y);
		scanf_s("%d", &a_Sel);
		//getchar();
		if (a_Sel < 1 || a_Sel > 3)
		{
			if (a_Sel == 4)
			{

				break;
			}

			//getchar();

		}
		if (a_Sel == 1) //螃辦剪寞
		{
			
			
		


			//螃辦剪寞菟橫螞夠
			while (true)
			{
				MapPrint();
				x = 6;
				y = 4;

				// Ы溯檜橫 轎溘 睡碟

				Pc::gotoxy2(x, y);
				if ((*a_PcList)[log].Hp == 0)
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						FOREGROUND_INTENSITY | FOREGROUND_RED); //說鬼儀
					printf("檜葷:%-14s 霜機:%-9s", (*a_PcList)[log].Name, (*a_PcList)[log].Char_Type); y++; Pc::gotoxy2(x, y);
					printf("羹溘:%-8d       葆釭 : %-7d", (*a_PcList)[log].Hp, (*a_PcList)[log].Mp); y++; Pc::gotoxy2(x, y);
					printf("奢問:%-5d          寞橫:%-5d", (*a_PcList)[log].Attack, (*a_PcList)[log].Deffence); y++; Pc::gotoxy2(x, y);
					printf("奢樓:%-2d             溯漣 : %-3d", (*a_PcList)[log].Att_Speed, (*a_PcList)[log].Level); y++; Pc::gotoxy2(x, y);
					printf("��:%-4d    團繪:%-4d    雖棟:%-4d", (*a_PcList)[log].Str, (*a_PcList)[log].Dex, (*a_PcList)[log].INT); y += 3; Pc::gotoxy2(x, y);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //�羃�
				}
				else if ((*a_PcList)[log].Hp > 0)
				{
					printf("檜葷:%-14s 霜機:%-9s", (*a_PcList)[log].Name, (*a_PcList)[log].Char_Type); y++; Pc::gotoxy2(x, y);
					printf("羹溘:%-8d       葆釭 : %-7d", (*a_PcList)[log].Hp, (*a_PcList)[log].Mp); y++; Pc::gotoxy2(x, y);
					printf("奢問:%-5d          寞橫:%-5d", (*a_PcList)[log].Attack, (*a_PcList)[log].Deffence); y++; Pc::gotoxy2(x, y);
					printf("奢樓:%-2d             溯漣 : %-3d", (*a_PcList)[log].Att_Speed, (*a_PcList)[log].Level); y++; Pc::gotoxy2(x, y);
					printf("��:%-4d    團繪:%-4d    雖棟:%-4d", (*a_PcList)[log].Str, (*a_PcList)[log].Dex, (*a_PcList)[log].INT); y += 3; Pc::gotoxy2(x, y);
				}

				for (int i = 0; i < 3; i++)
				{
					if ((*a_PcGdList)[i].Hp == 0)
					{
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
							FOREGROUND_INTENSITY | FOREGROUND_RED); //說鬼儀

					}
					printf("檜葷:%-14s 霜機:%-9s", (*a_PcGdList)[i].Name, (*a_PcGdList)[i].Char_Type); y++; Pc::gotoxy2(x, y);
					printf("羹溘:%-8d       葆釭 : %-7d", (*a_PcGdList)[i].Hp, (*a_PcGdList)[i].Mp); y++; Pc::gotoxy2(x, y);
					printf("奢問:%-5d          寞橫:%-5d", (*a_PcGdList)[i].Attack, (*a_PcGdList)[i].Deffence); y++; Pc::gotoxy2(x, y);
					printf("奢樓:%-2d             溯漣 : %-3d", (*a_PcGdList)[i].Att_Speed, (*a_PcGdList)[i].Level); y++; Pc::gotoxy2(x, y);
					printf("��:%-4d    團繪:%-4d    雖棟:%-4d", (*a_PcGdList)[i].Str, (*a_PcGdList)[i].Dex, (*a_PcGdList)[i].INT); y += 3; Pc::gotoxy2(x, y);

					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //�羃�
				}//for (int i = 0; i < 3; i++)

				if ((*a_PcList)[log].Hp <= 0 && (*a_PcGdList)[0].Hp <= 0 && (*a_PcGdList)[1].Hp <= 0 && (*a_PcGdList)[2].Hp <= 0)
				{
					x = 2;
					y = 36;
					Pc::gotoxy2(x, y);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						FOREGROUND_INTENSITY | FOREGROUND_RED); //說鬼儀
					printf("Ы溯檜橫陛 賅舒 餌蜂ж艘蝗棲棻");

					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //�羃�
					getchar();
					break;
				}

				// 跨蝶攪 轎溘 睡碟
				//堅綰萼
				if (DunCount == 0)
				{
				 
					
					x = 134;
					y = 4;
					Pc::gotoxy2(x, y);



					if ((*a_MonList)[0].m_Hp <= 0 && (*a_MonList)[1].m_Hp <= 0 && (*a_MonList)[2].m_Hp <= 0)
					{
						x = 2;
						y = 36;
						Pc::gotoxy2(x, y);
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
							FOREGROUND_INTENSITY | FOREGROUND_RED); //說鬼儀
						printf("瞳菟檜 賅舒 餌蜂ж艘蝗棲棻");
						
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
							FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //�羃�
						(*a_PcList)[log].Level += 10;
						(*a_PcList)[log].Attack += 200;
						(*a_PcList)[log].Deffence += 100;

						for (int i = 0; i < 3; i++)
						{
							(*a_PcGdList)[i].Level += 10;
							(*a_PcGdList)[i].Attack += 200;
							(*a_PcGdList)[i].Deffence += 100;
						}

						x = 2;
						y = 36;
						y++;
						Pc::gotoxy2(x, y);
						printf("%s陛 溯漣檜 %d 虜躑鼻蝓ж艘蝗棲棻",(*a_PcList)[log].Name, (*a_PcList)[log].Level);
						y++;
						Pc::gotoxy2(x, y);
						for (int i = 0; i < 3; i++)
						{
							printf("%s陛 溯漣檜 %d 虜躑鼻蝓ж艘蝗棲棻", (*a_PcGdList)[log].Name, (*a_PcGdList)[log].Level);
							y++;
							Pc::gotoxy2(x, y);
						}
						DunCount++;
						HallOf::HallADD(HallList,a_PcList, log);
						getchar();
						//system("cls");
						break;
					}



					for (int i = 0; i < 3; i++)
					{
						if ((*a_MonList)[i].m_Hp == 0)
						{
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
							12); //
							
						}
						printf("檜葷:%-15s  ", (*a_MonList)[i].m_Name); y++; Pc::gotoxy2(x, y);
						printf("羹溘 : %-10d ", (*a_MonList)[i].m_Hp); y++; Pc::gotoxy2(x, y);
						printf("奢問 : %-6d  ", (*a_MonList)[i].m_Attack); y++; Pc::gotoxy2(x, y);
						printf("寞橫 : %-4d    ", (*a_MonList)[i].m_Defence); y++; Pc::gotoxy2(x, y);
						printf("溯漣 : %-3d     ", (*a_MonList)[i].m_Level); y += 3; Pc::gotoxy2(x, y);

						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
							FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //�羃�
					}


					int a_Dunsel = 0;


					x = 105;
					y = 46;
					Pc::gotoxy2(x, y);
					scanf_s("%d", &a_Dunsel);
					getchar();
					if (a_Dunsel < 0 || a_Dunsel > 1)
					{
						if (a_Dunsel == 2) break;
					}
					if (a_Dunsel == 1)
					{
						/*int ran = 1;
						int ran2 = 1;

						EnemyAttPrint(a_PcList, a_PcGdList, a_MonList, log, x, y, ran, ran2);

						EnemystatgePrint(a_PcList, a_PcGdList, a_MonList, log, x, y, ran, ran2);*/
						
						for (int i = 0; i < 2; i++)
						{

						
							int ran = rand() % 4;
							while (true)
							{
								
								if (ran == 0 && (*a_PcList)[log].Hp <= 0) ran = rand() % 4;
								else if (ran > 0 && (*a_PcGdList)[ran - 1].Hp <= 0) ran = rand() % 4;
								else break;
							}
							int ran2 = rand() % 3;
							while (true)
							{
								if ((*a_MonList)[ran2].m_Hp <= 0) ran2 = rand() % 3;
								else break;
							}
							PlayerAttPrint(a_PcList, a_PcGdList, a_MonList, log, x, y, ran, ran2);

							x = 2;
							y = 36;

							PlayerstagePrint(a_PcList, a_PcGdList, a_MonList, log, x, y, ran, ran2);

							if ((*a_PcList)[log].Hp == 0 && (*a_PcGdList)[0].Hp == 0 && (*a_PcGdList)[1].Hp == 0 && (*a_PcGdList)[2].Hp == 0)
								break;
							if ((*a_MonList)[0].m_Hp == 0 && (*a_MonList)[1].m_Hp == 0 && (*a_MonList)[2].m_Hp == 0) break;
							ran = rand() % 4;
							while (true)
							{
								if (ran == 0 && (*a_PcList)[log].Hp <= 0) ran = rand() % 4;
								else if (ran > 0 && (*a_PcGdList)[ran - 1].Hp <= 0) ran = rand() % 4;
								else break;
							}
							ran2 = rand() % 3;
							while (true)
							{
								if ((*a_MonList)[ran2].m_Hp <= 0) ran2 = rand() % 3;
								else break;
							}

							EnemyAttPrint(a_PcList, a_PcGdList, a_MonList, log, x, y, ran, ran2);



							

							x = 2;
							y = 36;
							EnemystatgePrint(a_PcList, a_PcGdList, a_MonList, log, x, y, ran, ran2);

							if ((*a_PcList)[log].Hp == 0 && (*a_PcGdList)[0].Hp == 0 && (*a_PcGdList)[1].Hp == 0 && (*a_PcGdList)[2].Hp == 0)
								break;
							if ((*a_MonList)[0].m_Hp == 0 && (*a_MonList)[1].m_Hp == 0 && (*a_MonList)[2].m_Hp == 0) break;

						}

						//濠翕瞪癱 
					} //dunsel 


				}//duncount == 0 


				if (DunCount == 1) //螃辦剪
				{
				

				
		
					

				x = 134;
				y = 4;
				Pc::gotoxy2(x, y);



				if ((*a_MonList)[3].m_Hp <= 0 )
				{
					x = 2;
					y = 36;
					Pc::gotoxy2(x, y);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						FOREGROUND_INTENSITY | FOREGROUND_RED); //說鬼儀
					printf("螃辦剪陛 餌蜂ж艘蝗棲棻");
					
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //�羃�
					DunCount++;
					getchar();
					break;
				}



				for (int i = 3; i < 4; i++)
				{
					if ((*a_MonList)[i].m_Hp == 0)
					{
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
							12); //

					}
					printf("檜葷:%-15s  ", (*a_MonList)[i].m_Name); y++; Pc::gotoxy2(x, y);
					printf("羹溘 : %-10d ", (*a_MonList)[i].m_Hp); y++; Pc::gotoxy2(x, y);
					printf("奢問 : %-6d  ", (*a_MonList)[i].m_Attack); y++; Pc::gotoxy2(x, y);
					printf("寞橫 : %-4d    ", (*a_MonList)[i].m_Defence); y++; Pc::gotoxy2(x, y);
					printf("溯漣 : %-3d     ", (*a_MonList)[i].m_Level); y += 3; Pc::gotoxy2(x, y);

					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //�羃�
				}


				int a_Dunsel = 0;


				x = 105;
				y = 46;
				Pc::gotoxy2(x, y);
				scanf_s("%d", &a_Dunsel);
				getchar();
				if (a_Dunsel < 0 || a_Dunsel > 1)
				{
					if (a_Dunsel == 2) break;
				}
				if (a_Dunsel == 1)
				{
					/*int ran = 1;
					int ran2 = 1;

					EnemyAttPrint(a_PcList, a_PcGdList, a_MonList, log, x, y, ran, ran2);

					EnemystatgePrint(a_PcList, a_PcGdList, a_MonList, log, x, y, ran, ran2);*/

					for (int i = 0; i < 2; i++)
					{
						

						int ran = rand() % 4;
						while (true)
						{

							if (ran == 0 && (*a_PcList)[log].Hp <= 0) ran = rand() % 4;
							else if (ran > 0 && (*a_PcGdList)[ran - 1].Hp <= 0) ran = rand() % 4;
							else break;
						}
						int ran2 = 3;
						
					
						PlayerAttPrint(a_PcList, a_PcGdList, a_MonList, log, x, y, ran, ran2);

						x = 2;
						y = 36;

						PlayerstagePrint(a_PcList, a_PcGdList, a_MonList, log, x, y, ran, ran2);

						if ((*a_PcList)[log].Hp == 0 && (*a_PcGdList)[0].Hp == 0 && (*a_PcGdList)[1].Hp == 0 && (*a_PcGdList)[2].Hp == 0)
							break;
						if ((*a_MonList)[3].m_Hp == 0) break;
						ran = rand() % 4;
						
						ran2 =3;
						

						EnemyAttPrint(a_PcList, a_PcGdList, a_MonList, log, x, y, ran, ran2);


						x = 2;
						y = 36;
						EnemystatgePrint(a_PcList, a_PcGdList, a_MonList, log, x, y, ran, ran2);

						if ((*a_PcList)[log].Hp == 0 && (*a_PcGdList)[0].Hp == 0 && (*a_PcGdList)[1].Hp == 0 && (*a_PcGdList)[2].Hp == 0)
							break;
						if ((*a_MonList)[3].m_Hp == 0) break;

					}

					//濠翕瞪癱 
				} //dunsel 
				
				} //duncount == 1 螃辦剪

			
				
			}//while (true)
			
		}//if (a_Sel == 1) //螃辦剪
		


else if (a_Sel == 2) //懍��
		{

			

			//while (true)
			//{
			//	MapPrint();
			//	x = 6;
			//	y = 4;




			//	// Ы溯檜橫 轎溘 睡碟

			//	Pc::gotoxy2(x, y);
			//	if ((*a_PcList)[log].Hp == 0)
			//	{
			//		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			//			FOREGROUND_INTENSITY | FOREGROUND_RED); //說鬼儀
			//		printf("檜葷:%-14s 霜機:%-9s", (*a_PcList)[log].Name, (*a_PcList)[log].Char_Type); y++; Pc::gotoxy2(x, y);
			//		printf("羹溘:%-8d       葆釭 : %-7d", (*a_PcList)[log].Hp, (*a_PcList)[log].Mp); y++; Pc::gotoxy2(x, y);
			//		printf("奢問:%-5d          寞橫:%-5d", (*a_PcList)[log].Attack, (*a_PcList)[log].Deffence); y++; Pc::gotoxy2(x, y);
			//		printf("奢樓:%-2d             溯漣 : %-3d", (*a_PcList)[log].Att_Speed, (*a_PcList)[log].Level); y++; Pc::gotoxy2(x, y);
			//		printf("��:%-4d    團繪:%-4d    雖棟:%-4d", (*a_PcList)[log].Str, (*a_PcList)[log].Dex, (*a_PcList)[log].INT); y += 3; Pc::gotoxy2(x, y);
			//		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			//			FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //�羃�
			//	}
			//	else if ((*a_PcList)[log].Hp > 0)
			//	{
			//		printf("檜葷:%-14s 霜機:%-9s", (*a_PcList)[log].Name, (*a_PcList)[log].Char_Type); y++; Pc::gotoxy2(x, y);
			//		printf("羹溘:%-8d       葆釭 : %-7d", (*a_PcList)[log].Hp, (*a_PcList)[log].Mp); y++; Pc::gotoxy2(x, y);
			//		printf("奢問:%-5d          寞橫:%-5d", (*a_PcList)[log].Attack, (*a_PcList)[log].Deffence); y++; Pc::gotoxy2(x, y);
			//		printf("奢樓:%-2d             溯漣 : %-3d", (*a_PcList)[log].Att_Speed, (*a_PcList)[log].Level); y++; Pc::gotoxy2(x, y);
			//		printf("��:%-4d    團繪:%-4d    雖棟:%-4d", (*a_PcList)[log].Str, (*a_PcList)[log].Dex, (*a_PcList)[log].INT); y += 3; Pc::gotoxy2(x, y);
			//	}

			//	for (int i = 0; i < 3; i++)
			//	{
			//		if ((*a_PcGdList)[i].Hp == 0)
			//		{
			//			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			//				FOREGROUND_INTENSITY | FOREGROUND_RED); //說鬼儀

			//		}
			//		printf("檜葷:%-14s 霜機:%-9s", (*a_PcGdList)[i].Name, (*a_PcGdList)[i].Char_Type); y++; Pc::gotoxy2(x, y);
			//		printf("羹溘:%-8d       葆釭 : %-7d", (*a_PcGdList)[i].Hp, (*a_PcGdList)[i].Mp); y++; Pc::gotoxy2(x, y);
			//		printf("奢問:%-5d          寞橫:%-5d", (*a_PcGdList)[i].Attack, (*a_PcGdList)[i].Deffence); y++; Pc::gotoxy2(x, y);
			//		printf("奢樓:%-2d             溯漣 : %-3d", (*a_PcGdList)[i].Att_Speed, (*a_PcGdList)[i].Level); y++; Pc::gotoxy2(x, y);
			//		printf("��:%-4d    團繪:%-4d    雖棟:%-4d", (*a_PcGdList)[i].Str, (*a_PcGdList)[i].Dex, (*a_PcGdList)[i].INT); y += 3; Pc::gotoxy2(x, y);

			//		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			//			FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //�羃�
			//	}//for (int i = 0; i < 3; i++)


			//	if ((*a_PcList)[log].Hp <= 0 && (*a_PcGdList)[0].Hp <= 0 && (*a_PcGdList)[1].Hp <= 0 && (*a_PcGdList)[2].Hp <= 0)
			//	{
			//		x = 2;
			//		y = 36;
			//		Pc::gotoxy2(x, y);
			//		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			//			FOREGROUND_INTENSITY | FOREGROUND_RED); //說鬼儀
			//		printf("Ы溯檜橫陛 賅舒 餌蜂ж艘蝗棲棻");

			//		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			//			FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //�羃�
			//		getchar();
			//		break;
			//	}



			//	x = 134;
			//	y = 4;
			//	Pc::gotoxy2(x, y);


			//	for( int i =4; i<7; i++)
			//	{ 
			//	if ((*a_MonList)[i].m_Hp <= 0)
			//	{
			//		x = 2;
			//		y = 36;
			//		Pc::gotoxy2(x, y);
			//		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			//			FOREGROUND_INTENSITY | FOREGROUND_RED); //說鬼儀
			//		printf("瞳菟檜 賅舒 餌蜂ж艘蝗棲棻");

			//		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			//			FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //�羃�
			//		getchar();
			//		break;
			//	}

			//	}

			//	for (int i = 4; i < 7; i++)
			//	{
			//		if ((*a_MonList)[i].m_Hp == 0)
			//		{
			//			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			//				12); //

			//		}
			//		printf("檜葷:%-15s  ", (*a_MonList)[i].m_Name); y++; Pc::gotoxy2(x, y);
			//		printf("羹溘 : %-10d ", (*a_MonList)[i].m_Hp); y++; Pc::gotoxy2(x, y);
			//		printf("奢問 : %-6d  ", (*a_MonList)[i].m_Attack); y++; Pc::gotoxy2(x, y);
			//		printf("寞橫 : %-4d    ", (*a_MonList)[i].m_Defence); y++; Pc::gotoxy2(x, y);
			//		printf("溯漣 : %-3d     ", (*a_MonList)[i].m_Level); y += 3; Pc::gotoxy2(x, y);

			//		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			//			FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //�羃�
			//	}



			//	// 跨蝶攪 轎溘 睡碟
			//	int a_Dunsel = 0;
			//	Pc::gotoxy2(x, y);
			//	scanf_s("%d", &a_Dunsel);
			//	if (a_Dunsel < 1 || a_Dunsel > 1)
			//	{
			//		if (a_Dunsel == 2) break;
			//	}
			//	if (a_Dunsel == 1)
			//	{
			//		//濠翕瞪癱 
			//		for (int i = 0; i < 2; i++)
			//		{
			//			int ran = rand() % 4;
			//			int ran2 = (rand() % 6)+4;


			//			//int ran = 0; //play
			//			//int ran2 = 1; //enem
			//			PlayerAttPrint(a_PcList, a_PcGdList, a_MonList, log, x, y, ran, ran2);



			//			EnemyAttPrint(a_PcList, a_PcGdList, a_MonList, log, x, y, ran, ran2);
			//			x = 2;
			//			y = 36;
			//			PlayerstagePrint(a_PcList, a_PcGdList, a_MonList, log, x, y, ran, ran2);


			//			x = 2;
			//			y = 36;


			//			EnemystatgePrint(a_PcList, a_PcGdList, a_MonList, log, x, y, ran, ran2);
			//		}
			//		//p_attack;

			//		getchar();


			/*	}

			}*/
		}




		else if (a_Sel == 3) //萄楚堆
		{
		vector<Monster> Node_Mon6;
		for (int i = 0; i < 1; i++)
			Node_Mon6.push_back((*a_MonList)[5]);


			while (true)
			{
				MapPrint();
				x = 6;
				y = 4;




				// Ы溯檜橫 轎溘 睡碟

				Pc::gotoxy2(x, y);
				if ((*a_PcList)[log].Hp == 0)
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						FOREGROUND_INTENSITY | FOREGROUND_RED); //說鬼儀
					printf("檜葷:%-14s 霜機:%-9s", (*a_PcList)[log].Name, (*a_PcList)[log].Char_Type); y++; Pc::gotoxy2(x, y);
					printf("羹溘:%-8d       葆釭 : %-7d", (*a_PcList)[log].Hp, (*a_PcList)[log].Mp); y++; Pc::gotoxy2(x, y);
					printf("奢問:%-5d          寞橫:%-5d", (*a_PcList)[log].Attack, (*a_PcList)[log].Deffence); y++; Pc::gotoxy2(x, y);
					printf("奢樓:%-2d             溯漣 : %-3d", (*a_PcList)[log].Att_Speed, (*a_PcList)[log].Level); y++; Pc::gotoxy2(x, y);
					printf("��:%-4d    團繪:%-4d    雖棟:%-4d", (*a_PcList)[log].Str, (*a_PcList)[log].Dex, (*a_PcList)[log].INT); y += 3; Pc::gotoxy2(x, y);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //�羃�
				}
				else if ((*a_PcList)[log].Hp > 0)
				{
					printf("檜葷:%-14s 霜機:%-9s", (*a_PcList)[log].Name, (*a_PcList)[log].Char_Type); y++; Pc::gotoxy2(x, y);
					printf("羹溘:%-8d       葆釭 : %-7d", (*a_PcList)[log].Hp, (*a_PcList)[log].Mp); y++; Pc::gotoxy2(x, y);
					printf("奢問:%-5d          寞橫:%-5d", (*a_PcList)[log].Attack, (*a_PcList)[log].Deffence); y++; Pc::gotoxy2(x, y);
					printf("奢樓:%-2d             溯漣 : %-3d", (*a_PcList)[log].Att_Speed, (*a_PcList)[log].Level); y++; Pc::gotoxy2(x, y);
					printf("��:%-4d    團繪:%-4d    雖棟:%-4d", (*a_PcList)[log].Str, (*a_PcList)[log].Dex, (*a_PcList)[log].INT); y += 3; Pc::gotoxy2(x, y);
				}

				for (int i = 0; i < 3; i++)
				{
					if ((*a_PcGdList)[i].Hp == 0)
					{
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
							FOREGROUND_INTENSITY | FOREGROUND_RED); //說鬼儀

					}
					printf("檜葷:%-14s 霜機:%-9s", (*a_PcGdList)[i].Name, (*a_PcGdList)[i].Char_Type); y++; Pc::gotoxy2(x, y);
					printf("羹溘:%-8d       葆釭 : %-7d", (*a_PcGdList)[i].Hp, (*a_PcGdList)[i].Mp); y++; Pc::gotoxy2(x, y);
					printf("奢問:%-5d          寞橫:%-5d", (*a_PcGdList)[i].Attack, (*a_PcGdList)[i].Deffence); y++; Pc::gotoxy2(x, y);
					printf("奢樓:%-2d             溯漣 : %-3d", (*a_PcGdList)[i].Att_Speed, (*a_PcGdList)[i].Level); y++; Pc::gotoxy2(x, y);
					printf("��:%-4d    團繪:%-4d    雖棟:%-4d", (*a_PcGdList)[i].Str, (*a_PcGdList)[i].Dex, (*a_PcGdList)[i].INT); y += 3; Pc::gotoxy2(x, y);

					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //�羃�
				}//for (int i = 0; i < 3; i++)

				// 跨蝶攪 轎溘 睡碟
				int a_Dunsel = 0;
				Pc::gotoxy2(x, y);
				scanf_s("%d", &a_Dunsel);
				if (a_Dunsel < 1 || a_Dunsel > 1)
				{
					if (a_Dunsel == 2) break;
				}
				if (a_Dunsel == 1)
				{
					//濠翕瞪癱 
				}

			}
		}
		
		x = 6;
		y = 4;
		



		// Ы溯檜橫 轎溘 睡碟
	
		Pc::gotoxy2(x, y);
		if ((*a_PcList)[log].Hp == 0)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
				FOREGROUND_INTENSITY | FOREGROUND_RED ); //說鬼儀
			printf("檜葷:%-14s 霜機:%-9s", (*a_PcList)[log].Name, (*a_PcList)[log].Char_Type); y++; Pc::gotoxy2(x, y);
			printf("羹溘:%-8d       葆釭 : %-7d", (*a_PcList)[log].Hp, (*a_PcList)[log].Mp); y++; Pc::gotoxy2(x, y);
			printf("奢問:%-5d          寞橫:%-5d", (*a_PcList)[log].Attack, (*a_PcList)[log].Deffence); y++; Pc::gotoxy2(x, y);
			printf("奢樓:%-2d             溯漣 : %-3d", (*a_PcList)[log].Att_Speed, (*a_PcList)[log].Level); y++; Pc::gotoxy2(x, y);
			printf("��:%-4d    團繪:%-4d    雖棟:%-4d", (*a_PcList)[log].Str, (*a_PcList)[log].Dex, (*a_PcList)[log].INT); y += 3; Pc::gotoxy2(x, y);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
				FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //�羃�
		}
		else if ((*a_PcList)[log].Hp > 0)
		{
			printf("檜葷:%-14s 霜機:%-9s", (*a_PcList)[log].Name, (*a_PcList)[log].Char_Type); y++; Pc::gotoxy2(x, y);
			printf("羹溘:%-8d       葆釭 : %-7d", (*a_PcList)[log].Hp, (*a_PcList)[log].Mp); y++; Pc::gotoxy2(x, y);
			printf("奢問:%-5d          寞橫:%-5d", (*a_PcList)[log].Attack, (*a_PcList)[log].Deffence); y++; Pc::gotoxy2(x, y);
			printf("奢樓:%-2d             溯漣 : %-3d", (*a_PcList)[log].Att_Speed, (*a_PcList)[log].Level); y++; Pc::gotoxy2(x, y);
			printf("��:%-4d    團繪:%-4d    雖棟:%-4d", (*a_PcList)[log].Str, (*a_PcList)[log].Dex, (*a_PcList)[log].INT); y += 3; Pc::gotoxy2(x, y);
		}

		for (int i = 0; i < 3; i++)
		{
			if ((*a_PcGdList)[i].Hp == 0)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
					FOREGROUND_INTENSITY | FOREGROUND_RED); //說鬼儀
				
			}
			printf("檜葷:%-14s 霜機:%-9s", (*a_PcGdList)[i].Name, (*a_PcGdList)[i].Char_Type); y++; Pc::gotoxy2(x, y);
			printf("羹溘:%-8d       葆釭 : %-7d", (*a_PcGdList)[i].Hp, (*a_PcGdList)[i].Mp); y++; Pc::gotoxy2(x, y);
			printf("奢問:%-5d          寞橫:%-5d", (*a_PcGdList)[i].Attack, (*a_PcGdList)[i].Deffence); y++; Pc::gotoxy2(x, y);
			printf("奢樓:%-2d             溯漣 : %-3d", (*a_PcGdList)[i].Att_Speed, (*a_PcGdList)[i].Level); y++; Pc::gotoxy2(x, y);
			printf("��:%-4d    團繪:%-4d    雖棟:%-4d", (*a_PcGdList)[i].Str, (*a_PcGdList)[i].Dex, (*a_PcGdList)[i].INT); y += 3; Pc::gotoxy2(x, y);

			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
				FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //�羃�
		}//for (int i = 0; i < 3; i++)

		// 跨蝶攪 轎溘 睡碟


		getchar();
		system("cls");
	}//while (true)
}				

void MapPrint()
{
	int x = 0;
	int  y = 0;

	x = 0;
	y = 34;

	Pc::gotoxy2(x, y); printf("旨收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旬旨收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旬"); x++;
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
	printf("早                                                                            早早1.濠翕瞪癱                                                                  早");
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
	printf("早                                                                            早早 廓�ㄧ� 殮溘п輿撮蹂.                                                       早");
	y++;
	Pc::gotoxy2(x, y);
	printf("早                                                                            早早                                                                            早");
	y++;
	Pc::gotoxy2(x, y);
	printf("曲收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旭曲收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旭");



}


void Battle::PlayerAttPrint(vector<Pc>*a_PcList, vector<PcGuild>*a_PcGdList, vector<Monster> *a_MonList,int log, int x, int y, int p_ran, int e_ran)
{
	int num = 0;
	int num2 = 0;
	int reverse = 0;
	bool is_Color = true;

	


		if (p_ran == 0 && p_attack == true)
		{
			


			if (e_ran == 0 || e_ran == 3)
			{



				//奢問 斜楚а
				x = 42;
				y = 6;
				Pc::gotoxy2(x, y);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
					12 | 12 << 4);  //說鬼儀
				for (int i = 0; i < 44; i++)
				{
					printf("﹥");
					Sleep(13);
					//Pc::gotoxy2(x, y);

				}





				for (int i = 0; i < 5; i++)
				{
					x = 134;
					y = 4;
					Pc::gotoxy2(x, y);


					if (is_Color == true)
					{
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
							12); //

					}
					if (is_Color == false)
					{

						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
							FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //�羃�
					}
					printf("檜葷:%-15s  ", (*a_MonList)[e_ran].m_Name); y++; Pc::gotoxy2(x, y);
					printf("羹溘 : %-10d ", (*a_MonList)[e_ran].m_Hp); y++; Pc::gotoxy2(x, y);
					printf("奢問 : %-6d  ", (*a_MonList)[e_ran].m_Attack); y++; Pc::gotoxy2(x, y);
					printf("寞橫 : %-4d    ", (*a_MonList)[e_ran].m_Defence); y++; Pc::gotoxy2(x, y);
					printf("溯漣 : %-3d     ", (*a_MonList)[e_ran].m_Level); y += 3; Pc::gotoxy2(x, y);
					Sleep(100);
					is_Color = !is_Color;
				}


				//蟾晦�首庥�

				x = 42;
				y = 6;
				Pc::gotoxy2(x, y);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
					7);  //�羃�
				Pc::gotoxy2(x, y);
				for (int i = 0; i < 44; i++)
				{
					printf("  ");
					Sleep(13);
				}

				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
					FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //�羃�
				x = 134;
				y = 4;
				Pc::gotoxy2(x, y);
				printf("檜葷:%-15s  ", (*a_MonList)[e_ran].m_Name); y++; Pc::gotoxy2(x, y);
				printf("羹溘 : %-10d ", (*a_MonList)[e_ran].m_Hp); y++; Pc::gotoxy2(x, y);
				printf("奢問 : %-6d  ", (*a_MonList)[e_ran].m_Attack); y++; Pc::gotoxy2(x, y);
				printf("寞橫 : %-4d    ", (*a_MonList)[e_ran].m_Defence); y++; Pc::gotoxy2(x, y);
				printf("溯漣 : %-3d     ", (*a_MonList)[e_ran].m_Level); y += 3; Pc::gotoxy2(x, y);

				Sleep(500);
				//break;
			}
			else if (e_ran != 0)
			{

				//if ((*a_MonList)[e_ran].m_Hp == 0) continue;

					//奢問 斜楚а
					x = 42;
					y = 6;
					Pc::gotoxy2(x, y);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						12 | 12 << 4);  //�羃�
					for (int i = 0; i < 44; i++)
					{
						printf("﹥");
						Sleep(13);
						if (i == 22) break;

						//Pc::gotoxy2(x, y);

					}

					if (e_ran == 1)	num = 6;
					else if (e_ran == 2) num = 13;
					x = 86;
					y = 7;
					Pc::gotoxy2(x, y);
					for (int i = 0; i < num; i++)
					{
						printf("﹥");
						Sleep(13);
						y++;
						Pc::gotoxy2(x, y);
					}


					Pc::gotoxy2(x, y);
					for (int i = 0; i < 23; i++)
					{
						printf("﹥");
						Sleep(13);
					}

					//奩瞪 
					if (e_ran == 1)	reverse = 11;
					else if (e_ran == 2) reverse = 18;
					for (int i = 0; i < 5; i++)
					{
						x = 134;
						y = reverse;
						Pc::gotoxy2(x, y);


						if (is_Color == true)
						{
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
								12); //

						}
						if (is_Color == false)
						{

							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
								FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //�羃�
						}
						printf("檜葷:%-15s  ", (*a_MonList)[e_ran].m_Name); y++; Pc::gotoxy2(x, y);
						printf("羹溘 : %-10d ", (*a_MonList)[e_ran].m_Hp); y++; Pc::gotoxy2(x, y);
						printf("奢問 : %-6d  ", (*a_MonList)[e_ran].m_Attack); y++; Pc::gotoxy2(x, y);
						printf("寞橫 : %-4d    ", (*a_MonList)[e_ran].m_Defence); y++; Pc::gotoxy2(x, y);
						printf("溯漣 : %-3d     ", (*a_MonList)[e_ran].m_Level); y += 3; Pc::gotoxy2(x, y);
						Sleep(100);
						is_Color = !is_Color;
					}




					//蟾晦�首庥�
					x = 42;
					y = 6;

					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						7);  //�羃�
					Pc::gotoxy2(x, y);
					for (int i = 0; i < 24; i++)
						printf("  ");

					x = 86;
					y = 7;


					if (e_ran == 1)	num = 6;
					else if (e_ran == 2) num = 13;
					Pc::gotoxy2(x, y);
					for (int i = 0; i < num; i++)
					{
						printf("  ");
						Sleep(13);
						y++;
						Pc::gotoxy2(x, y);
					}

					Pc::gotoxy2(x, y);
					for (int i = 0; i < 23; i++)
					{
						printf("  ");
						Sleep(13);
					}

					if (e_ran == 1)	reverse = 11;
					else if (e_ran == 2) reverse = 18;
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //�羃�
					x = 134;
					y = reverse;
					Pc::gotoxy2(x, y);
					printf("檜葷:%-15s  ", (*a_MonList)[e_ran].m_Name); y++; Pc::gotoxy2(x, y);
					printf("羹溘 : %-10d ", (*a_MonList)[e_ran].m_Hp); y++; Pc::gotoxy2(x, y);
					printf("奢問 : %-6d  ", (*a_MonList)[e_ran].m_Attack); y++; Pc::gotoxy2(x, y);
					printf("寞橫 : %-4d    ", (*a_MonList)[e_ran].m_Defence); y++; Pc::gotoxy2(x, y);
					printf("溯漣 : %-3d     ", (*a_MonList)[e_ran].m_Level); y += 3; Pc::gotoxy2(x, y);

					Sleep(500);
					//break;
			}//eran!= 0

		}//if (p_ran == 0)
		else if (p_ran == 1 && p2_attack == true)
		{
			if (e_ran == 1 )
			{

				//if((*a_MonList)[e_ran].m_Hp == 0) continue;


					//奢問 斜楚а
					x = 42;
					y = 13;
					Pc::gotoxy2(x, y);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						12 | 12 << 4);  //說鬼儀
					for (int i = 0; i < 44; i++)
					{
						printf("﹥");
						Sleep(13);
						//Pc::gotoxy2(x, y);

					}





					for (int i = 0; i < 5; i++)
					{
						x = 134;
						y = 11;
						Pc::gotoxy2(x, y);


						if (is_Color == true)
						{
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
								12); //

						}
						if (is_Color == false)
						{

							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
								FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //�羃�
						}
						printf("檜葷:%-15s  ", (*a_MonList)[e_ran].m_Name); y++; Pc::gotoxy2(x, y);
						printf("羹溘 : %-10d ", (*a_MonList)[e_ran].m_Hp); y++; Pc::gotoxy2(x, y);
						printf("奢問 : %-6d  ", (*a_MonList)[e_ran].m_Attack); y++; Pc::gotoxy2(x, y);
						printf("寞橫 : %-4d    ", (*a_MonList)[e_ran].m_Defence); y++; Pc::gotoxy2(x, y);
						printf("溯漣 : %-3d     ", (*a_MonList)[e_ran].m_Level); y += 3; Pc::gotoxy2(x, y);
						Sleep(100);
						is_Color = !is_Color;
					}


					//蟾晦�首庥�

					x = 42;
					y = 13;
					Pc::gotoxy2(x, y);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						7);  //�羃�
					Pc::gotoxy2(x, y);
					for (int i = 0; i < 44; i++)
					{
						printf("  ");
						Sleep(13);
					}

					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //�羃�
					x = 134;
					y = 11;
					Pc::gotoxy2(x, y);
					printf("檜葷:%-15s  ", (*a_MonList)[e_ran].m_Name); y++; Pc::gotoxy2(x, y);
					printf("羹溘 : %-10d ", (*a_MonList)[e_ran].m_Hp); y++; Pc::gotoxy2(x, y);
					printf("奢問 : %-6d  ", (*a_MonList)[e_ran].m_Attack); y++; Pc::gotoxy2(x, y);
					printf("寞橫 : %-4d    ", (*a_MonList)[e_ran].m_Defence); y++; Pc::gotoxy2(x, y);
					printf("溯漣 : %-3d     ", (*a_MonList)[e_ran].m_Level); y += 3; Pc::gotoxy2(x, y);

					Sleep(500);
					//break;
			}
			else if (e_ran != 1 || e_ran == 3)
			{
				//if ((*a_MonList)[e_ran].m_Hp == 0) continue;


					//奢問 斜楚а
					x = 42;
					y = 13;
					Pc::gotoxy2(x, y);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						12 | 12 << 4);  //�羃�
					for (int i = 0; i < 44; i++)
					{
						printf("﹥");
						Sleep(13);
						if (i == 22) break;

						//Pc::gotoxy2(x, y);

					}
					if (e_ran == 0) num = 6;
					if (e_ran == 3) num = 6;
					if (e_ran == 2) num = 6;
					x = 86, y = 13;
					Pc::gotoxy2(x, y);
					for (int i = 0; i < num; i++)
					{
						printf("﹥");
						Sleep(13);
						if (e_ran == 0)	y--;
						if (e_ran == 3)	y--;
						if (e_ran == 2) y++;

						Pc::gotoxy2(x, y);
					}


					Pc::gotoxy2(x, y);
					for (int i = 0; i < 23; i++)
					{
						printf("﹥");
						Sleep(13);
					}

					//奩瞪 

					if (e_ran == 3) reverse = 4;
					if (e_ran == 0) reverse = 4;
					else if (e_ran == 2) reverse = 18;
					for (int i = 0; i < 5; i++)
					{
						x = 134;
						y = reverse;
						Pc::gotoxy2(x, y);


						if (is_Color == true)
						{
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
								12); //

						}
						if (is_Color == false)
						{

							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
								FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //�羃�
						}
						printf("檜葷:%-15s  ", (*a_MonList)[e_ran].m_Name); y++; Pc::gotoxy2(x, y);
						printf("羹溘 : %-10d ", (*a_MonList)[e_ran].m_Hp); y++; Pc::gotoxy2(x, y);
						printf("奢問 : %-6d  ", (*a_MonList)[e_ran].m_Attack); y++; Pc::gotoxy2(x, y);
						printf("寞橫 : %-4d    ", (*a_MonList)[e_ran].m_Defence); y++; Pc::gotoxy2(x, y);
						printf("溯漣 : %-3d     ", (*a_MonList)[e_ran].m_Level); y += 3; Pc::gotoxy2(x, y);
						Sleep(100);
						is_Color = !is_Color;
					}




					//蟾晦�首庥�
					x = 42;
					y = 13;

					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						7);  //�羃�
					Pc::gotoxy2(x, y);
					for (int i = 0; i < 23; i++)
						printf("  ");

					x = 86;
					y = 13;
					if (e_ran == 0) num = 6;
					if (e_ran == 3) num = 6;
					if (e_ran == 2) num = 6;
					Pc::gotoxy2(x, y);
					for (int i = 0; i < num; i++)
					{
						printf("  ");
						Sleep(13);
						if (e_ran == 0)	y--;
						if (e_ran == 3)	y--;
						if (e_ran == 2) y++;
						Pc::gotoxy2(x, y);
					}

					Pc::gotoxy2(x, y);
					for (int i = 0; i < 23; i++)
					{
						printf("  ");
						Sleep(13);
					}
					if (e_ran == 3) reverse = 4;
					if (e_ran == 0) reverse = 4;
					else if (e_ran == 2) reverse = 18;

					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //�羃�
					x = 134;
					y = reverse;
					Pc::gotoxy2(x, y);
					printf("檜葷:%-15s  ", (*a_MonList)[e_ran].m_Name); y++; Pc::gotoxy2(x, y);
					printf("羹溘 : %-10d ", (*a_MonList)[e_ran].m_Hp); y++; Pc::gotoxy2(x, y);
					printf("奢問 : %-6d  ", (*a_MonList)[e_ran].m_Attack); y++; Pc::gotoxy2(x, y);
					printf("寞橫 : %-4d    ", (*a_MonList)[e_ran].m_Defence); y++; Pc::gotoxy2(x, y);
					printf("溯漣 : %-3d     ", (*a_MonList)[e_ran].m_Level); y += 3; Pc::gotoxy2(x, y);

					Sleep(500);


					//break;
			}//if (e_ran == 0)
		}//else if (p_ran == 1)
		else if (p_ran == 2 && p3_attack == true)
		{
			if (e_ran == 2)
			{
				//if ((*a_MonList)[e_ran].m_Hp == 0) continue;


					//奢問 斜楚а
					x = 42;
					y = 20;
					Pc::gotoxy2(x, y);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						12 | 12 << 4);  //說鬼儀
					for (int i = 0; i < 44; i++)
					{
						printf("﹥");
						Sleep(13);
						//Pc::gotoxy2(x, y);

					}





					for (int i = 0; i < 5; i++)
					{
						x = 134;
						y = 18;
						Pc::gotoxy2(x, y);


						if (is_Color == true)
						{
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
								12); //

						}
						if (is_Color == false)
						{

							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
								FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //�羃�
						}
						printf("檜葷:%-15s  ", (*a_MonList)[e_ran].m_Name); y++; Pc::gotoxy2(x, y);
						printf("羹溘 : %-10d ", (*a_MonList)[e_ran].m_Hp); y++; Pc::gotoxy2(x, y);
						printf("奢問 : %-6d  ", (*a_MonList)[e_ran].m_Attack); y++; Pc::gotoxy2(x, y);
						printf("寞橫 : %-4d    ", (*a_MonList)[e_ran].m_Defence); y++; Pc::gotoxy2(x, y);
						printf("溯漣 : %-3d     ", (*a_MonList)[e_ran].m_Level); y += 3; Pc::gotoxy2(x, y);
						Sleep(100);
						is_Color = !is_Color;
					}


					//蟾晦�首庥�

					x = 42;
					y = 20;
					Pc::gotoxy2(x, y);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						7);  //�羃�
					Pc::gotoxy2(x, y);
					for (int i = 0; i < 44; i++)
					{
						printf("  ");
						Sleep(13);
					}

					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //�羃�
					x = 134;
					y = 18;
					Pc::gotoxy2(x, y);
					printf("檜葷:%-15s  ", (*a_MonList)[e_ran].m_Name); y++; Pc::gotoxy2(x, y);
					printf("羹溘 : %-10d ", (*a_MonList)[e_ran].m_Hp); y++; Pc::gotoxy2(x, y);
					printf("奢問 : %-6d  ", (*a_MonList)[e_ran].m_Attack); y++; Pc::gotoxy2(x, y);
					printf("寞橫 : %-4d    ", (*a_MonList)[e_ran].m_Defence); y++; Pc::gotoxy2(x, y);
					printf("溯漣 : %-3d     ", (*a_MonList)[e_ran].m_Level); y += 3; Pc::gotoxy2(x, y);

					Sleep(500);
				//	break;
			}
			else if (e_ran != 2)
			{

				//if ((*a_MonList)[e_ran].m_Hp == 0) continue;

					//奢問 斜楚а
					x = 42;
					y = 20;
					Pc::gotoxy2(x, y);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						12 | 12 << 4);  //�羃�
					for (int i = 0; i < 44; i++)
					{
						printf("﹥");
						Sleep(13);
						if (i == 22) break;

						//Pc::gotoxy2(x, y);

					}
					if (e_ran == 3) num = 14;
					if (e_ran == 0) num = 14;
					if (e_ran == 1) num = 7;
					if (e_ran == 0) num2 = 20;
					if (e_ran == 3) num2 = 20;
					if (e_ran == 1) num2 = 20;

					x = 86, y = num2;
					Pc::gotoxy2(x, y);
					for (int i = 0; i < num; i++)
					{
						printf("﹥");
						Sleep(13);
						y--;

						Pc::gotoxy2(x, y);
					}


					Pc::gotoxy2(x, y);
					for (int i = 0; i < 23; i++)
					{
						printf("﹥");
						Sleep(13);
					}

					//奩瞪 
					if (e_ran == 3) reverse = 4;
					if (e_ran == 0) reverse = 4;
					else if (e_ran == 1) reverse = 11;
					for (int i = 0; i < 5; i++)
					{
						x = 134;
						y = reverse;
						Pc::gotoxy2(x, y);


						if (is_Color == true)
						{
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
								12); //

						}
						if (is_Color == false)
						{

							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
								FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //�羃�
						}
						printf("檜葷:%-15s  ", (*a_MonList)[e_ran].m_Name); y++; Pc::gotoxy2(x, y);
						printf("羹溘 : %-10d ", (*a_MonList)[e_ran].m_Hp); y++; Pc::gotoxy2(x, y);
						printf("奢問 : %-6d  ", (*a_MonList)[e_ran].m_Attack); y++; Pc::gotoxy2(x, y);
						printf("寞橫 : %-4d    ", (*a_MonList)[e_ran].m_Defence); y++; Pc::gotoxy2(x, y);
						printf("溯漣 : %-3d     ", (*a_MonList)[e_ran].m_Level); y += 3; Pc::gotoxy2(x, y);
						Sleep(100);
						is_Color = !is_Color;
					}




					//蟾晦�首庥�
					x = 42;
					y = 20;

					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						7);  //�羃�
					Pc::gotoxy2(x, y);
					for (int i = 0; i < 23; i++)
						printf("  ");


					if (e_ran == 0) num = 14;
					if (e_ran == 3) num = 14;
					if (e_ran == 1) num = 7;
					if (e_ran == 0) num2 = 20;
					if (e_ran == 3) num2 = 20;
					if (e_ran == 1) num2 = 20;

					x = 86;
					y = num2;
					Pc::gotoxy2(x, y);
					for (int i = 0; i < num; i++)
					{
						printf("  ");
						Sleep(13);
						y--;
						Pc::gotoxy2(x, y);
					}

					Pc::gotoxy2(x, y);
					for (int i = 0; i < 23; i++)
					{
						printf("  ");
						Sleep(13);
					}
					if (e_ran == 3) reverse = 4;
					if (e_ran == 0) reverse = 4;
					else if (e_ran == 2) reverse = 11;

					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //�羃�
					x = 134;
					y = reverse;
					Pc::gotoxy2(x, y);
					printf("檜葷:%-15s  ", (*a_MonList)[e_ran].m_Name); y++; Pc::gotoxy2(x, y);
					printf("羹溘 : %-10d ", (*a_MonList)[e_ran].m_Hp); y++; Pc::gotoxy2(x, y);
					printf("奢問 : %-6d  ", (*a_MonList)[e_ran].m_Attack); y++; Pc::gotoxy2(x, y);
					printf("寞橫 : %-4d    ", (*a_MonList)[e_ran].m_Defence); y++; Pc::gotoxy2(x, y);
					printf("溯漣 : %-3d     ", (*a_MonList)[e_ran].m_Level); y += 3; Pc::gotoxy2(x, y);

					Sleep(500);

					//break;
			}
		}






		else if (p_ran == 3 && p4_attack == true)
		{

			//if ((*a_MonList)[e_ran].m_Hp == 0) continue;


				//奢問 斜楚а
				x = 42;
				y = 27;
				Pc::gotoxy2(x, y);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
					12 | 12 << 4);  //�羃�
				for (int i = 0; i < 44; i++)
				{
					printf("﹥");
					Sleep(13);
					if (i == 22) break;

					//Pc::gotoxy2(x, y);

				}

				if (e_ran == 0) num = 21;
				if (e_ran == 1) num = 14;
				if (e_ran == 2) num = 7;
				if (e_ran == 3) num = 21;
				num2 = 27;


				x = 86, y = num2;
				Pc::gotoxy2(x, y);
				for (int i = 0; i < num; i++)
				{
					printf("﹥");
					Sleep(13);
					y--;

					Pc::gotoxy2(x, y);
				}


				Pc::gotoxy2(x, y);
				for (int i = 0; i < 23; i++)
				{
					printf("﹥");
					Sleep(13);
				}

				//奩瞪 
				if (e_ran == 3) reverse = 4;
				if (e_ran == 0) reverse = 4;
				else if (e_ran == 1) reverse = 11;
				else if (e_ran == 2) reverse = 18;
				for (int i = 0; i < 5; i++)
				{
					x = 134;
					y = reverse;
					Pc::gotoxy2(x, y);


					if (is_Color == true)
					{
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
							12); //

					}
					if (is_Color == false)
					{

						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
							FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //�羃�
					}
					printf("檜葷:%-15s  ", (*a_MonList)[e_ran].m_Name); y++; Pc::gotoxy2(x, y);
					printf("羹溘 : %-10d ", (*a_MonList)[e_ran].m_Hp); y++; Pc::gotoxy2(x, y);
					printf("奢問 : %-6d  ", (*a_MonList)[e_ran].m_Attack); y++; Pc::gotoxy2(x, y);
					printf("寞橫 : %-4d    ", (*a_MonList)[e_ran].m_Defence); y++; Pc::gotoxy2(x, y);
					printf("溯漣 : %-3d     ", (*a_MonList)[e_ran].m_Level); y += 3; Pc::gotoxy2(x, y);
					Sleep(100);
					is_Color = !is_Color;
				}




				//蟾晦�首庥�
				x = 42;
				y = 27;

				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
					7);  //�羃�
				Pc::gotoxy2(x, y);
				for (int i = 0; i < 23; i++)
					printf("  ");


				if (e_ran == 0) num = 21;
				if (e_ran == 1) num = 14;
				if (e_ran == 2) num = 7;
				num2 = 27;

				x = 86;
				y = num2;
				Pc::gotoxy2(x, y);
				for (int i = 0; i < num; i++)
				{
					printf("  ");
					Sleep(13);
					y--;
					Pc::gotoxy2(x, y);
				}

				Pc::gotoxy2(x, y);
				for (int i = 0; i < 23; i++)
				{
					printf("  ");
					Sleep(13);
				}
				if (e_ran == 3) reverse = 4;
				if (e_ran == 0) reverse = 4;
				else if (e_ran == 1) reverse = 11;
				else if (e_ran == 2) reverse = 18;

				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
					FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //�羃�
				x = 134;
				y = reverse;
				Pc::gotoxy2(x, y);
				printf("檜葷:%-15s  ", (*a_MonList)[e_ran].m_Name); y++; Pc::gotoxy2(x, y);
				printf("羹溘 : %-10d ", (*a_MonList)[e_ran].m_Hp); y++; Pc::gotoxy2(x, y);
				printf("奢問 : %-6d  ", (*a_MonList)[e_ran].m_Attack); y++; Pc::gotoxy2(x, y);
				printf("寞橫 : %-4d    ", (*a_MonList)[e_ran].m_Defence); y++; Pc::gotoxy2(x, y);
				printf("溯漣 : %-3d     ", (*a_MonList)[e_ran].m_Level); y += 3; Pc::gotoxy2(x, y);

				Sleep(500);
			
				//break;
		}//elseif (p_ran==3)

	
	

}


void Battle::EnemyAttPrint(vector<Pc>*a_PcList, vector<PcGuild>*a_PcGdList, vector<Monster> *a_MonList, int log, int x, int y, int p_ran, int e_ran)
{
	bool is_Color = true;
	int num = 0;
	int num2 = 0;
	int reverse = 0;


	
		
	

		if (e_ran == 0 || e_ran == 3)
		{
			
		
				
				if(p_ran == 0 )
				{ 
					x = 130;
					y = 6;


					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12 | 12 << 4);
					for (int i = 0; i < 45; i++)
					{

						Pc::gotoxy2(x, y);
						printf("﹥");
						Sleep(13);
						x -= 2;
						//Pc::gotoxy2(x, y);

					}


					//奩瞪睡碟


					for (int i = 0; i < 5; i++)
					{
						x = 6;
						y = 4;

						Pc::gotoxy2(x, y);
						if (is_Color == true)
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
								12);  //說除儀

						if (is_Color == false)
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
								7);
						printf("檜葷:%-14s 霜機:%-9s", (*a_PcList)[log].Name, (*a_PcList)[log].Char_Type); y++; Pc::gotoxy2(x, y);
						printf("羹溘:%-8d       葆釭 : %-7d", (*a_PcList)[log].Hp, (*a_PcList)[log].Mp); y++; Pc::gotoxy2(x, y);
						printf("奢問:%-5d          寞橫:%-5d", (*a_PcList)[log].Attack, (*a_PcList)[log].Deffence); y++; Pc::gotoxy2(x, y);
						printf("奢樓:%-2d             溯漣 : %-3d", (*a_PcList)[log].Att_Speed, (*a_PcList)[log].Level); y++; Pc::gotoxy2(x, y);
						printf("��:%-4d    團繪:%-4d    雖棟:%-4d", (*a_PcList)[log].Str, (*a_PcList)[log].Dex, (*a_PcList)[log].INT); y += 3; Pc::gotoxy2(x, y);
						Sleep(100);
						is_Color = !is_Color;
					}

					//蟾晦�首庥�

					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						7);  //�羃�
					x = 130;
					y = 6;


					Pc::gotoxy2(x, y);
					for (int i = 0; i < 45; i++)
					{
						Pc::gotoxy2(x, y);
						printf("  ");
						Sleep(13);
						x -= 2;
					}

					x = 6;
					y = 4;

					Pc::gotoxy2(x, y);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						7);
					printf("檜葷:%-14s 霜機:%-9s", (*a_PcList)[log].Name, (*a_PcList)[log].Char_Type); y++; Pc::gotoxy2(x, y);
					printf("羹溘:%-8d       葆釭 : %-7d", (*a_PcList)[log].Hp, (*a_PcList)[log].Mp); y++; Pc::gotoxy2(x, y);
					printf("奢問:%-5d          寞橫:%-5d", (*a_PcList)[log].Attack, (*a_PcList)[log].Deffence); y++; Pc::gotoxy2(x, y);
					printf("奢樓:%-2d             溯漣 : %-3d", (*a_PcList)[log].Att_Speed, (*a_PcList)[log].Level); y++; Pc::gotoxy2(x, y);
					printf("��:%-4d    團繪:%-4d    雖棟:%-4d", (*a_PcList)[log].Str, (*a_PcList)[log].Dex, (*a_PcList)[log].INT); y += 3; Pc::gotoxy2(x, y);

					//break;

			}//if (p_ran == 0)

				else if (p_ran != 0)
				{




					x = 130;
					y = 6;


					Pc::gotoxy2(x, y);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						12 | 12 << 4);  //�羃�
					for (int i = 0; i < 44; i++)
					{
						Pc::gotoxy2(x, y);
						printf("﹥");
						Sleep(13);
						x -= 2;
						if (i == 22) break;

						//Pc::gotoxy2(x, y);

					}
					if (p_ran == 1)	num = 7;
					else if (p_ran == 2) num = 14;
					else if (p_ran == 3) num = 21;
					x = 86, y = 6;
					Pc::gotoxy2(x, y);
					for (int i = 0; i < num; i++)
					{
						printf("﹥");
						Sleep(13);
						y++;
						Pc::gotoxy2(x, y);
					}


					Pc::gotoxy2(x, y);
					for (int i = 0; i < 23; i++)
					{
						Pc::gotoxy2(x, y);
						printf("﹥");
						Sleep(13);
						x -= 2;
					}

					//奩瞪睡碟
					if (p_ran == 1)	reverse = 11;
					else if (p_ran == 2) reverse = 18;
					else if (p_ran == 3) reverse = 25;
					for (int i = 0; i < 5; i++)
					{
						x = 6;
						y = reverse;

						Pc::gotoxy2(x, y);
						if (is_Color == true)
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
								12);  //說除儀

						if (is_Color == false)
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
								7);
						if (p_ran != 0)
						{

							printf("檜葷:%-14s 霜機:%-9s", (*a_PcGdList)[p_ran - 1].Name, (*a_PcGdList)[p_ran - 1].Char_Type); y++; Pc::gotoxy2(x, y);
							printf("羹溘:%-8d       葆釭 : %-7d", (*a_PcGdList)[p_ran - 1].Hp, (*a_PcGdList)[p_ran - 1].Mp); y++; Pc::gotoxy2(x, y);
							printf("奢問:%-5d          寞橫:%-5d", (*a_PcGdList)[p_ran - 1].Attack, (*a_PcGdList)[p_ran - 1].Deffence); y++; Pc::gotoxy2(x, y);
							printf("奢樓:%-2d             溯漣 : %-3d", (*a_PcGdList)[p_ran - 1].Att_Speed, (*a_PcGdList)[p_ran - 1].Level); y++; Pc::gotoxy2(x, y);
							printf("��:%-4d    團繪:%-4d    雖棟:%-4d", (*a_PcGdList)[p_ran - 1].Str, (*a_PcGdList)[p_ran - 1].Dex, (*a_PcGdList)[p_ran - 1].INT); y += 3; Pc::gotoxy2(x, y);
						}
						else if (p_ran == 0)
						{
							printf("檜葷:%-14s 霜機:%-9s", (*a_PcList)[log].Name, (*a_PcList)[log].Char_Type); y++; Pc::gotoxy2(x, y);
							printf("羹溘:%-8d       葆釭 : %-7d", (*a_PcList)[log].Hp, (*a_PcList)[log].Mp); y++; Pc::gotoxy2(x, y);
							printf("奢問:%-5d          寞橫:%-5d", (*a_PcList)[log].Attack, (*a_PcList)[log].Deffence); y++; Pc::gotoxy2(x, y);
							printf("奢樓:%-2d             溯漣 : %-3d", (*a_PcList)[log].Att_Speed, (*a_PcList)[log].Level); y++; Pc::gotoxy2(x, y);
							printf("��:%-4d    團繪:%-4d    雖棟:%-4d", (*a_PcList)[log].Str, (*a_PcList)[log].Dex, (*a_PcList)[log].INT); y += 3; Pc::gotoxy2(x, y);
						}
						Sleep(100);
						is_Color = !is_Color;
					}

					//蟾晦�� 睡碟

					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						7);  //�羃�

					x = 130;
					y = 6;
					Pc::gotoxy2(x, y);

					for (int i = 0; i < 44; i++)
					{
						Pc::gotoxy2(x, y);
						printf("  ");
						Sleep(13);
						x -= 2;
						if (i == 22) break;

						//Pc::gotoxy2(x, y);

					}


					if (p_ran == 1)	num = 7;
					else if (p_ran == 2) num = 14;
					else if (p_ran == 3) num = 21;
					x = 86, y = 6;
					Pc::gotoxy2(x, y);
					for (int i = 0; i < num; i++)
					{
						printf("  ");
						Sleep(13);
						y++;
						Pc::gotoxy2(x, y);
					}


					Pc::gotoxy2(x, y);
					for (int i = 0; i < 23; i++)
					{
						Pc::gotoxy2(x, y);
						printf("  ");
						Sleep(13);
						x -= 2;
					}
					if (p_ran == 1)	reverse = 11;
					else if (p_ran == 2) reverse = 18;
					else if (p_ran == 3) reverse = 25;
					x = 6;
					y = reverse;

					Pc::gotoxy2(x, y);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						7);
					if (p_ran != 0)
					{

						printf("檜葷:%-14s 霜機:%-9s", (*a_PcGdList)[p_ran - 1].Name, (*a_PcGdList)[p_ran - 1].Char_Type); y++; Pc::gotoxy2(x, y);
						printf("羹溘:%-8d       葆釭 : %-7d", (*a_PcGdList)[p_ran - 1].Hp, (*a_PcGdList)[p_ran - 1].Mp); y++; Pc::gotoxy2(x, y);
						printf("奢問:%-5d          寞橫:%-5d", (*a_PcGdList)[p_ran - 1].Attack, (*a_PcGdList)[p_ran - 1].Deffence); y++; Pc::gotoxy2(x, y);
						printf("奢樓:%-2d             溯漣 : %-3d", (*a_PcGdList)[p_ran - 1].Att_Speed, (*a_PcGdList)[p_ran - 1].Level); y++; Pc::gotoxy2(x, y);
						printf("��:%-4d    團繪:%-4d    雖棟:%-4d", (*a_PcGdList)[p_ran - 1].Str, (*a_PcGdList)[p_ran - 1].Dex, (*a_PcGdList)[p_ran - 1].INT); y += 3; Pc::gotoxy2(x, y);
					}
					else if (p_ran == 0)
					{
						printf("檜葷:%-14s 霜機:%-9s", (*a_PcList)[log].Name, (*a_PcList)[log].Char_Type); y++; Pc::gotoxy2(x, y);
						printf("羹溘:%-8d       葆釭 : %-7d", (*a_PcList)[log].Hp, (*a_PcList)[log].Mp); y++; Pc::gotoxy2(x, y);
						printf("奢問:%-5d          寞橫:%-5d", (*a_PcList)[log].Attack, (*a_PcList)[log].Deffence); y++; Pc::gotoxy2(x, y);
						printf("奢樓:%-2d             溯漣 : %-3d", (*a_PcList)[log].Att_Speed, (*a_PcList)[log].Level); y++; Pc::gotoxy2(x, y);
						printf("��:%-4d    團繪:%-4d    雖棟:%-4d", (*a_PcList)[log].Str, (*a_PcList)[log].Dex, (*a_PcList)[log].INT); y += 3; Pc::gotoxy2(x, y);
					}

					//break;



				}

		}
		else if (e_ran == 1 || e_ran == 3)
		{
			if (p_ran == 1)
			{
				/*if ((*a_PcGdList)[p_ran-1].Hp <= 0) continue;*/
					
						
					x = 130;
					y = 13;


					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12 | 12 << 4);
					for (int i = 0; i < 45; i++)
					{

						Pc::gotoxy2(x, y);
						printf("﹥");
						Sleep(13);
						x -= 2;
						//Pc::gotoxy2(x, y);

					}


					//奩瞪睡碟


					for (int i = 0; i < 5; i++)
					{
						x = 6;
						y = 11;

						Pc::gotoxy2(x, y);
						if (is_Color == true)
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
								12);  //說除儀

						if (is_Color == false)
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
								7);
						printf("檜葷:%-14s 霜機:%-9s", (*a_PcGdList)[p_ran-1].Name, (*a_PcGdList)[p_ran-1].Char_Type); y++; Pc::gotoxy2(x, y);
						printf("羹溘:%-8d       葆釭 : %-7d", (*a_PcGdList)[p_ran-1].Hp, (*a_PcGdList)[p_ran-1].Mp); y++; Pc::gotoxy2(x, y);
						printf("奢問:%-5d          寞橫:%-5d", (*a_PcGdList)[p_ran-1].Attack, (*a_PcGdList)[p_ran-1].Deffence); y++; Pc::gotoxy2(x, y);
						printf("奢樓:%-2d             溯漣 : %-3d", (*a_PcGdList)[p_ran-1].Att_Speed, (*a_PcGdList)[p_ran-1].Level); y++; Pc::gotoxy2(x, y);
						printf("��:%-4d    團繪:%-4d    雖棟:%-4d", (*a_PcGdList)[p_ran-1].Str, (*a_PcGdList)[p_ran-1].Dex, (*a_PcGdList)[p_ran-1].INT); y += 3; Pc::gotoxy2(x, y);
						Sleep(100);
						is_Color = !is_Color;
					}

					//蟾晦�首庥�

					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						7);  //�羃�
					x = 130;
					y = 13;
					Pc::gotoxy2(x, y);

					Pc::gotoxy2(x, y);
					for (int i = 0; i < 45; i++)
					{
						Pc::gotoxy2(x, y);
						printf("  ");
						Sleep(13);
						x -= 2;
					}

					x = 6;
					y = 11;

					Pc::gotoxy2(x, y);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						7);
					printf("檜葷:%-14s 霜機:%-9s", (*a_PcGdList)[p_ran - 1].Name, (*a_PcGdList)[p_ran - 1].Char_Type); y++; Pc::gotoxy2(x, y);
					printf("羹溘:%-8d       葆釭 : %-7d", (*a_PcGdList)[p_ran - 1].Hp, (*a_PcGdList)[p_ran - 1].Mp); y++; Pc::gotoxy2(x, y);
					printf("奢問:%-5d          寞橫:%-5d", (*a_PcGdList)[p_ran - 1].Attack, (*a_PcGdList)[p_ran - 1].Deffence); y++; Pc::gotoxy2(x, y);
					printf("奢樓:%-2d             溯漣 : %-3d", (*a_PcGdList)[p_ran - 1].Att_Speed, (*a_PcGdList)[p_ran - 1].Level); y++; Pc::gotoxy2(x, y);
					printf("��:%-4d    團繪:%-4d    雖棟:%-4d", (*a_PcGdList)[p_ran - 1].Str, (*a_PcGdList)[p_ran - 1].Dex, (*a_PcGdList)[p_ran - 1].INT); y += 3; Pc::gotoxy2(x, y);
					//break;
			}
			else if (p_ran != 1)
			{
			
				
				



					x = 130;
					y = 13;


					Pc::gotoxy2(x, y);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						12 | 12 << 4);  //�羃�
					for (int i = 0; i < 44; i++)
					{
						Pc::gotoxy2(x, y);
						printf("﹥");
						Sleep(13);
						x -= 2;
						if (i == 22) break;

						//Pc::gotoxy2(x, y);

					}
					if (p_ran == 0)	num = 7;
					else if (p_ran == 2) num = 7;
					else if (p_ran == 3) num = 14;

					if (p_ran == 0)	num2 = 13;
					else if (p_ran == 2) num2 = 13;
					else if (p_ran == 3) num2 = 13;
					x = 86, y = num2;
					Pc::gotoxy2(x, y);
					for (int i = 0; i < num; i++)
					{
						printf("﹥");
						Sleep(13);
						if (p_ran == 0)	y--;
						else if (p_ran == 2) y++;
						else if (p_ran == 3) y++;

						Pc::gotoxy2(x, y);
					}


					Pc::gotoxy2(x, y);
					for (int i = 0; i < 23; i++)
					{
						Pc::gotoxy2(x, y);
						printf("﹥");
						Sleep(13);
						x -= 2;
					}

					//奩瞪睡碟
					if (p_ran == 0)	reverse = 4;
					else if (p_ran == 2) reverse = 18;
					else if (p_ran == 3) reverse = 25;
					for (int i = 0; i < 5; i++)
					{
						x = 6;
						y = reverse;

						Pc::gotoxy2(x, y);
						if (is_Color == true)
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
								12);  //說除儀

						if (is_Color == false)
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
								7);
						if (p_ran != 0)
						{

							printf("檜葷:%-14s 霜機:%-9s", (*a_PcGdList)[p_ran - 1].Name, (*a_PcGdList)[p_ran - 1].Char_Type); y++; Pc::gotoxy2(x, y);
							printf("羹溘:%-8d       葆釭 : %-7d", (*a_PcGdList)[p_ran - 1].Hp, (*a_PcGdList)[p_ran - 1].Mp); y++; Pc::gotoxy2(x, y);
							printf("奢問:%-5d          寞橫:%-5d", (*a_PcGdList)[p_ran - 1].Attack, (*a_PcGdList)[p_ran - 1].Deffence); y++; Pc::gotoxy2(x, y);
							printf("奢樓:%-2d             溯漣 : %-3d", (*a_PcGdList)[p_ran - 1].Att_Speed, (*a_PcGdList)[p_ran - 1].Level); y++; Pc::gotoxy2(x, y);
							printf("��:%-4d    團繪:%-4d    雖棟:%-4d", (*a_PcGdList)[p_ran - 1].Str, (*a_PcGdList)[p_ran - 1].Dex, (*a_PcGdList)[p_ran - 1].INT); y += 3; Pc::gotoxy2(x, y);
						}
						else if (p_ran == 0)
						{
							printf("檜葷:%-14s 霜機:%-9s", (*a_PcList)[log].Name, (*a_PcList)[log].Char_Type); y++; Pc::gotoxy2(x, y);
							printf("羹溘:%-8d       葆釭 : %-7d", (*a_PcList)[log].Hp, (*a_PcList)[log].Mp); y++; Pc::gotoxy2(x, y);
							printf("奢問:%-5d          寞橫:%-5d", (*a_PcList)[log].Attack, (*a_PcList)[log].Deffence); y++; Pc::gotoxy2(x, y);
							printf("奢樓:%-2d             溯漣 : %-3d", (*a_PcList)[log].Att_Speed, (*a_PcList)[log].Level); y++; Pc::gotoxy2(x, y);
							printf("��:%-4d    團繪:%-4d    雖棟:%-4d", (*a_PcList)[log].Str, (*a_PcList)[log].Dex, (*a_PcList)[log].INT); y += 3; Pc::gotoxy2(x, y);
						}
						Sleep(100);
						is_Color = !is_Color;

					}

					//蟾晦�� 睡碟

					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						7);  //�羃�

					x = 130;
					y = 13;
					Pc::gotoxy2(x, y);

					for (int i = 0; i < 44; i++)
					{
						Pc::gotoxy2(x, y);
						printf("  ");
						Sleep(13);
						x -= 2;
						if (i == 22) break;

						//Pc::gotoxy2(x, y);

					}


					if (p_ran == 0)	num = 7;
					else if (p_ran == 2) num = 7;
					else if (p_ran == 3) num = 14;

					if (p_ran == 0)	num2 = 13;
					else if (p_ran == 2) num2 = 13;
					else if (p_ran == 3) num2 = 13;

					x = 86, y = num2;
					Pc::gotoxy2(x, y);
					for (int i = 0; i < num; i++)
					{
						printf("  ");
						Sleep(13);
						if (p_ran == 0)	y--;
						else if (p_ran == 2) y++;
						else if (p_ran == 3) y++;
						Pc::gotoxy2(x, y);
					}


					Pc::gotoxy2(x, y);
					for (int i = 0; i < 23; i++)
					{
						Pc::gotoxy2(x, y);
						printf("  ");
						Sleep(13);
						x -= 2;
					}
					if (p_ran == 0)	reverse = 4;
					else if (p_ran == 2) reverse = 18;
					else if (p_ran == 3) reverse = 25;
					x = 6;
					y = reverse;

					Pc::gotoxy2(x, y);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						7);
					if (p_ran != 0)
					{
						printf("檜葷:%-14s 霜機:%-9s", (*a_PcGdList)[p_ran - 1].Name, (*a_PcGdList)[p_ran - 1].Char_Type); y++; Pc::gotoxy2(x, y);
						printf("羹溘:%-8d       葆釭 : %-7d", (*a_PcGdList)[p_ran - 1].Hp, (*a_PcGdList)[p_ran - 1].Mp); y++; Pc::gotoxy2(x, y);
						printf("奢問:%-5d          寞橫:%-5d", (*a_PcGdList)[p_ran - 1].Attack, (*a_PcGdList)[p_ran - 1].Deffence); y++; Pc::gotoxy2(x, y);
						printf("奢樓:%-2d             溯漣 : %-3d", (*a_PcGdList)[p_ran - 1].Att_Speed, (*a_PcGdList)[p_ran - 1].Level); y++; Pc::gotoxy2(x, y);
						printf("��:%-4d    團繪:%-4d    雖棟:%-4d", (*a_PcGdList)[p_ran - 1].Str, (*a_PcGdList)[p_ran - 1].Dex, (*a_PcGdList)[p_ran - 1].INT); y += 3; Pc::gotoxy2(x, y);
					}
					else if (p_ran == 0)
					{
						printf("檜葷:%-14s 霜機:%-9s", (*a_PcList)[log].Name, (*a_PcList)[log].Char_Type); y++; Pc::gotoxy2(x, y);
						printf("羹溘:%-8d       葆釭 : %-7d", (*a_PcList)[log].Hp, (*a_PcList)[log].Mp); y++; Pc::gotoxy2(x, y);
						printf("奢問:%-5d          寞橫:%-5d", (*a_PcList)[log].Attack, (*a_PcList)[log].Deffence); y++; Pc::gotoxy2(x, y);
						printf("奢樓:%-2d             溯漣 : %-3d", (*a_PcList)[log].Att_Speed, (*a_PcList)[log].Level); y++; Pc::gotoxy2(x, y);
						printf("��:%-4d    團繪:%-4d    雖棟:%-4d", (*a_PcList)[log].Str, (*a_PcList)[log].Dex, (*a_PcList)[log].INT); y += 3; Pc::gotoxy2(x, y);
					}

					//break;


			}

		}//else if (e_ran == 1)
		else if (e_ran == 2 || e_ran ==3)
		{
			if (p_ran == 2 && e_attack3 == true)
			{

				/*if((*a_PcGdList)[p_ran-1].Hp <= 0) continue;*/
			

					x = 130;
					y = 20;


					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12 | 12 << 4);
					for (int i = 0; i < 45; i++)
					{

						Pc::gotoxy2(x, y);
						printf("﹥");
						Sleep(13);
						x -= 2;
						//Pc::gotoxy2(x, y);

					}


					//奩瞪睡碟


					for (int i = 0; i < 5; i++)
					{
						x = 6;
						y = 18;

						Pc::gotoxy2(x, y);
						if (is_Color == true)
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
								12);  //說除儀

						if (is_Color == false)
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
								7);
						printf("檜葷:%-14s 霜機:%-9s", (*a_PcGdList)[p_ran].Name, (*a_PcGdList)[p_ran].Char_Type); y++; Pc::gotoxy2(x, y);
						printf("羹溘:%-8d       葆釭 : %-7d", (*a_PcGdList)[p_ran].Hp, (*a_PcGdList)[p_ran].Mp); y++; Pc::gotoxy2(x, y);
						printf("奢問:%-5d          寞橫:%-5d", (*a_PcGdList)[p_ran].Attack, (*a_PcGdList)[p_ran].Deffence); y++; Pc::gotoxy2(x, y);
						printf("奢樓:%-2d             溯漣 : %-3d", (*a_PcGdList)[p_ran].Att_Speed, (*a_PcGdList)[p_ran].Level); y++; Pc::gotoxy2(x, y);
						printf("��:%-4d    團繪:%-4d    雖棟:%-4d", (*a_PcGdList)[p_ran].Str, (*a_PcGdList)[p_ran].Dex, (*a_PcGdList)[p_ran].INT); y += 3; Pc::gotoxy2(x, y);
						Sleep(100);
						is_Color = !is_Color;
					}

					//蟾晦�首庥�

					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						7);  //�羃�
					x = 130;
					y = 20;
					Pc::gotoxy2(x, y);

					Pc::gotoxy2(x, y);
					for (int i = 0; i < 45; i++)
					{
						Pc::gotoxy2(x, y);
						printf("  ");
						Sleep(13);
						x -= 2;
					}

					x = 6;
					y = 18;

					Pc::gotoxy2(x, y);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						7);
					printf("檜葷:%-14s 霜機:%-9s", (*a_PcGdList)[p_ran].Name, (*a_PcGdList)[p_ran].Char_Type); y++; Pc::gotoxy2(x, y);
					printf("羹溘:%-8d       葆釭 : %-7d", (*a_PcGdList)[p_ran].Hp, (*a_PcGdList)[p_ran].Mp); y++; Pc::gotoxy2(x, y);
					printf("奢問:%-5d          寞橫:%-5d", (*a_PcGdList)[p_ran].Attack, (*a_PcGdList)[p_ran].Deffence); y++; Pc::gotoxy2(x, y);
					printf("奢樓:%-2d             溯漣 : %-3d", (*a_PcGdList)[p_ran].Att_Speed, (*a_PcGdList)[p_ran].Level); y++; Pc::gotoxy2(x, y);
					printf("��:%-4d    團繪:%-4d    雖棟:%-4d", (*a_PcGdList)[p_ran].Str, (*a_PcGdList)[p_ran].Dex, (*a_PcGdList)[p_ran].INT); y += 3; Pc::gotoxy2(x, y);

					//break;
			}//if

			else if (p_ran != 2) //1
			{

				


					x = 130;
					y = 20;


					Pc::gotoxy2(x, y);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						12 | 12 << 4);  //�羃�
					for (int i = 0; i < 44; i++)
					{
						Pc::gotoxy2(x, y);
						printf("﹥");
						Sleep(13);
						x -= 2;
						if (i == 22) break;

						//Pc::gotoxy2(x, y);

					}
					if (p_ran == 0)	num = 14;
					else if (p_ran == 1) num = 7;
					else if (p_ran == 3) num = 7;

					if (p_ran == 0)	num2 = 20;
					else if (p_ran == 1) num2 = 20;
					else if (p_ran == 3) num2 = 20;
					x = 86, y = num2;
					Pc::gotoxy2(x, y);
					for (int i = 0; i < num; i++)
					{
						printf("﹥");
						Sleep(13);
						if (p_ran == 0)	y--;
						else if (p_ran == 1) y--;
						else if (p_ran == 3) y++;

						Pc::gotoxy2(x, y);
					}


					Pc::gotoxy2(x, y);
					for (int i = 0; i < 23; i++)
					{
						Pc::gotoxy2(x, y);
						printf("﹥");
						Sleep(13);
						x -= 2;
					}

					//奩瞪睡碟
					if (p_ran == 0)	reverse = 4;
					else if (p_ran == 1) reverse = 11;
					else if (p_ran == 3) reverse = 25;
					for (int i = 0; i < 5; i++)
					{
						x = 6;
						y = reverse;

						Pc::gotoxy2(x, y);
						if (is_Color == true)
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
								12);  //說除儀

						if (is_Color == false)
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
								7);
						if (p_ran != 0)
						{

							printf("檜葷:%-14s 霜機:%-9s", (*a_PcGdList)[p_ran - 1].Name, (*a_PcGdList)[p_ran - 1].Char_Type); y++; Pc::gotoxy2(x, y);
							printf("羹溘:%-8d       葆釭 : %-7d", (*a_PcGdList)[p_ran - 1].Hp, (*a_PcGdList)[p_ran - 1].Mp); y++; Pc::gotoxy2(x, y);
							printf("奢問:%-5d          寞橫:%-5d", (*a_PcGdList)[p_ran - 1].Attack, (*a_PcGdList)[p_ran - 1].Deffence); y++; Pc::gotoxy2(x, y);
							printf("奢樓:%-2d             溯漣 : %-3d", (*a_PcGdList)[p_ran - 1].Att_Speed, (*a_PcGdList)[p_ran - 1].Level); y++; Pc::gotoxy2(x, y);
							printf("��:%-4d    團繪:%-4d    雖棟:%-4d", (*a_PcGdList)[p_ran - 1].Str, (*a_PcGdList)[p_ran - 1].Dex, (*a_PcGdList)[p_ran - 1].INT); y += 3; Pc::gotoxy2(x, y);
						}
						else if (p_ran == 0)
						{
							printf("檜葷:%-14s 霜機:%-9s", (*a_PcList)[log].Name, (*a_PcList)[log].Char_Type); y++; Pc::gotoxy2(x, y);
							printf("羹溘:%-8d       葆釭 : %-7d", (*a_PcList)[log].Hp, (*a_PcList)[log].Mp); y++; Pc::gotoxy2(x, y);
							printf("奢問:%-5d          寞橫:%-5d", (*a_PcList)[log].Attack, (*a_PcList)[log].Deffence); y++; Pc::gotoxy2(x, y);
							printf("奢樓:%-2d             溯漣 : %-3d", (*a_PcList)[log].Att_Speed, (*a_PcList)[log].Level); y++; Pc::gotoxy2(x, y);
							printf("��:%-4d    團繪:%-4d    雖棟:%-4d", (*a_PcList)[log].Str, (*a_PcList)[log].Dex, (*a_PcList)[log].INT); y += 3; Pc::gotoxy2(x, y);
						}
						Sleep(100);
						is_Color = !is_Color;

					}

					//蟾晦�� 睡碟

					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						7);  //�羃�

					x = 130;
					y = 20;
					Pc::gotoxy2(x, y);

					for (int i = 0; i < 44; i++)
					{
						Pc::gotoxy2(x, y);
						printf("  ");
						Sleep(13);
						x -= 2;
						if (i == 22) break;

						//Pc::gotoxy2(x, y);

					}


					if (p_ran == 0)	num = 14;
					else if (p_ran == 1) num = 7;
					else if (p_ran == 3) num = 7;

					if (p_ran == 0)	num2 = 20;
					else if (p_ran == 1) num2 = 20;
					else if (p_ran == 3) num2 = 20;

					x = 86, y = num2;
					Pc::gotoxy2(x, y);
					for (int i = 0; i < num; i++)
					{
						printf("  ");
						Sleep(13);
						if (p_ran == 0)	y--;
						else if (p_ran == 1) y--;
						else if (p_ran == 3) y++;
						Pc::gotoxy2(x, y);
					}


					Pc::gotoxy2(x, y);
					for (int i = 0; i < 23; i++)
					{
						Pc::gotoxy2(x, y);
						printf("  ");
						Sleep(13);
						x -= 2;
					}
					if (p_ran == 0)	reverse = 4;
					else if (p_ran == 1) reverse = 11;
					else if (p_ran == 3) reverse = 25;
					x = 6;
					y = reverse;

					Pc::gotoxy2(x, y);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						7);
					if (p_ran != 0)
					{
						printf("檜葷:%-14s 霜機:%-9s", (*a_PcGdList)[p_ran - 1].Name, (*a_PcGdList)[p_ran - 1].Char_Type); y++; Pc::gotoxy2(x, y);
						printf("羹溘:%-8d       葆釭 : %-7d", (*a_PcGdList)[p_ran - 1].Hp, (*a_PcGdList)[p_ran - 1].Mp); y++; Pc::gotoxy2(x, y);
						printf("奢問:%-5d          寞橫:%-5d", (*a_PcGdList)[p_ran - 1].Attack, (*a_PcGdList)[p_ran - 1].Deffence); y++; Pc::gotoxy2(x, y);
						printf("奢樓:%-2d             溯漣 : %-3d", (*a_PcGdList)[p_ran - 1].Att_Speed, (*a_PcGdList)[p_ran - 1].Level); y++; Pc::gotoxy2(x, y);
						printf("��:%-4d    團繪:%-4d    雖棟:%-4d", (*a_PcGdList)[p_ran - 1].Str, (*a_PcGdList)[p_ran - 1].Dex, (*a_PcGdList)[p_ran - 1].INT); y += 3; Pc::gotoxy2(x, y);
					}
					else if (p_ran == 0)
					{
						printf("檜葷:%-14s 霜機:%-9s", (*a_PcList)[log].Name, (*a_PcList)[log].Char_Type); y++; Pc::gotoxy2(x, y);
						printf("羹溘:%-8d       葆釭 : %-7d", (*a_PcList)[log].Hp, (*a_PcList)[log].Mp); y++; Pc::gotoxy2(x, y);
						printf("奢問:%-5d          寞橫:%-5d", (*a_PcList)[log].Attack, (*a_PcList)[log].Deffence); y++; Pc::gotoxy2(x, y);
						printf("奢樓:%-2d             溯漣 : %-3d", (*a_PcList)[log].Att_Speed, (*a_PcList)[log].Level); y++; Pc::gotoxy2(x, y);
						printf("��:%-4d    團繪:%-4d    雖棟:%-4d", (*a_PcList)[log].Str, (*a_PcList)[log].Dex, (*a_PcList)[log].INT); y += 3; Pc::gotoxy2(x, y);
					}







					//break;
			}//else if (p_ran != 2)

		}//elseif

	
}


void Battle::PlayerstagePrint(vector<Pc>*a_PcList, vector<PcGuild>*a_PcGdList, vector<Monster> *a_MonList,
	int log, int x, int y, int p_ran, int e_ran)
{
	if (p_ran == 0)
	{
		if (e_ran == 0 ||  e_ran == 3)
		{
			
				Pc::gotoxy2(x, y);
				printf("%s 陛 %s縑啪 等嘐雖:%d虜躑 殮⑼蝗棲棻", (*a_PcList)[log].Name, (*a_MonList)[e_ran].m_Name, (*a_PcList)[log].Attack);
				(*a_MonList)[e_ran].m_Hp -= (*a_PcList)[log].Attack;
				if ((*a_MonList)[e_ran].m_Hp <= 0)
				{
					(*a_MonList)[e_ran].m_Hp = 0;
					if (e_ran == 0)	e_attack = false;
					else if (e_ran == 1) e_attack2 = false;
					else if (e_ran == 2) e_attack3 = false;
				}
				//getchar();
			
			
		}//if (e_ran == 0)
		else if (e_ran == 1)
		{
			Pc::gotoxy2(x, y);
			printf("%s 陛 %s縑啪 等嘐雖:%d虜躑 殮⑼蝗棲棻", (*a_PcList)[log].Name, (*a_MonList)[e_ran].m_Name, (*a_PcList)[log].Attack);
			(*a_MonList)[e_ran].m_Hp -= (*a_PcList)[log].Attack;
			if ((*a_MonList)[e_ran].m_Hp <= 0)
			{
				(*a_MonList)[e_ran].m_Hp = 0;
				if (e_ran == 0)	e_attack = false;
				else if (e_ran == 1) e_attack2 = false;
				else if (e_ran == 2) e_attack3 = false;

			}
		}//	else if (e_ran == 1)
		else if (e_ran == 2)
		{
			Pc::gotoxy2(x, y);
			printf("%s 陛 %s縑啪 等嘐雖:%d虜躑 殮⑼蝗棲棻", (*a_PcList)[log].Name, (*a_MonList)[e_ran].m_Name, (*a_PcList)[log].Attack);
			(*a_MonList)[e_ran].m_Hp -= (*a_PcList)[log].Attack;
			if ((*a_MonList)[e_ran].m_Hp <= 0)
			{
				(*a_MonList)[e_ran].m_Hp = 0;
				if (e_ran == 0)	e_attack = false;
				else if (e_ran == 1) e_attack2 = false;
				else if (e_ran == 2) e_attack3 = false;

			}
		}//else if (e_ran == 2)
		
	}//if (p_ran == 0)
	else if (p_ran == 1)
	{
		if (e_ran == 0 || e_ran == 3)
		{

			Pc::gotoxy2(x, y);
			printf("%s 陛 %s縑啪 等嘐雖:%d虜躑 殮⑼蝗棲棻", (*a_PcGdList)[p_ran - 1].Name, (*a_MonList)[e_ran].m_Name, (*a_PcGdList)[p_ran - 1].Attack);
			(*a_MonList)[e_ran].m_Hp -= (*a_PcGdList)[p_ran - 1].Attack;
			if ((*a_MonList)[e_ran].m_Hp <= 0)
			{
				(*a_MonList)[e_ran].m_Hp = 0;
				if (e_ran == 0)	e_attack = false;
				else if (e_ran == 1) e_attack2 = false;
				else if (e_ran == 2) e_attack3 = false;

			}
			//getchar();


		}//if (e_ran == 0)
		else if (e_ran == 1)
		{
			Pc::gotoxy2(x, y);
			printf("%s 陛 %s縑啪 等嘐雖:%d虜躑 殮⑼蝗棲棻", (*a_PcGdList)[p_ran - 1].Name, (*a_MonList)[e_ran].m_Name, (*a_PcGdList)[p_ran - 1].Attack);
			(*a_MonList)[e_ran].m_Hp -= (*a_PcGdList)[p_ran - 1].Attack;
			if ((*a_MonList)[e_ran].m_Hp <= 0)
			{
				(*a_MonList)[e_ran].m_Hp = 0;
				if (e_ran == 0)	e_attack = false;
				else if (e_ran == 1) e_attack2 = false;
				else if (e_ran == 2) e_attack3 = false;

			}
		}//	else if (e_ran == 1)
		else if (e_ran == 2)
		{
			Pc::gotoxy2(x, y);
			printf("%s 陛 %s縑啪 等嘐雖:%d虜躑 殮⑼蝗棲棻", (*a_PcGdList)[p_ran - 1].Name, (*a_MonList)[e_ran].m_Name, (*a_PcGdList)[p_ran - 1].Attack);
			(*a_MonList)[e_ran].m_Hp -= (*a_PcGdList)[p_ran - 1].Attack;
			if ((*a_MonList)[e_ran].m_Hp <= 0)
			{
				(*a_MonList)[e_ran].m_Hp = 0;
				if (e_ran == 0)	e_attack = false;
				else if (e_ran == 1) e_attack2 = false;
				else if (e_ran == 2) e_attack3 = false;

			}



		}
	}//

	else if (p_ran == 2)
	{
		if (e_ran == 0 || e_ran == 3)
		{

			Pc::gotoxy2(x, y);
			printf("%s 陛 %s縑啪 等嘐雖:%d虜躑 殮⑼蝗棲棻", (*a_PcGdList)[p_ran - 1].Name, (*a_MonList)[e_ran].m_Name, (*a_PcGdList)[p_ran - 1].Attack);
			(*a_MonList)[e_ran].m_Hp -= (*a_PcGdList)[p_ran - 1].Attack;
			if ((*a_MonList)[e_ran].m_Hp <= 0)
			{
				(*a_MonList)[e_ran].m_Hp = 0;
				if (e_ran == 0)	e_attack = false;
				else if (e_ran == 1) e_attack2 = false;
				else if (e_ran == 2) e_attack3 = false;

			}
			//getchar();


		}//if (e_ran == 0)
		else if (e_ran == 1)
		{
			Pc::gotoxy2(x, y);
			printf("%s 陛 %s縑啪 等嘐雖:%d虜躑 殮⑼蝗棲棻", (*a_PcGdList)[p_ran - 1].Name, (*a_MonList)[e_ran].m_Name, (*a_PcGdList)[p_ran - 1].Attack);
			(*a_MonList)[e_ran].m_Hp -= (*a_PcGdList)[p_ran - 1].Attack;
			if ((*a_MonList)[e_ran].m_Hp <= 0)
			{
				(*a_MonList)[e_ran].m_Hp = 0;
				if (e_ran == 0)	e_attack = false;
				else if (e_ran == 1) e_attack2 = false;
				else if (e_ran == 2) e_attack3 = false;

			}
		}//	else if (e_ran == 1)
		else if (e_ran == 2)
		{
			Pc::gotoxy2(x, y);
			printf("%s 陛 %s縑啪 等嘐雖:%d虜躑 殮⑼蝗棲棻", (*a_PcGdList)[p_ran - 1].Name, (*a_MonList)[e_ran].m_Name, (*a_PcGdList)[p_ran - 1].Attack);
			(*a_MonList)[e_ran].m_Hp -= (*a_PcGdList)[p_ran - 1].Attack;
			if ((*a_MonList)[e_ran].m_Hp <= 0)
			{
				(*a_MonList)[e_ran].m_Hp = 0;
				if (e_ran == 0)	e_attack = false;
				else if (e_ran == 1) e_attack2 = false;
				else if (e_ran == 2) e_attack3 = false;

			}



		}
	}

	else if (p_ran == 3)
	{
		if (e_ran == 0 || e_ran == 3)
		{

			Pc::gotoxy2(x, y);
			printf("%s 陛 %s縑啪 等嘐雖:%d虜躑 殮⑼蝗棲棻", (*a_PcGdList)[p_ran - 1].Name, (*a_MonList)[e_ran].m_Name, (*a_PcGdList)[p_ran - 1].Attack);
			(*a_MonList)[e_ran].m_Hp -= (*a_PcGdList)[p_ran - 1].Attack;
			if ((*a_MonList)[e_ran].m_Hp < 0)
			{
				(*a_MonList)[e_ran].m_Hp = 0;
				if (e_ran == 0)	e_attack = false;
				else if (e_ran == 1) e_attack2 = false;
				else if (e_ran == 2) e_attack3 = false;

			}
			//getchar();


		}//if (e_ran == 0)
		else if (e_ran == 1)
		{
			Pc::gotoxy2(x, y);
			printf("%s 陛 %s縑啪 等嘐雖:%d虜躑 殮⑼蝗棲棻", (*a_PcGdList)[p_ran - 1].Name, (*a_MonList)[e_ran].m_Name, (*a_PcGdList)[p_ran - 1].Attack);
			(*a_MonList)[e_ran].m_Hp -= (*a_PcGdList)[p_ran - 1].Attack;
			if ((*a_MonList)[e_ran].m_Hp < 0)
			{
				(*a_MonList)[e_ran].m_Hp = 0;
				if (e_ran == 0)	e_attack = false;
				else if (e_ran == 1) e_attack2 = false;
				else if (e_ran == 2) e_attack3 = false;

			}
		}//	else if (e_ran == 1)
		else if (e_ran == 2)
		{
			Pc::gotoxy2(x, y);
			printf("%s 陛 %s縑啪 等嘐雖:%d虜躑 殮⑼蝗棲棻", (*a_PcGdList)[p_ran - 1].Name, (*a_MonList)[e_ran].m_Name, (*a_PcGdList)[p_ran - 1].Attack);
			(*a_MonList)[e_ran].m_Hp -= (*a_PcGdList)[p_ran - 1].Attack;
			if ((*a_MonList)[e_ran].m_Hp < 0)
			{
				(*a_MonList)[e_ran].m_Hp = 0;
				if (e_ran == 0)	e_attack = false;
				else if (e_ran == 1) e_attack2 = false;
				else if (e_ran == 2) e_attack3 = false;

			}


			
		}
	}

}//void Battle::PlayerstagePrint(vector<Pc>*a_PcList, vector<PcGuild>*a_PcGdList, Monster *a_MonList,
//int log, int x, int y, int p_ran, int e_ran)

	

void Battle::EnemystatgePrint(vector<Pc>*a_PcList, vector<PcGuild>*a_PcGdList, vector<Monster>*a_MonList,
	int log, int x, int y, int p_ran, int e_ran)
{

	if (e_ran == 0 || e_ran == 3)
	{

		if (p_ran == 0)
		{
			y++;
					Pc::gotoxy2(x, y);
					printf("%s 陛 %s縑啪 等嘐雖:%d虜躑 殮⑼蝗棲棻", (*a_MonList)[e_ran].m_Name, (*a_PcList)[log].Name, (*a_MonList)[e_ran].m_Attack);
					(*a_PcList)[log].Hp -= (*a_MonList)[e_ran].m_Attack;
					if ((*a_PcList)[log].Hp <= 0)
					{
						(*a_PcList)[log].Hp = 0;
						p_attack = false;

					}
		}
		else if (p_ran == 1)
		{
			y++;
			Pc::gotoxy2(x, y);
			printf("%s 陛 %s縑啪 等嘐雖:%d虜躑 殮⑼蝗棲棻", (*a_MonList)[e_ran].m_Name, (*a_PcGdList)[p_ran-1].Name, (*a_MonList)[e_ran].m_Attack);
			(*a_PcGdList)[p_ran-1].Hp -= (*a_MonList)[e_ran].m_Attack;
			if ((*a_PcGdList)[p_ran - 1].Hp <= 0)
			{
				(*a_PcGdList)[p_ran - 1].Hp = 0;
				
				if (p_ran  == 1) p2_attack = false;
				else if (p_ran == 2) p3_attack = false;
				else if (p_ran == 3) p4_attack = false;
			}
		}
		else if (p_ran == 2)
		{
			y++;
			Pc::gotoxy2(x, y);
			printf("%s 陛 %s縑啪 等嘐雖:%d虜躑 殮⑼蝗棲棻", (*a_MonList)[e_ran].m_Name, (*a_PcGdList)[p_ran - 1].Name, (*a_MonList)[e_ran].m_Attack);
			(*a_PcGdList)[p_ran - 1].Hp -= (*a_MonList)[e_ran].m_Attack;
			if ((*a_PcGdList)[p_ran - 1].Hp <= 0)
			{
				(*a_PcGdList)[p_ran - 1].Hp = 0;
				if (p_ran == 1) p2_attack = false;
				else if (p_ran == 2) p3_attack = false;
				else if (p_ran == 3) p4_attack = false;

			}
		}
		else if (p_ran == 3)
		{
			y++;
			Pc::gotoxy2(x, y);
			printf("%s 陛 %s縑啪 等嘐雖:%d虜躑 殮⑼蝗棲棻", (*a_MonList)[e_ran].m_Name, (*a_PcGdList)[p_ran - 1].Name, (*a_MonList)[e_ran].m_Attack);
			(*a_PcGdList)[p_ran - 1].Hp -= (*a_MonList)[e_ran].m_Attack;
			if ((*a_PcGdList)[p_ran - 1].Hp <= 0)
			{
				(*a_PcGdList)[p_ran - 1].Hp = 0;
				if (p_ran == 1) p2_attack = false;
				else if (p_ran == 2) p3_attack = false;
				else if (p_ran == 3) p4_attack = false;

			}
		}
	}
	else if (e_ran == 1)
	{
		if (p_ran == 0)
		{
			y++;
			Pc::gotoxy2(x, y);
			printf("%s 陛 %s縑啪 等嘐雖:%d虜躑 殮⑼蝗棲棻", (*a_MonList)[e_ran].m_Name, (*a_PcList)[log].Name, (*a_MonList)[e_ran].m_Attack);
			(*a_PcList)[log].Hp -= (*a_MonList)[e_ran].m_Attack;
			if ((*a_PcList)[log].Hp <= 0)
			{
				(*a_PcList)[log].Hp = 0;
				p_attack = false;

			}
		}
		else if (p_ran == 1)
		{
			y++;
			Pc::gotoxy2(x, y);
			printf("%s 陛 %s縑啪 等嘐雖:%d虜躑 殮⑼蝗棲棻", (*a_MonList)[e_ran].m_Name, (*a_PcGdList)[p_ran - 1].Name, (*a_MonList)[e_ran].m_Attack);
			(*a_PcGdList)[p_ran - 1].Hp -= (*a_MonList)[e_ran].m_Attack;
			if ((*a_PcGdList)[p_ran - 1].Hp <= 0)
			{
				(*a_PcGdList)[p_ran - 1].Hp = 0;
				if (p_ran == 1) p2_attack = false;
				else if (p_ran == 2) p3_attack = false;
				else if (p_ran == 3) p4_attack = false;
			}
		}
		else if (p_ran == 2)
		{
			y++;
			Pc::gotoxy2(x, y);
			printf("%s 陛 %s縑啪 等嘐雖:%d虜躑 殮⑼蝗棲棻", (*a_MonList)[e_ran].m_Name, (*a_PcGdList)[p_ran - 1].Name, (*a_MonList)[e_ran].m_Attack);
			(*a_PcGdList)[p_ran - 1].Hp -= (*a_MonList)[e_ran].m_Attack;
			if ((*a_PcGdList)[p_ran - 1].Hp <= 0)
			{
				(*a_PcGdList)[p_ran - 1].Hp = 0;
				if (p_ran == 1) p2_attack = false;
				else if (p_ran == 2) p3_attack = false;
				else if (p_ran == 3) p4_attack = false;
			}
		}
		else if (p_ran == 3)
		{
			y++;
			Pc::gotoxy2(x, y);
			printf("%s 陛 %s縑啪 等嘐雖:%d虜躑 殮⑼蝗棲棻", (*a_MonList)[e_ran].m_Name, (*a_PcGdList)[p_ran - 1].Name, (*a_MonList)[e_ran].m_Attack);
			(*a_PcGdList)[p_ran - 1].Hp -= (*a_MonList)[e_ran].m_Attack;
			if ((*a_PcGdList)[p_ran - 1].Hp <= 0)
			{
				(*a_PcGdList)[p_ran - 1].Hp = 0;
				if (p_ran == 1) p2_attack = false;
				else if (p_ran == 2) p3_attack = false;
				else if (p_ran == 3) p4_attack = false;
			}
		}
	}

	else if (e_ran == 2)
	{
		if (p_ran == 0)
		{
			y++;
			Pc::gotoxy2(x, y);
			printf("%s 陛 %s縑啪 等嘐雖:%d虜躑 殮⑼蝗棲棻", (*a_MonList)[e_ran].m_Name, (*a_PcList)[log].Name, (*a_MonList)[e_ran].m_Attack);
			(*a_PcList)[log].Hp -= (*a_MonList)[e_ran].m_Attack;
			if ((*a_PcList)[log].Hp <= 0)
			{
				(*a_PcList)[log].Hp = 0;
				p_attack = false;
			}
		}
		else if (p_ran == 1)
		{
			y++;
			Pc::gotoxy2(x, y);
			printf("%s 陛 %s縑啪 等嘐雖:%d虜躑 殮⑼蝗棲棻", (*a_MonList)[e_ran].m_Name, (*a_PcGdList)[p_ran - 1].Name, (*a_MonList)[e_ran].m_Attack);
			(*a_PcGdList)[p_ran - 1].Hp -= (*a_MonList)[e_ran].m_Attack;
			if ((*a_PcGdList)[p_ran - 1].Hp <= 0)
			{
				(*a_PcGdList)[p_ran - 1].Hp = 0;
				if (p_ran == 1) p2_attack = false;
				else if (p_ran == 2) p3_attack = false;
				else if (p_ran == 3) p4_attack = false;
			}
		}
		else if (p_ran == 2)
		{
			y++;
			Pc::gotoxy2(x, y);
			printf("%s 陛 %s縑啪 等嘐雖:%d虜躑 殮⑼蝗棲棻", (*a_MonList)[e_ran].m_Name, (*a_PcGdList)[p_ran - 1].Name, (*a_MonList)[e_ran].m_Attack);
			(*a_PcGdList)[p_ran - 1].Hp -= (*a_MonList)[e_ran].m_Attack;
			if ((*a_PcGdList)[p_ran - 1].Hp <= 0)
			{
				(*a_PcGdList)[p_ran - 1].Hp = 0;
				if (p_ran == 1) p2_attack = false;
				else if (p_ran == 2) p3_attack = false;
				else if (p_ran == 3) p4_attack = false;
			}
		}
		else if (p_ran == 3)
		{
			y++;
			Pc::gotoxy2(x, y);
			printf("%s 陛 %s縑啪 等嘐雖:%d虜躑 殮⑼蝗棲棻", (*a_MonList)[e_ran].m_Name, (*a_PcGdList)[p_ran - 1].Name, (*a_MonList)[e_ran].m_Attack);
			(*a_PcGdList)[p_ran - 1].Hp -= (*a_MonList)[e_ran].m_Attack;
			if ((*a_PcGdList)[p_ran - 1].Hp <= 0)
			{
				(*a_PcGdList)[p_ran - 1].Hp = 0; 
				if (p_ran == 1) p2_attack = false;
				else if (p_ran == 2) p3_attack = false;
				else if (p_ran == 3) p4_attack = false;
			}
		}
		//Sleep(2000);
	}
}//void Battle::EnemystatgePrint(vector<Pc>*a_PcList, vector<PcGuild>*a_PcGdList, vector<Monster>*a_MonList,
//int log, int x, int y, int p_ran, int e_ran)



		



