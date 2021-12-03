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
		printf("┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓");
		y++;
		Pc::gotoxy2(x, y);
		printf("┃                                                                                                                                                            ┃");

		x++;
		Pc::gotoxy2(x, y);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_GREEN); //하늘색
		printf("<Scence>");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //흰색

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN); //노랑색
		printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t   ⓖ");
		printf(" %-8d", (*a_PcList)[log].Gold);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //흰색

		x--;
		y++;
		Pc::gotoxy2(x, y); printf("┃                                                                                                                                                            ┃");y++;
		Pc::gotoxy2(x, y); printf("┃  ┏━━━━━━━━━━━━━━━━━┓                                                                                          ┏━━━━━━━━━━━┓┃");y++;
		Pc::gotoxy2(x, y); printf("┃  ┃                                  ┃                                                                                          ┃                      ┃┃");y++;
		Pc::gotoxy2(x, y); printf("┃  ┃                                  ┃                                                                                          ┃                      ┃┃");y++;
		Pc::gotoxy2(x, y); printf("┃  ┃                                  ┃                                                                                          ┃                      ┃┃");y++;
		Pc::gotoxy2(x, y); printf("┃  ┃                                  ┃                                                                                          ┃                      ┃┃");y++;
		Pc::gotoxy2(x, y); printf("┃  ┃                                  ┃                                                                                          ┃                      ┃┃");y++;
		Pc::gotoxy2(x, y); printf("┃  ┗━━━━━━━━━━━━━━━━━┛                                                                                          ┗━━━━━━━━━━━┛┃");y++;
		Pc::gotoxy2(x, y); printf("┃  ┏━━━━━━━━━━━━━━━━━┓                                                                                          ┏━━━━━━━━━━━┓┃"); y++;
		Pc::gotoxy2(x, y); printf("┃  ┃                                  ┃                                                                                          ┃                      ┃┃"); y++;
		Pc::gotoxy2(x, y); printf("┃  ┃                                  ┃                                                                                          ┃                      ┃┃"); y++;
		Pc::gotoxy2(x, y); printf("┃  ┃                                  ┃                                                                                          ┃                      ┃┃"); y++;
		Pc::gotoxy2(x, y); printf("┃  ┃                                  ┃                                                                                          ┃                      ┃┃"); y++;
		Pc::gotoxy2(x, y); printf("┃  ┃                                  ┃                                                                                          ┃                      ┃┃"); y++;
		Pc::gotoxy2(x, y); printf("┃  ┗━━━━━━━━━━━━━━━━━┛                                                                                          ┗━━━━━━━━━━━┛┃"); y++;
		Pc::gotoxy2(x, y); printf("┃  ┏━━━━━━━━━━━━━━━━━┓                                                                                          ┏━━━━━━━━━━━┓┃"); y++;
		Pc::gotoxy2(x, y); printf("┃  ┃                                  ┃                                                                                          ┃                      ┃┃"); y++;
		Pc::gotoxy2(x, y); printf("┃  ┃                                  ┃                                                                                          ┃                      ┃┃"); y++;
		Pc::gotoxy2(x, y); printf("┃  ┃                                  ┃                                                                                          ┃                      ┃┃"); y++;
		Pc::gotoxy2(x, y); printf("┃  ┃                                  ┃                                                                                          ┃                      ┃┃"); y++;
		Pc::gotoxy2(x, y); printf("┃  ┃                                  ┃                                                                                          ┃                      ┃┃"); y++;
		Pc::gotoxy2(x, y); printf("┃  ┗━━━━━━━━━━━━━━━━━┛                                                                                          ┗━━━━━━━━━━━┛┃"); y++;
		Pc::gotoxy2(x, y); printf("┃  ┏━━━━━━━━━━━━━━━━━┓                                                                                          ┏━━━━━━━━━━━┓┃"); y++;
		Pc::gotoxy2(x, y); printf("┃  ┃                                  ┃                                                                                          ┃                      ┃┃"); y++;
		Pc::gotoxy2(x, y); printf("┃  ┃                                  ┃                                                                                          ┃                      ┃┃"); y++;
		Pc::gotoxy2(x, y); printf("┃  ┃                                  ┃                                                                                          ┃                      ┃┃"); y++;
		Pc::gotoxy2(x, y); printf("┃  ┃                                  ┃                                                                                          ┃                      ┃┃"); y++;
		Pc::gotoxy2(x, y); printf("┃  ┃                                  ┃                                                                                          ┃                      ┃┃"); y++;
		Pc::gotoxy2(x, y); printf("┃  ┗━━━━━━━━━━━━━━━━━┛                                                                                          ┗━━━━━━━━━━━┛┃"); y++;
		Pc::gotoxy2(x, y); printf("┃                                                                                                                                                            ┃"); y++;
		Pc::gotoxy2(x, y); printf("┃                                                                                                                                                            ┃"); y++;
		Pc::gotoxy2(x, y); printf("┃                                                                                                                                                            ┃");
		Pc::gotoxy2(x, y); printf("┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛");y++;
		Pc::gotoxy2(x, y); printf("┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓");x++;
		Pc::gotoxy2(x, y);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_INTENSITY | FOREGROUND_RED); //하늘색
		printf("<SystemPrint>");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //흰색

		x += 79;
		Pc::gotoxy2(x, y);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN); //하늘색
		printf("<Menu>");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //흰색
		x = 0;
		y++;
		Pc::gotoxy2(x, y);
		printf("┃                                                                            ┃┃                                                                            ┃");
		y++;
		Pc::gotoxy2(x, y);
		printf("┃                                                                            ┃┃1.오우거의 방                                                               ┃");
		y++;
		Pc::gotoxy2(x, y);
		printf("┃                                                                            ┃┃2.어둠의장소                                                                ┃");
		y++;
		Pc::gotoxy2(x, y);
		printf("┃                                                                            ┃┃3.드래곤의방                                                                ┃");
		y++;
		Pc::gotoxy2(x, y);
		printf("┃                                                                            ┃┃4.나가기                                                                    ┃");
		y++;
		Pc::gotoxy2(x, y);
		printf("┃                                                                            ┃┃                                                                            ┃");
		y++;
		Pc::gotoxy2(x, y);
		printf("┃                                                                            ┃┃                                                                            ┃");
		y++;
		Pc::gotoxy2(x, y);
		printf("┃                                                                            ┃┃                                                                            ┃");
		y++;
		Pc::gotoxy2(x, y);
		printf("┃                                                                            ┃┃                                                                            ┃");
		y++;
		Pc::gotoxy2(x, y);
		printf("┃                                                                            ┃┃                                                                            ┃");
		y++;
		Pc::gotoxy2(x, y);
		printf("┃                                                                            ┃┃                                                                            ┃");
		y++;
		Pc::gotoxy2(x, y);
		printf("┃                                                                            ┃┃ 번호를 입력해주세요.                                                       ┃");
		y++;
		Pc::gotoxy2(x, y);
		printf("┃                                                                            ┃┃                                                                            ┃");
		y++;
		Pc::gotoxy2(x, y);
		printf("┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛");

		
		

		

	
		//방들어가기

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
		if (a_Sel == 1) //오우거방
		{
			
			
		


			//오우거방들어온곳
			while (true)
			{
				MapPrint();
				x = 6;
				y = 4;

				// 플레이어 출력 부분

				Pc::gotoxy2(x, y);
				if ((*a_PcList)[log].Hp == 0)
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						FOREGROUND_INTENSITY | FOREGROUND_RED); //빨강색
					printf("이름:%-14s 직업:%-9s", (*a_PcList)[log].Name, (*a_PcList)[log].Char_Type); y++; Pc::gotoxy2(x, y);
					printf("체력:%-8d       마나 : %-7d", (*a_PcList)[log].Hp, (*a_PcList)[log].Mp); y++; Pc::gotoxy2(x, y);
					printf("공격:%-5d          방어:%-5d", (*a_PcList)[log].Attack, (*a_PcList)[log].Deffence); y++; Pc::gotoxy2(x, y);
					printf("공속:%-2d             레벨 : %-3d", (*a_PcList)[log].Att_Speed, (*a_PcList)[log].Level); y++; Pc::gotoxy2(x, y);
					printf("힘:%-4d    민첩:%-4d    지능:%-4d", (*a_PcList)[log].Str, (*a_PcList)[log].Dex, (*a_PcList)[log].INT); y += 3; Pc::gotoxy2(x, y);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //흰색
				}
				else if ((*a_PcList)[log].Hp > 0)
				{
					printf("이름:%-14s 직업:%-9s", (*a_PcList)[log].Name, (*a_PcList)[log].Char_Type); y++; Pc::gotoxy2(x, y);
					printf("체력:%-8d       마나 : %-7d", (*a_PcList)[log].Hp, (*a_PcList)[log].Mp); y++; Pc::gotoxy2(x, y);
					printf("공격:%-5d          방어:%-5d", (*a_PcList)[log].Attack, (*a_PcList)[log].Deffence); y++; Pc::gotoxy2(x, y);
					printf("공속:%-2d             레벨 : %-3d", (*a_PcList)[log].Att_Speed, (*a_PcList)[log].Level); y++; Pc::gotoxy2(x, y);
					printf("힘:%-4d    민첩:%-4d    지능:%-4d", (*a_PcList)[log].Str, (*a_PcList)[log].Dex, (*a_PcList)[log].INT); y += 3; Pc::gotoxy2(x, y);
				}

				for (int i = 0; i < 3; i++)
				{
					if ((*a_PcGdList)[i].Hp == 0)
					{
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
							FOREGROUND_INTENSITY | FOREGROUND_RED); //빨강색

					}
					printf("이름:%-14s 직업:%-9s", (*a_PcGdList)[i].Name, (*a_PcGdList)[i].Char_Type); y++; Pc::gotoxy2(x, y);
					printf("체력:%-8d       마나 : %-7d", (*a_PcGdList)[i].Hp, (*a_PcGdList)[i].Mp); y++; Pc::gotoxy2(x, y);
					printf("공격:%-5d          방어:%-5d", (*a_PcGdList)[i].Attack, (*a_PcGdList)[i].Deffence); y++; Pc::gotoxy2(x, y);
					printf("공속:%-2d             레벨 : %-3d", (*a_PcGdList)[i].Att_Speed, (*a_PcGdList)[i].Level); y++; Pc::gotoxy2(x, y);
					printf("힘:%-4d    민첩:%-4d    지능:%-4d", (*a_PcGdList)[i].Str, (*a_PcGdList)[i].Dex, (*a_PcGdList)[i].INT); y += 3; Pc::gotoxy2(x, y);

					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //흰색
				}//for (int i = 0; i < 3; i++)

				if ((*a_PcList)[log].Hp <= 0 && (*a_PcGdList)[0].Hp <= 0 && (*a_PcGdList)[1].Hp <= 0 && (*a_PcGdList)[2].Hp <= 0)
				{
					x = 2;
					y = 36;
					Pc::gotoxy2(x, y);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						FOREGROUND_INTENSITY | FOREGROUND_RED); //빨강색
					printf("플레이어가 모두 사망하였습니다");

					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //흰색
					getchar();
					break;
				}

				// 몬스터 출력 부분
				//고블린
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
							FOREGROUND_INTENSITY | FOREGROUND_RED); //빨강색
						printf("적들이 모두 사망하였습니다");
						
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
							FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //흰색
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
						printf("%s가 레벨이 %d 만큼상승하였습니다",(*a_PcList)[log].Name, (*a_PcList)[log].Level);
						y++;
						Pc::gotoxy2(x, y);
						for (int i = 0; i < 3; i++)
						{
							printf("%s가 레벨이 %d 만큼상승하였습니다", (*a_PcGdList)[log].Name, (*a_PcGdList)[log].Level);
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
						printf("이름:%-15s  ", (*a_MonList)[i].m_Name); y++; Pc::gotoxy2(x, y);
						printf("체력 : %-10d ", (*a_MonList)[i].m_Hp); y++; Pc::gotoxy2(x, y);
						printf("공격 : %-6d  ", (*a_MonList)[i].m_Attack); y++; Pc::gotoxy2(x, y);
						printf("방어 : %-4d    ", (*a_MonList)[i].m_Defence); y++; Pc::gotoxy2(x, y);
						printf("레벨 : %-3d     ", (*a_MonList)[i].m_Level); y += 3; Pc::gotoxy2(x, y);

						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
							FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //흰색
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

						//자동전투 
					} //dunsel 


				}//duncount == 0 


				if (DunCount == 1) //오우거
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
						FOREGROUND_INTENSITY | FOREGROUND_RED); //빨강색
					printf("오우거가 사망하였습니다");
					
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //흰색
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
					printf("이름:%-15s  ", (*a_MonList)[i].m_Name); y++; Pc::gotoxy2(x, y);
					printf("체력 : %-10d ", (*a_MonList)[i].m_Hp); y++; Pc::gotoxy2(x, y);
					printf("공격 : %-6d  ", (*a_MonList)[i].m_Attack); y++; Pc::gotoxy2(x, y);
					printf("방어 : %-4d    ", (*a_MonList)[i].m_Defence); y++; Pc::gotoxy2(x, y);
					printf("레벨 : %-3d     ", (*a_MonList)[i].m_Level); y += 3; Pc::gotoxy2(x, y);

					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //흰색
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

					//자동전투 
				} //dunsel 
				
				} //duncount == 1 오우거

			
				
			}//while (true)
			
		}//if (a_Sel == 1) //오우거
		


else if (a_Sel == 2) //암흑
		{

			

			//while (true)
			//{
			//	MapPrint();
			//	x = 6;
			//	y = 4;




			//	// 플레이어 출력 부분

			//	Pc::gotoxy2(x, y);
			//	if ((*a_PcList)[log].Hp == 0)
			//	{
			//		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			//			FOREGROUND_INTENSITY | FOREGROUND_RED); //빨강색
			//		printf("이름:%-14s 직업:%-9s", (*a_PcList)[log].Name, (*a_PcList)[log].Char_Type); y++; Pc::gotoxy2(x, y);
			//		printf("체력:%-8d       마나 : %-7d", (*a_PcList)[log].Hp, (*a_PcList)[log].Mp); y++; Pc::gotoxy2(x, y);
			//		printf("공격:%-5d          방어:%-5d", (*a_PcList)[log].Attack, (*a_PcList)[log].Deffence); y++; Pc::gotoxy2(x, y);
			//		printf("공속:%-2d             레벨 : %-3d", (*a_PcList)[log].Att_Speed, (*a_PcList)[log].Level); y++; Pc::gotoxy2(x, y);
			//		printf("힘:%-4d    민첩:%-4d    지능:%-4d", (*a_PcList)[log].Str, (*a_PcList)[log].Dex, (*a_PcList)[log].INT); y += 3; Pc::gotoxy2(x, y);
			//		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			//			FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //흰색
			//	}
			//	else if ((*a_PcList)[log].Hp > 0)
			//	{
			//		printf("이름:%-14s 직업:%-9s", (*a_PcList)[log].Name, (*a_PcList)[log].Char_Type); y++; Pc::gotoxy2(x, y);
			//		printf("체력:%-8d       마나 : %-7d", (*a_PcList)[log].Hp, (*a_PcList)[log].Mp); y++; Pc::gotoxy2(x, y);
			//		printf("공격:%-5d          방어:%-5d", (*a_PcList)[log].Attack, (*a_PcList)[log].Deffence); y++; Pc::gotoxy2(x, y);
			//		printf("공속:%-2d             레벨 : %-3d", (*a_PcList)[log].Att_Speed, (*a_PcList)[log].Level); y++; Pc::gotoxy2(x, y);
			//		printf("힘:%-4d    민첩:%-4d    지능:%-4d", (*a_PcList)[log].Str, (*a_PcList)[log].Dex, (*a_PcList)[log].INT); y += 3; Pc::gotoxy2(x, y);
			//	}

			//	for (int i = 0; i < 3; i++)
			//	{
			//		if ((*a_PcGdList)[i].Hp == 0)
			//		{
			//			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			//				FOREGROUND_INTENSITY | FOREGROUND_RED); //빨강색

			//		}
			//		printf("이름:%-14s 직업:%-9s", (*a_PcGdList)[i].Name, (*a_PcGdList)[i].Char_Type); y++; Pc::gotoxy2(x, y);
			//		printf("체력:%-8d       마나 : %-7d", (*a_PcGdList)[i].Hp, (*a_PcGdList)[i].Mp); y++; Pc::gotoxy2(x, y);
			//		printf("공격:%-5d          방어:%-5d", (*a_PcGdList)[i].Attack, (*a_PcGdList)[i].Deffence); y++; Pc::gotoxy2(x, y);
			//		printf("공속:%-2d             레벨 : %-3d", (*a_PcGdList)[i].Att_Speed, (*a_PcGdList)[i].Level); y++; Pc::gotoxy2(x, y);
			//		printf("힘:%-4d    민첩:%-4d    지능:%-4d", (*a_PcGdList)[i].Str, (*a_PcGdList)[i].Dex, (*a_PcGdList)[i].INT); y += 3; Pc::gotoxy2(x, y);

			//		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			//			FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //흰색
			//	}//for (int i = 0; i < 3; i++)


			//	if ((*a_PcList)[log].Hp <= 0 && (*a_PcGdList)[0].Hp <= 0 && (*a_PcGdList)[1].Hp <= 0 && (*a_PcGdList)[2].Hp <= 0)
			//	{
			//		x = 2;
			//		y = 36;
			//		Pc::gotoxy2(x, y);
			//		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			//			FOREGROUND_INTENSITY | FOREGROUND_RED); //빨강색
			//		printf("플레이어가 모두 사망하였습니다");

			//		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			//			FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //흰색
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
			//			FOREGROUND_INTENSITY | FOREGROUND_RED); //빨강색
			//		printf("적들이 모두 사망하였습니다");

			//		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			//			FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //흰색
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
			//		printf("이름:%-15s  ", (*a_MonList)[i].m_Name); y++; Pc::gotoxy2(x, y);
			//		printf("체력 : %-10d ", (*a_MonList)[i].m_Hp); y++; Pc::gotoxy2(x, y);
			//		printf("공격 : %-6d  ", (*a_MonList)[i].m_Attack); y++; Pc::gotoxy2(x, y);
			//		printf("방어 : %-4d    ", (*a_MonList)[i].m_Defence); y++; Pc::gotoxy2(x, y);
			//		printf("레벨 : %-3d     ", (*a_MonList)[i].m_Level); y += 3; Pc::gotoxy2(x, y);

			//		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			//			FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //흰색
			//	}



			//	// 몬스터 출력 부분
			//	int a_Dunsel = 0;
			//	Pc::gotoxy2(x, y);
			//	scanf_s("%d", &a_Dunsel);
			//	if (a_Dunsel < 1 || a_Dunsel > 1)
			//	{
			//		if (a_Dunsel == 2) break;
			//	}
			//	if (a_Dunsel == 1)
			//	{
			//		//자동전투 
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




		else if (a_Sel == 3) //드래곤
		{
		vector<Monster> Node_Mon6;
		for (int i = 0; i < 1; i++)
			Node_Mon6.push_back((*a_MonList)[5]);


			while (true)
			{
				MapPrint();
				x = 6;
				y = 4;




				// 플레이어 출력 부분

				Pc::gotoxy2(x, y);
				if ((*a_PcList)[log].Hp == 0)
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						FOREGROUND_INTENSITY | FOREGROUND_RED); //빨강색
					printf("이름:%-14s 직업:%-9s", (*a_PcList)[log].Name, (*a_PcList)[log].Char_Type); y++; Pc::gotoxy2(x, y);
					printf("체력:%-8d       마나 : %-7d", (*a_PcList)[log].Hp, (*a_PcList)[log].Mp); y++; Pc::gotoxy2(x, y);
					printf("공격:%-5d          방어:%-5d", (*a_PcList)[log].Attack, (*a_PcList)[log].Deffence); y++; Pc::gotoxy2(x, y);
					printf("공속:%-2d             레벨 : %-3d", (*a_PcList)[log].Att_Speed, (*a_PcList)[log].Level); y++; Pc::gotoxy2(x, y);
					printf("힘:%-4d    민첩:%-4d    지능:%-4d", (*a_PcList)[log].Str, (*a_PcList)[log].Dex, (*a_PcList)[log].INT); y += 3; Pc::gotoxy2(x, y);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //흰색
				}
				else if ((*a_PcList)[log].Hp > 0)
				{
					printf("이름:%-14s 직업:%-9s", (*a_PcList)[log].Name, (*a_PcList)[log].Char_Type); y++; Pc::gotoxy2(x, y);
					printf("체력:%-8d       마나 : %-7d", (*a_PcList)[log].Hp, (*a_PcList)[log].Mp); y++; Pc::gotoxy2(x, y);
					printf("공격:%-5d          방어:%-5d", (*a_PcList)[log].Attack, (*a_PcList)[log].Deffence); y++; Pc::gotoxy2(x, y);
					printf("공속:%-2d             레벨 : %-3d", (*a_PcList)[log].Att_Speed, (*a_PcList)[log].Level); y++; Pc::gotoxy2(x, y);
					printf("힘:%-4d    민첩:%-4d    지능:%-4d", (*a_PcList)[log].Str, (*a_PcList)[log].Dex, (*a_PcList)[log].INT); y += 3; Pc::gotoxy2(x, y);
				}

				for (int i = 0; i < 3; i++)
				{
					if ((*a_PcGdList)[i].Hp == 0)
					{
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
							FOREGROUND_INTENSITY | FOREGROUND_RED); //빨강색

					}
					printf("이름:%-14s 직업:%-9s", (*a_PcGdList)[i].Name, (*a_PcGdList)[i].Char_Type); y++; Pc::gotoxy2(x, y);
					printf("체력:%-8d       마나 : %-7d", (*a_PcGdList)[i].Hp, (*a_PcGdList)[i].Mp); y++; Pc::gotoxy2(x, y);
					printf("공격:%-5d          방어:%-5d", (*a_PcGdList)[i].Attack, (*a_PcGdList)[i].Deffence); y++; Pc::gotoxy2(x, y);
					printf("공속:%-2d             레벨 : %-3d", (*a_PcGdList)[i].Att_Speed, (*a_PcGdList)[i].Level); y++; Pc::gotoxy2(x, y);
					printf("힘:%-4d    민첩:%-4d    지능:%-4d", (*a_PcGdList)[i].Str, (*a_PcGdList)[i].Dex, (*a_PcGdList)[i].INT); y += 3; Pc::gotoxy2(x, y);

					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //흰색
				}//for (int i = 0; i < 3; i++)

				// 몬스터 출력 부분
				int a_Dunsel = 0;
				Pc::gotoxy2(x, y);
				scanf_s("%d", &a_Dunsel);
				if (a_Dunsel < 1 || a_Dunsel > 1)
				{
					if (a_Dunsel == 2) break;
				}
				if (a_Dunsel == 1)
				{
					//자동전투 
				}

			}
		}
		
		x = 6;
		y = 4;
		



		// 플레이어 출력 부분
	
		Pc::gotoxy2(x, y);
		if ((*a_PcList)[log].Hp == 0)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
				FOREGROUND_INTENSITY | FOREGROUND_RED ); //빨강색
			printf("이름:%-14s 직업:%-9s", (*a_PcList)[log].Name, (*a_PcList)[log].Char_Type); y++; Pc::gotoxy2(x, y);
			printf("체력:%-8d       마나 : %-7d", (*a_PcList)[log].Hp, (*a_PcList)[log].Mp); y++; Pc::gotoxy2(x, y);
			printf("공격:%-5d          방어:%-5d", (*a_PcList)[log].Attack, (*a_PcList)[log].Deffence); y++; Pc::gotoxy2(x, y);
			printf("공속:%-2d             레벨 : %-3d", (*a_PcList)[log].Att_Speed, (*a_PcList)[log].Level); y++; Pc::gotoxy2(x, y);
			printf("힘:%-4d    민첩:%-4d    지능:%-4d", (*a_PcList)[log].Str, (*a_PcList)[log].Dex, (*a_PcList)[log].INT); y += 3; Pc::gotoxy2(x, y);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
				FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //흰색
		}
		else if ((*a_PcList)[log].Hp > 0)
		{
			printf("이름:%-14s 직업:%-9s", (*a_PcList)[log].Name, (*a_PcList)[log].Char_Type); y++; Pc::gotoxy2(x, y);
			printf("체력:%-8d       마나 : %-7d", (*a_PcList)[log].Hp, (*a_PcList)[log].Mp); y++; Pc::gotoxy2(x, y);
			printf("공격:%-5d          방어:%-5d", (*a_PcList)[log].Attack, (*a_PcList)[log].Deffence); y++; Pc::gotoxy2(x, y);
			printf("공속:%-2d             레벨 : %-3d", (*a_PcList)[log].Att_Speed, (*a_PcList)[log].Level); y++; Pc::gotoxy2(x, y);
			printf("힘:%-4d    민첩:%-4d    지능:%-4d", (*a_PcList)[log].Str, (*a_PcList)[log].Dex, (*a_PcList)[log].INT); y += 3; Pc::gotoxy2(x, y);
		}

		for (int i = 0; i < 3; i++)
		{
			if ((*a_PcGdList)[i].Hp == 0)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
					FOREGROUND_INTENSITY | FOREGROUND_RED); //빨강색
				
			}
			printf("이름:%-14s 직업:%-9s", (*a_PcGdList)[i].Name, (*a_PcGdList)[i].Char_Type); y++; Pc::gotoxy2(x, y);
			printf("체력:%-8d       마나 : %-7d", (*a_PcGdList)[i].Hp, (*a_PcGdList)[i].Mp); y++; Pc::gotoxy2(x, y);
			printf("공격:%-5d          방어:%-5d", (*a_PcGdList)[i].Attack, (*a_PcGdList)[i].Deffence); y++; Pc::gotoxy2(x, y);
			printf("공속:%-2d             레벨 : %-3d", (*a_PcGdList)[i].Att_Speed, (*a_PcGdList)[i].Level); y++; Pc::gotoxy2(x, y);
			printf("힘:%-4d    민첩:%-4d    지능:%-4d", (*a_PcGdList)[i].Str, (*a_PcGdList)[i].Dex, (*a_PcGdList)[i].INT); y += 3; Pc::gotoxy2(x, y);

			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
				FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //흰색
		}//for (int i = 0; i < 3; i++)

		// 몬스터 출력 부분


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

	Pc::gotoxy2(x, y); printf("┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓"); x++;
	Pc::gotoxy2(x, y);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
		FOREGROUND_INTENSITY | FOREGROUND_RED); //하늘색
	printf("<SystemPrint>");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
		FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //흰색

	x += 79;
	Pc::gotoxy2(x, y);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
		FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN); //하늘색
	printf("<Menu>");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
		FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //흰색
	x = 0;
	y++;
	Pc::gotoxy2(x, y);
	printf("┃                                                                            ┃┃                                                                            ┃");
	y++;
	Pc::gotoxy2(x, y);
	printf("┃                                                                            ┃┃1.자동전투                                                                  ┃");
	y++;
	Pc::gotoxy2(x, y);
	printf("┃                                                                            ┃┃2.나가기                                                                    ┃");
	y++;
	Pc::gotoxy2(x, y);
	printf("┃                                                                            ┃┃                                                                            ┃");
	y++;
	Pc::gotoxy2(x, y);
	printf("┃                                                                            ┃┃                                                                            ┃");
	y++;
	Pc::gotoxy2(x, y);
	printf("┃                                                                            ┃┃                                                                            ┃");
	y++;
	Pc::gotoxy2(x, y);
	printf("┃                                                                            ┃┃                                                                            ┃");
	y++;
	Pc::gotoxy2(x, y);
	printf("┃                                                                            ┃┃                                                                            ┃");
	y++;
	Pc::gotoxy2(x, y);
	printf("┃                                                                            ┃┃                                                                            ┃");
	y++;
	Pc::gotoxy2(x, y);
	printf("┃                                                                            ┃┃                                                                            ┃");
	y++;
	Pc::gotoxy2(x, y);
	printf("┃                                                                            ┃┃                                                                            ┃");
	y++;
	Pc::gotoxy2(x, y);
	printf("┃                                                                            ┃┃ 번호를 입력해주세요.                                                       ┃");
	y++;
	Pc::gotoxy2(x, y);
	printf("┃                                                                            ┃┃                                                                            ┃");
	y++;
	Pc::gotoxy2(x, y);
	printf("┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛");



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



				//공격 그래픽
				x = 42;
				y = 6;
				Pc::gotoxy2(x, y);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
					12 | 12 << 4);  //빨강색
				for (int i = 0; i < 44; i++)
				{
					printf("■");
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
							FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //흰색
					}
					printf("이름:%-15s  ", (*a_MonList)[e_ran].m_Name); y++; Pc::gotoxy2(x, y);
					printf("체력 : %-10d ", (*a_MonList)[e_ran].m_Hp); y++; Pc::gotoxy2(x, y);
					printf("공격 : %-6d  ", (*a_MonList)[e_ran].m_Attack); y++; Pc::gotoxy2(x, y);
					printf("방어 : %-4d    ", (*a_MonList)[e_ran].m_Defence); y++; Pc::gotoxy2(x, y);
					printf("레벨 : %-3d     ", (*a_MonList)[e_ran].m_Level); y += 3; Pc::gotoxy2(x, y);
					Sleep(100);
					is_Color = !is_Color;
				}


				//초기화부분

				x = 42;
				y = 6;
				Pc::gotoxy2(x, y);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
					7);  //흰색
				Pc::gotoxy2(x, y);
				for (int i = 0; i < 44; i++)
				{
					printf("  ");
					Sleep(13);
				}

				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
					FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //흰색
				x = 134;
				y = 4;
				Pc::gotoxy2(x, y);
				printf("이름:%-15s  ", (*a_MonList)[e_ran].m_Name); y++; Pc::gotoxy2(x, y);
				printf("체력 : %-10d ", (*a_MonList)[e_ran].m_Hp); y++; Pc::gotoxy2(x, y);
				printf("공격 : %-6d  ", (*a_MonList)[e_ran].m_Attack); y++; Pc::gotoxy2(x, y);
				printf("방어 : %-4d    ", (*a_MonList)[e_ran].m_Defence); y++; Pc::gotoxy2(x, y);
				printf("레벨 : %-3d     ", (*a_MonList)[e_ran].m_Level); y += 3; Pc::gotoxy2(x, y);

				Sleep(500);
				//break;
			}
			else if (e_ran != 0)
			{

				//if ((*a_MonList)[e_ran].m_Hp == 0) continue;

					//공격 그래픽
					x = 42;
					y = 6;
					Pc::gotoxy2(x, y);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						12 | 12 << 4);  //흰색
					for (int i = 0; i < 44; i++)
					{
						printf("■");
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
						printf("■");
						Sleep(13);
						y++;
						Pc::gotoxy2(x, y);
					}


					Pc::gotoxy2(x, y);
					for (int i = 0; i < 23; i++)
					{
						printf("■");
						Sleep(13);
					}

					//반전 
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
								FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //흰색
						}
						printf("이름:%-15s  ", (*a_MonList)[e_ran].m_Name); y++; Pc::gotoxy2(x, y);
						printf("체력 : %-10d ", (*a_MonList)[e_ran].m_Hp); y++; Pc::gotoxy2(x, y);
						printf("공격 : %-6d  ", (*a_MonList)[e_ran].m_Attack); y++; Pc::gotoxy2(x, y);
						printf("방어 : %-4d    ", (*a_MonList)[e_ran].m_Defence); y++; Pc::gotoxy2(x, y);
						printf("레벨 : %-3d     ", (*a_MonList)[e_ran].m_Level); y += 3; Pc::gotoxy2(x, y);
						Sleep(100);
						is_Color = !is_Color;
					}




					//초기화부분
					x = 42;
					y = 6;

					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						7);  //흰색
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
						FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //흰색
					x = 134;
					y = reverse;
					Pc::gotoxy2(x, y);
					printf("이름:%-15s  ", (*a_MonList)[e_ran].m_Name); y++; Pc::gotoxy2(x, y);
					printf("체력 : %-10d ", (*a_MonList)[e_ran].m_Hp); y++; Pc::gotoxy2(x, y);
					printf("공격 : %-6d  ", (*a_MonList)[e_ran].m_Attack); y++; Pc::gotoxy2(x, y);
					printf("방어 : %-4d    ", (*a_MonList)[e_ran].m_Defence); y++; Pc::gotoxy2(x, y);
					printf("레벨 : %-3d     ", (*a_MonList)[e_ran].m_Level); y += 3; Pc::gotoxy2(x, y);

					Sleep(500);
					//break;
			}//eran!= 0

		}//if (p_ran == 0)
		else if (p_ran == 1 && p2_attack == true)
		{
			if (e_ran == 1 )
			{

				//if((*a_MonList)[e_ran].m_Hp == 0) continue;


					//공격 그래픽
					x = 42;
					y = 13;
					Pc::gotoxy2(x, y);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						12 | 12 << 4);  //빨강색
					for (int i = 0; i < 44; i++)
					{
						printf("■");
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
								FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //흰색
						}
						printf("이름:%-15s  ", (*a_MonList)[e_ran].m_Name); y++; Pc::gotoxy2(x, y);
						printf("체력 : %-10d ", (*a_MonList)[e_ran].m_Hp); y++; Pc::gotoxy2(x, y);
						printf("공격 : %-6d  ", (*a_MonList)[e_ran].m_Attack); y++; Pc::gotoxy2(x, y);
						printf("방어 : %-4d    ", (*a_MonList)[e_ran].m_Defence); y++; Pc::gotoxy2(x, y);
						printf("레벨 : %-3d     ", (*a_MonList)[e_ran].m_Level); y += 3; Pc::gotoxy2(x, y);
						Sleep(100);
						is_Color = !is_Color;
					}


					//초기화부분

					x = 42;
					y = 13;
					Pc::gotoxy2(x, y);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						7);  //흰색
					Pc::gotoxy2(x, y);
					for (int i = 0; i < 44; i++)
					{
						printf("  ");
						Sleep(13);
					}

					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //흰색
					x = 134;
					y = 11;
					Pc::gotoxy2(x, y);
					printf("이름:%-15s  ", (*a_MonList)[e_ran].m_Name); y++; Pc::gotoxy2(x, y);
					printf("체력 : %-10d ", (*a_MonList)[e_ran].m_Hp); y++; Pc::gotoxy2(x, y);
					printf("공격 : %-6d  ", (*a_MonList)[e_ran].m_Attack); y++; Pc::gotoxy2(x, y);
					printf("방어 : %-4d    ", (*a_MonList)[e_ran].m_Defence); y++; Pc::gotoxy2(x, y);
					printf("레벨 : %-3d     ", (*a_MonList)[e_ran].m_Level); y += 3; Pc::gotoxy2(x, y);

					Sleep(500);
					//break;
			}
			else if (e_ran != 1 || e_ran == 3)
			{
				//if ((*a_MonList)[e_ran].m_Hp == 0) continue;


					//공격 그래픽
					x = 42;
					y = 13;
					Pc::gotoxy2(x, y);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						12 | 12 << 4);  //흰색
					for (int i = 0; i < 44; i++)
					{
						printf("■");
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
						printf("■");
						Sleep(13);
						if (e_ran == 0)	y--;
						if (e_ran == 3)	y--;
						if (e_ran == 2) y++;

						Pc::gotoxy2(x, y);
					}


					Pc::gotoxy2(x, y);
					for (int i = 0; i < 23; i++)
					{
						printf("■");
						Sleep(13);
					}

					//반전 

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
								FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //흰색
						}
						printf("이름:%-15s  ", (*a_MonList)[e_ran].m_Name); y++; Pc::gotoxy2(x, y);
						printf("체력 : %-10d ", (*a_MonList)[e_ran].m_Hp); y++; Pc::gotoxy2(x, y);
						printf("공격 : %-6d  ", (*a_MonList)[e_ran].m_Attack); y++; Pc::gotoxy2(x, y);
						printf("방어 : %-4d    ", (*a_MonList)[e_ran].m_Defence); y++; Pc::gotoxy2(x, y);
						printf("레벨 : %-3d     ", (*a_MonList)[e_ran].m_Level); y += 3; Pc::gotoxy2(x, y);
						Sleep(100);
						is_Color = !is_Color;
					}




					//초기화부분
					x = 42;
					y = 13;

					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						7);  //흰색
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
						FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //흰색
					x = 134;
					y = reverse;
					Pc::gotoxy2(x, y);
					printf("이름:%-15s  ", (*a_MonList)[e_ran].m_Name); y++; Pc::gotoxy2(x, y);
					printf("체력 : %-10d ", (*a_MonList)[e_ran].m_Hp); y++; Pc::gotoxy2(x, y);
					printf("공격 : %-6d  ", (*a_MonList)[e_ran].m_Attack); y++; Pc::gotoxy2(x, y);
					printf("방어 : %-4d    ", (*a_MonList)[e_ran].m_Defence); y++; Pc::gotoxy2(x, y);
					printf("레벨 : %-3d     ", (*a_MonList)[e_ran].m_Level); y += 3; Pc::gotoxy2(x, y);

					Sleep(500);


					//break;
			}//if (e_ran == 0)
		}//else if (p_ran == 1)
		else if (p_ran == 2 && p3_attack == true)
		{
			if (e_ran == 2)
			{
				//if ((*a_MonList)[e_ran].m_Hp == 0) continue;


					//공격 그래픽
					x = 42;
					y = 20;
					Pc::gotoxy2(x, y);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						12 | 12 << 4);  //빨강색
					for (int i = 0; i < 44; i++)
					{
						printf("■");
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
								FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //흰색
						}
						printf("이름:%-15s  ", (*a_MonList)[e_ran].m_Name); y++; Pc::gotoxy2(x, y);
						printf("체력 : %-10d ", (*a_MonList)[e_ran].m_Hp); y++; Pc::gotoxy2(x, y);
						printf("공격 : %-6d  ", (*a_MonList)[e_ran].m_Attack); y++; Pc::gotoxy2(x, y);
						printf("방어 : %-4d    ", (*a_MonList)[e_ran].m_Defence); y++; Pc::gotoxy2(x, y);
						printf("레벨 : %-3d     ", (*a_MonList)[e_ran].m_Level); y += 3; Pc::gotoxy2(x, y);
						Sleep(100);
						is_Color = !is_Color;
					}


					//초기화부분

					x = 42;
					y = 20;
					Pc::gotoxy2(x, y);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						7);  //흰색
					Pc::gotoxy2(x, y);
					for (int i = 0; i < 44; i++)
					{
						printf("  ");
						Sleep(13);
					}

					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //흰색
					x = 134;
					y = 18;
					Pc::gotoxy2(x, y);
					printf("이름:%-15s  ", (*a_MonList)[e_ran].m_Name); y++; Pc::gotoxy2(x, y);
					printf("체력 : %-10d ", (*a_MonList)[e_ran].m_Hp); y++; Pc::gotoxy2(x, y);
					printf("공격 : %-6d  ", (*a_MonList)[e_ran].m_Attack); y++; Pc::gotoxy2(x, y);
					printf("방어 : %-4d    ", (*a_MonList)[e_ran].m_Defence); y++; Pc::gotoxy2(x, y);
					printf("레벨 : %-3d     ", (*a_MonList)[e_ran].m_Level); y += 3; Pc::gotoxy2(x, y);

					Sleep(500);
				//	break;
			}
			else if (e_ran != 2)
			{

				//if ((*a_MonList)[e_ran].m_Hp == 0) continue;

					//공격 그래픽
					x = 42;
					y = 20;
					Pc::gotoxy2(x, y);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						12 | 12 << 4);  //흰색
					for (int i = 0; i < 44; i++)
					{
						printf("■");
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
						printf("■");
						Sleep(13);
						y--;

						Pc::gotoxy2(x, y);
					}


					Pc::gotoxy2(x, y);
					for (int i = 0; i < 23; i++)
					{
						printf("■");
						Sleep(13);
					}

					//반전 
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
								FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //흰색
						}
						printf("이름:%-15s  ", (*a_MonList)[e_ran].m_Name); y++; Pc::gotoxy2(x, y);
						printf("체력 : %-10d ", (*a_MonList)[e_ran].m_Hp); y++; Pc::gotoxy2(x, y);
						printf("공격 : %-6d  ", (*a_MonList)[e_ran].m_Attack); y++; Pc::gotoxy2(x, y);
						printf("방어 : %-4d    ", (*a_MonList)[e_ran].m_Defence); y++; Pc::gotoxy2(x, y);
						printf("레벨 : %-3d     ", (*a_MonList)[e_ran].m_Level); y += 3; Pc::gotoxy2(x, y);
						Sleep(100);
						is_Color = !is_Color;
					}




					//초기화부분
					x = 42;
					y = 20;

					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						7);  //흰색
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
						FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //흰색
					x = 134;
					y = reverse;
					Pc::gotoxy2(x, y);
					printf("이름:%-15s  ", (*a_MonList)[e_ran].m_Name); y++; Pc::gotoxy2(x, y);
					printf("체력 : %-10d ", (*a_MonList)[e_ran].m_Hp); y++; Pc::gotoxy2(x, y);
					printf("공격 : %-6d  ", (*a_MonList)[e_ran].m_Attack); y++; Pc::gotoxy2(x, y);
					printf("방어 : %-4d    ", (*a_MonList)[e_ran].m_Defence); y++; Pc::gotoxy2(x, y);
					printf("레벨 : %-3d     ", (*a_MonList)[e_ran].m_Level); y += 3; Pc::gotoxy2(x, y);

					Sleep(500);

					//break;
			}
		}






		else if (p_ran == 3 && p4_attack == true)
		{

			//if ((*a_MonList)[e_ran].m_Hp == 0) continue;


				//공격 그래픽
				x = 42;
				y = 27;
				Pc::gotoxy2(x, y);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
					12 | 12 << 4);  //흰색
				for (int i = 0; i < 44; i++)
				{
					printf("■");
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
					printf("■");
					Sleep(13);
					y--;

					Pc::gotoxy2(x, y);
				}


				Pc::gotoxy2(x, y);
				for (int i = 0; i < 23; i++)
				{
					printf("■");
					Sleep(13);
				}

				//반전 
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
							FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //흰색
					}
					printf("이름:%-15s  ", (*a_MonList)[e_ran].m_Name); y++; Pc::gotoxy2(x, y);
					printf("체력 : %-10d ", (*a_MonList)[e_ran].m_Hp); y++; Pc::gotoxy2(x, y);
					printf("공격 : %-6d  ", (*a_MonList)[e_ran].m_Attack); y++; Pc::gotoxy2(x, y);
					printf("방어 : %-4d    ", (*a_MonList)[e_ran].m_Defence); y++; Pc::gotoxy2(x, y);
					printf("레벨 : %-3d     ", (*a_MonList)[e_ran].m_Level); y += 3; Pc::gotoxy2(x, y);
					Sleep(100);
					is_Color = !is_Color;
				}




				//초기화부분
				x = 42;
				y = 27;

				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
					7);  //흰색
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
					FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //흰색
				x = 134;
				y = reverse;
				Pc::gotoxy2(x, y);
				printf("이름:%-15s  ", (*a_MonList)[e_ran].m_Name); y++; Pc::gotoxy2(x, y);
				printf("체력 : %-10d ", (*a_MonList)[e_ran].m_Hp); y++; Pc::gotoxy2(x, y);
				printf("공격 : %-6d  ", (*a_MonList)[e_ran].m_Attack); y++; Pc::gotoxy2(x, y);
				printf("방어 : %-4d    ", (*a_MonList)[e_ran].m_Defence); y++; Pc::gotoxy2(x, y);
				printf("레벨 : %-3d     ", (*a_MonList)[e_ran].m_Level); y += 3; Pc::gotoxy2(x, y);

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
						printf("■");
						Sleep(13);
						x -= 2;
						//Pc::gotoxy2(x, y);

					}


					//반전부분


					for (int i = 0; i < 5; i++)
					{
						x = 6;
						y = 4;

						Pc::gotoxy2(x, y);
						if (is_Color == true)
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
								12);  //빨간색

						if (is_Color == false)
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
								7);
						printf("이름:%-14s 직업:%-9s", (*a_PcList)[log].Name, (*a_PcList)[log].Char_Type); y++; Pc::gotoxy2(x, y);
						printf("체력:%-8d       마나 : %-7d", (*a_PcList)[log].Hp, (*a_PcList)[log].Mp); y++; Pc::gotoxy2(x, y);
						printf("공격:%-5d          방어:%-5d", (*a_PcList)[log].Attack, (*a_PcList)[log].Deffence); y++; Pc::gotoxy2(x, y);
						printf("공속:%-2d             레벨 : %-3d", (*a_PcList)[log].Att_Speed, (*a_PcList)[log].Level); y++; Pc::gotoxy2(x, y);
						printf("힘:%-4d    민첩:%-4d    지능:%-4d", (*a_PcList)[log].Str, (*a_PcList)[log].Dex, (*a_PcList)[log].INT); y += 3; Pc::gotoxy2(x, y);
						Sleep(100);
						is_Color = !is_Color;
					}

					//초기화부분

					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						7);  //흰색
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
					printf("이름:%-14s 직업:%-9s", (*a_PcList)[log].Name, (*a_PcList)[log].Char_Type); y++; Pc::gotoxy2(x, y);
					printf("체력:%-8d       마나 : %-7d", (*a_PcList)[log].Hp, (*a_PcList)[log].Mp); y++; Pc::gotoxy2(x, y);
					printf("공격:%-5d          방어:%-5d", (*a_PcList)[log].Attack, (*a_PcList)[log].Deffence); y++; Pc::gotoxy2(x, y);
					printf("공속:%-2d             레벨 : %-3d", (*a_PcList)[log].Att_Speed, (*a_PcList)[log].Level); y++; Pc::gotoxy2(x, y);
					printf("힘:%-4d    민첩:%-4d    지능:%-4d", (*a_PcList)[log].Str, (*a_PcList)[log].Dex, (*a_PcList)[log].INT); y += 3; Pc::gotoxy2(x, y);

					//break;

			}//if (p_ran == 0)

				else if (p_ran != 0)
				{




					x = 130;
					y = 6;


					Pc::gotoxy2(x, y);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						12 | 12 << 4);  //흰색
					for (int i = 0; i < 44; i++)
					{
						Pc::gotoxy2(x, y);
						printf("■");
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
						printf("■");
						Sleep(13);
						y++;
						Pc::gotoxy2(x, y);
					}


					Pc::gotoxy2(x, y);
					for (int i = 0; i < 23; i++)
					{
						Pc::gotoxy2(x, y);
						printf("■");
						Sleep(13);
						x -= 2;
					}

					//반전부분
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
								12);  //빨간색

						if (is_Color == false)
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
								7);
						if (p_ran != 0)
						{

							printf("이름:%-14s 직업:%-9s", (*a_PcGdList)[p_ran - 1].Name, (*a_PcGdList)[p_ran - 1].Char_Type); y++; Pc::gotoxy2(x, y);
							printf("체력:%-8d       마나 : %-7d", (*a_PcGdList)[p_ran - 1].Hp, (*a_PcGdList)[p_ran - 1].Mp); y++; Pc::gotoxy2(x, y);
							printf("공격:%-5d          방어:%-5d", (*a_PcGdList)[p_ran - 1].Attack, (*a_PcGdList)[p_ran - 1].Deffence); y++; Pc::gotoxy2(x, y);
							printf("공속:%-2d             레벨 : %-3d", (*a_PcGdList)[p_ran - 1].Att_Speed, (*a_PcGdList)[p_ran - 1].Level); y++; Pc::gotoxy2(x, y);
							printf("힘:%-4d    민첩:%-4d    지능:%-4d", (*a_PcGdList)[p_ran - 1].Str, (*a_PcGdList)[p_ran - 1].Dex, (*a_PcGdList)[p_ran - 1].INT); y += 3; Pc::gotoxy2(x, y);
						}
						else if (p_ran == 0)
						{
							printf("이름:%-14s 직업:%-9s", (*a_PcList)[log].Name, (*a_PcList)[log].Char_Type); y++; Pc::gotoxy2(x, y);
							printf("체력:%-8d       마나 : %-7d", (*a_PcList)[log].Hp, (*a_PcList)[log].Mp); y++; Pc::gotoxy2(x, y);
							printf("공격:%-5d          방어:%-5d", (*a_PcList)[log].Attack, (*a_PcList)[log].Deffence); y++; Pc::gotoxy2(x, y);
							printf("공속:%-2d             레벨 : %-3d", (*a_PcList)[log].Att_Speed, (*a_PcList)[log].Level); y++; Pc::gotoxy2(x, y);
							printf("힘:%-4d    민첩:%-4d    지능:%-4d", (*a_PcList)[log].Str, (*a_PcList)[log].Dex, (*a_PcList)[log].INT); y += 3; Pc::gotoxy2(x, y);
						}
						Sleep(100);
						is_Color = !is_Color;
					}

					//초기화 부분

					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						7);  //흰색

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

						printf("이름:%-14s 직업:%-9s", (*a_PcGdList)[p_ran - 1].Name, (*a_PcGdList)[p_ran - 1].Char_Type); y++; Pc::gotoxy2(x, y);
						printf("체력:%-8d       마나 : %-7d", (*a_PcGdList)[p_ran - 1].Hp, (*a_PcGdList)[p_ran - 1].Mp); y++; Pc::gotoxy2(x, y);
						printf("공격:%-5d          방어:%-5d", (*a_PcGdList)[p_ran - 1].Attack, (*a_PcGdList)[p_ran - 1].Deffence); y++; Pc::gotoxy2(x, y);
						printf("공속:%-2d             레벨 : %-3d", (*a_PcGdList)[p_ran - 1].Att_Speed, (*a_PcGdList)[p_ran - 1].Level); y++; Pc::gotoxy2(x, y);
						printf("힘:%-4d    민첩:%-4d    지능:%-4d", (*a_PcGdList)[p_ran - 1].Str, (*a_PcGdList)[p_ran - 1].Dex, (*a_PcGdList)[p_ran - 1].INT); y += 3; Pc::gotoxy2(x, y);
					}
					else if (p_ran == 0)
					{
						printf("이름:%-14s 직업:%-9s", (*a_PcList)[log].Name, (*a_PcList)[log].Char_Type); y++; Pc::gotoxy2(x, y);
						printf("체력:%-8d       마나 : %-7d", (*a_PcList)[log].Hp, (*a_PcList)[log].Mp); y++; Pc::gotoxy2(x, y);
						printf("공격:%-5d          방어:%-5d", (*a_PcList)[log].Attack, (*a_PcList)[log].Deffence); y++; Pc::gotoxy2(x, y);
						printf("공속:%-2d             레벨 : %-3d", (*a_PcList)[log].Att_Speed, (*a_PcList)[log].Level); y++; Pc::gotoxy2(x, y);
						printf("힘:%-4d    민첩:%-4d    지능:%-4d", (*a_PcList)[log].Str, (*a_PcList)[log].Dex, (*a_PcList)[log].INT); y += 3; Pc::gotoxy2(x, y);
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
						printf("■");
						Sleep(13);
						x -= 2;
						//Pc::gotoxy2(x, y);

					}


					//반전부분


					for (int i = 0; i < 5; i++)
					{
						x = 6;
						y = 11;

						Pc::gotoxy2(x, y);
						if (is_Color == true)
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
								12);  //빨간색

						if (is_Color == false)
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
								7);
						printf("이름:%-14s 직업:%-9s", (*a_PcGdList)[p_ran-1].Name, (*a_PcGdList)[p_ran-1].Char_Type); y++; Pc::gotoxy2(x, y);
						printf("체력:%-8d       마나 : %-7d", (*a_PcGdList)[p_ran-1].Hp, (*a_PcGdList)[p_ran-1].Mp); y++; Pc::gotoxy2(x, y);
						printf("공격:%-5d          방어:%-5d", (*a_PcGdList)[p_ran-1].Attack, (*a_PcGdList)[p_ran-1].Deffence); y++; Pc::gotoxy2(x, y);
						printf("공속:%-2d             레벨 : %-3d", (*a_PcGdList)[p_ran-1].Att_Speed, (*a_PcGdList)[p_ran-1].Level); y++; Pc::gotoxy2(x, y);
						printf("힘:%-4d    민첩:%-4d    지능:%-4d", (*a_PcGdList)[p_ran-1].Str, (*a_PcGdList)[p_ran-1].Dex, (*a_PcGdList)[p_ran-1].INT); y += 3; Pc::gotoxy2(x, y);
						Sleep(100);
						is_Color = !is_Color;
					}

					//초기화부분

					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						7);  //흰색
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
					printf("이름:%-14s 직업:%-9s", (*a_PcGdList)[p_ran - 1].Name, (*a_PcGdList)[p_ran - 1].Char_Type); y++; Pc::gotoxy2(x, y);
					printf("체력:%-8d       마나 : %-7d", (*a_PcGdList)[p_ran - 1].Hp, (*a_PcGdList)[p_ran - 1].Mp); y++; Pc::gotoxy2(x, y);
					printf("공격:%-5d          방어:%-5d", (*a_PcGdList)[p_ran - 1].Attack, (*a_PcGdList)[p_ran - 1].Deffence); y++; Pc::gotoxy2(x, y);
					printf("공속:%-2d             레벨 : %-3d", (*a_PcGdList)[p_ran - 1].Att_Speed, (*a_PcGdList)[p_ran - 1].Level); y++; Pc::gotoxy2(x, y);
					printf("힘:%-4d    민첩:%-4d    지능:%-4d", (*a_PcGdList)[p_ran - 1].Str, (*a_PcGdList)[p_ran - 1].Dex, (*a_PcGdList)[p_ran - 1].INT); y += 3; Pc::gotoxy2(x, y);
					//break;
			}
			else if (p_ran != 1)
			{
			
				
				



					x = 130;
					y = 13;


					Pc::gotoxy2(x, y);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						12 | 12 << 4);  //흰색
					for (int i = 0; i < 44; i++)
					{
						Pc::gotoxy2(x, y);
						printf("■");
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
						printf("■");
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
						printf("■");
						Sleep(13);
						x -= 2;
					}

					//반전부분
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
								12);  //빨간색

						if (is_Color == false)
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
								7);
						if (p_ran != 0)
						{

							printf("이름:%-14s 직업:%-9s", (*a_PcGdList)[p_ran - 1].Name, (*a_PcGdList)[p_ran - 1].Char_Type); y++; Pc::gotoxy2(x, y);
							printf("체력:%-8d       마나 : %-7d", (*a_PcGdList)[p_ran - 1].Hp, (*a_PcGdList)[p_ran - 1].Mp); y++; Pc::gotoxy2(x, y);
							printf("공격:%-5d          방어:%-5d", (*a_PcGdList)[p_ran - 1].Attack, (*a_PcGdList)[p_ran - 1].Deffence); y++; Pc::gotoxy2(x, y);
							printf("공속:%-2d             레벨 : %-3d", (*a_PcGdList)[p_ran - 1].Att_Speed, (*a_PcGdList)[p_ran - 1].Level); y++; Pc::gotoxy2(x, y);
							printf("힘:%-4d    민첩:%-4d    지능:%-4d", (*a_PcGdList)[p_ran - 1].Str, (*a_PcGdList)[p_ran - 1].Dex, (*a_PcGdList)[p_ran - 1].INT); y += 3; Pc::gotoxy2(x, y);
						}
						else if (p_ran == 0)
						{
							printf("이름:%-14s 직업:%-9s", (*a_PcList)[log].Name, (*a_PcList)[log].Char_Type); y++; Pc::gotoxy2(x, y);
							printf("체력:%-8d       마나 : %-7d", (*a_PcList)[log].Hp, (*a_PcList)[log].Mp); y++; Pc::gotoxy2(x, y);
							printf("공격:%-5d          방어:%-5d", (*a_PcList)[log].Attack, (*a_PcList)[log].Deffence); y++; Pc::gotoxy2(x, y);
							printf("공속:%-2d             레벨 : %-3d", (*a_PcList)[log].Att_Speed, (*a_PcList)[log].Level); y++; Pc::gotoxy2(x, y);
							printf("힘:%-4d    민첩:%-4d    지능:%-4d", (*a_PcList)[log].Str, (*a_PcList)[log].Dex, (*a_PcList)[log].INT); y += 3; Pc::gotoxy2(x, y);
						}
						Sleep(100);
						is_Color = !is_Color;

					}

					//초기화 부분

					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						7);  //흰색

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
						printf("이름:%-14s 직업:%-9s", (*a_PcGdList)[p_ran - 1].Name, (*a_PcGdList)[p_ran - 1].Char_Type); y++; Pc::gotoxy2(x, y);
						printf("체력:%-8d       마나 : %-7d", (*a_PcGdList)[p_ran - 1].Hp, (*a_PcGdList)[p_ran - 1].Mp); y++; Pc::gotoxy2(x, y);
						printf("공격:%-5d          방어:%-5d", (*a_PcGdList)[p_ran - 1].Attack, (*a_PcGdList)[p_ran - 1].Deffence); y++; Pc::gotoxy2(x, y);
						printf("공속:%-2d             레벨 : %-3d", (*a_PcGdList)[p_ran - 1].Att_Speed, (*a_PcGdList)[p_ran - 1].Level); y++; Pc::gotoxy2(x, y);
						printf("힘:%-4d    민첩:%-4d    지능:%-4d", (*a_PcGdList)[p_ran - 1].Str, (*a_PcGdList)[p_ran - 1].Dex, (*a_PcGdList)[p_ran - 1].INT); y += 3; Pc::gotoxy2(x, y);
					}
					else if (p_ran == 0)
					{
						printf("이름:%-14s 직업:%-9s", (*a_PcList)[log].Name, (*a_PcList)[log].Char_Type); y++; Pc::gotoxy2(x, y);
						printf("체력:%-8d       마나 : %-7d", (*a_PcList)[log].Hp, (*a_PcList)[log].Mp); y++; Pc::gotoxy2(x, y);
						printf("공격:%-5d          방어:%-5d", (*a_PcList)[log].Attack, (*a_PcList)[log].Deffence); y++; Pc::gotoxy2(x, y);
						printf("공속:%-2d             레벨 : %-3d", (*a_PcList)[log].Att_Speed, (*a_PcList)[log].Level); y++; Pc::gotoxy2(x, y);
						printf("힘:%-4d    민첩:%-4d    지능:%-4d", (*a_PcList)[log].Str, (*a_PcList)[log].Dex, (*a_PcList)[log].INT); y += 3; Pc::gotoxy2(x, y);
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
						printf("■");
						Sleep(13);
						x -= 2;
						//Pc::gotoxy2(x, y);

					}


					//반전부분


					for (int i = 0; i < 5; i++)
					{
						x = 6;
						y = 18;

						Pc::gotoxy2(x, y);
						if (is_Color == true)
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
								12);  //빨간색

						if (is_Color == false)
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
								7);
						printf("이름:%-14s 직업:%-9s", (*a_PcGdList)[p_ran].Name, (*a_PcGdList)[p_ran].Char_Type); y++; Pc::gotoxy2(x, y);
						printf("체력:%-8d       마나 : %-7d", (*a_PcGdList)[p_ran].Hp, (*a_PcGdList)[p_ran].Mp); y++; Pc::gotoxy2(x, y);
						printf("공격:%-5d          방어:%-5d", (*a_PcGdList)[p_ran].Attack, (*a_PcGdList)[p_ran].Deffence); y++; Pc::gotoxy2(x, y);
						printf("공속:%-2d             레벨 : %-3d", (*a_PcGdList)[p_ran].Att_Speed, (*a_PcGdList)[p_ran].Level); y++; Pc::gotoxy2(x, y);
						printf("힘:%-4d    민첩:%-4d    지능:%-4d", (*a_PcGdList)[p_ran].Str, (*a_PcGdList)[p_ran].Dex, (*a_PcGdList)[p_ran].INT); y += 3; Pc::gotoxy2(x, y);
						Sleep(100);
						is_Color = !is_Color;
					}

					//초기화부분

					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						7);  //흰색
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
					printf("이름:%-14s 직업:%-9s", (*a_PcGdList)[p_ran].Name, (*a_PcGdList)[p_ran].Char_Type); y++; Pc::gotoxy2(x, y);
					printf("체력:%-8d       마나 : %-7d", (*a_PcGdList)[p_ran].Hp, (*a_PcGdList)[p_ran].Mp); y++; Pc::gotoxy2(x, y);
					printf("공격:%-5d          방어:%-5d", (*a_PcGdList)[p_ran].Attack, (*a_PcGdList)[p_ran].Deffence); y++; Pc::gotoxy2(x, y);
					printf("공속:%-2d             레벨 : %-3d", (*a_PcGdList)[p_ran].Att_Speed, (*a_PcGdList)[p_ran].Level); y++; Pc::gotoxy2(x, y);
					printf("힘:%-4d    민첩:%-4d    지능:%-4d", (*a_PcGdList)[p_ran].Str, (*a_PcGdList)[p_ran].Dex, (*a_PcGdList)[p_ran].INT); y += 3; Pc::gotoxy2(x, y);

					//break;
			}//if

			else if (p_ran != 2) //1
			{

				


					x = 130;
					y = 20;


					Pc::gotoxy2(x, y);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						12 | 12 << 4);  //흰색
					for (int i = 0; i < 44; i++)
					{
						Pc::gotoxy2(x, y);
						printf("■");
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
						printf("■");
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
						printf("■");
						Sleep(13);
						x -= 2;
					}

					//반전부분
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
								12);  //빨간색

						if (is_Color == false)
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
								7);
						if (p_ran != 0)
						{

							printf("이름:%-14s 직업:%-9s", (*a_PcGdList)[p_ran - 1].Name, (*a_PcGdList)[p_ran - 1].Char_Type); y++; Pc::gotoxy2(x, y);
							printf("체력:%-8d       마나 : %-7d", (*a_PcGdList)[p_ran - 1].Hp, (*a_PcGdList)[p_ran - 1].Mp); y++; Pc::gotoxy2(x, y);
							printf("공격:%-5d          방어:%-5d", (*a_PcGdList)[p_ran - 1].Attack, (*a_PcGdList)[p_ran - 1].Deffence); y++; Pc::gotoxy2(x, y);
							printf("공속:%-2d             레벨 : %-3d", (*a_PcGdList)[p_ran - 1].Att_Speed, (*a_PcGdList)[p_ran - 1].Level); y++; Pc::gotoxy2(x, y);
							printf("힘:%-4d    민첩:%-4d    지능:%-4d", (*a_PcGdList)[p_ran - 1].Str, (*a_PcGdList)[p_ran - 1].Dex, (*a_PcGdList)[p_ran - 1].INT); y += 3; Pc::gotoxy2(x, y);
						}
						else if (p_ran == 0)
						{
							printf("이름:%-14s 직업:%-9s", (*a_PcList)[log].Name, (*a_PcList)[log].Char_Type); y++; Pc::gotoxy2(x, y);
							printf("체력:%-8d       마나 : %-7d", (*a_PcList)[log].Hp, (*a_PcList)[log].Mp); y++; Pc::gotoxy2(x, y);
							printf("공격:%-5d          방어:%-5d", (*a_PcList)[log].Attack, (*a_PcList)[log].Deffence); y++; Pc::gotoxy2(x, y);
							printf("공속:%-2d             레벨 : %-3d", (*a_PcList)[log].Att_Speed, (*a_PcList)[log].Level); y++; Pc::gotoxy2(x, y);
							printf("힘:%-4d    민첩:%-4d    지능:%-4d", (*a_PcList)[log].Str, (*a_PcList)[log].Dex, (*a_PcList)[log].INT); y += 3; Pc::gotoxy2(x, y);
						}
						Sleep(100);
						is_Color = !is_Color;

					}

					//초기화 부분

					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
						7);  //흰색

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
						printf("이름:%-14s 직업:%-9s", (*a_PcGdList)[p_ran - 1].Name, (*a_PcGdList)[p_ran - 1].Char_Type); y++; Pc::gotoxy2(x, y);
						printf("체력:%-8d       마나 : %-7d", (*a_PcGdList)[p_ran - 1].Hp, (*a_PcGdList)[p_ran - 1].Mp); y++; Pc::gotoxy2(x, y);
						printf("공격:%-5d          방어:%-5d", (*a_PcGdList)[p_ran - 1].Attack, (*a_PcGdList)[p_ran - 1].Deffence); y++; Pc::gotoxy2(x, y);
						printf("공속:%-2d             레벨 : %-3d", (*a_PcGdList)[p_ran - 1].Att_Speed, (*a_PcGdList)[p_ran - 1].Level); y++; Pc::gotoxy2(x, y);
						printf("힘:%-4d    민첩:%-4d    지능:%-4d", (*a_PcGdList)[p_ran - 1].Str, (*a_PcGdList)[p_ran - 1].Dex, (*a_PcGdList)[p_ran - 1].INT); y += 3; Pc::gotoxy2(x, y);
					}
					else if (p_ran == 0)
					{
						printf("이름:%-14s 직업:%-9s", (*a_PcList)[log].Name, (*a_PcList)[log].Char_Type); y++; Pc::gotoxy2(x, y);
						printf("체력:%-8d       마나 : %-7d", (*a_PcList)[log].Hp, (*a_PcList)[log].Mp); y++; Pc::gotoxy2(x, y);
						printf("공격:%-5d          방어:%-5d", (*a_PcList)[log].Attack, (*a_PcList)[log].Deffence); y++; Pc::gotoxy2(x, y);
						printf("공속:%-2d             레벨 : %-3d", (*a_PcList)[log].Att_Speed, (*a_PcList)[log].Level); y++; Pc::gotoxy2(x, y);
						printf("힘:%-4d    민첩:%-4d    지능:%-4d", (*a_PcList)[log].Str, (*a_PcList)[log].Dex, (*a_PcList)[log].INT); y += 3; Pc::gotoxy2(x, y);
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
				printf("%s 가 %s에게 데미지:%d만큼 입혔습니다", (*a_PcList)[log].Name, (*a_MonList)[e_ran].m_Name, (*a_PcList)[log].Attack);
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
			printf("%s 가 %s에게 데미지:%d만큼 입혔습니다", (*a_PcList)[log].Name, (*a_MonList)[e_ran].m_Name, (*a_PcList)[log].Attack);
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
			printf("%s 가 %s에게 데미지:%d만큼 입혔습니다", (*a_PcList)[log].Name, (*a_MonList)[e_ran].m_Name, (*a_PcList)[log].Attack);
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
			printf("%s 가 %s에게 데미지:%d만큼 입혔습니다", (*a_PcGdList)[p_ran - 1].Name, (*a_MonList)[e_ran].m_Name, (*a_PcGdList)[p_ran - 1].Attack);
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
			printf("%s 가 %s에게 데미지:%d만큼 입혔습니다", (*a_PcGdList)[p_ran - 1].Name, (*a_MonList)[e_ran].m_Name, (*a_PcGdList)[p_ran - 1].Attack);
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
			printf("%s 가 %s에게 데미지:%d만큼 입혔습니다", (*a_PcGdList)[p_ran - 1].Name, (*a_MonList)[e_ran].m_Name, (*a_PcGdList)[p_ran - 1].Attack);
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
			printf("%s 가 %s에게 데미지:%d만큼 입혔습니다", (*a_PcGdList)[p_ran - 1].Name, (*a_MonList)[e_ran].m_Name, (*a_PcGdList)[p_ran - 1].Attack);
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
			printf("%s 가 %s에게 데미지:%d만큼 입혔습니다", (*a_PcGdList)[p_ran - 1].Name, (*a_MonList)[e_ran].m_Name, (*a_PcGdList)[p_ran - 1].Attack);
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
			printf("%s 가 %s에게 데미지:%d만큼 입혔습니다", (*a_PcGdList)[p_ran - 1].Name, (*a_MonList)[e_ran].m_Name, (*a_PcGdList)[p_ran - 1].Attack);
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
			printf("%s 가 %s에게 데미지:%d만큼 입혔습니다", (*a_PcGdList)[p_ran - 1].Name, (*a_MonList)[e_ran].m_Name, (*a_PcGdList)[p_ran - 1].Attack);
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
			printf("%s 가 %s에게 데미지:%d만큼 입혔습니다", (*a_PcGdList)[p_ran - 1].Name, (*a_MonList)[e_ran].m_Name, (*a_PcGdList)[p_ran - 1].Attack);
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
			printf("%s 가 %s에게 데미지:%d만큼 입혔습니다", (*a_PcGdList)[p_ran - 1].Name, (*a_MonList)[e_ran].m_Name, (*a_PcGdList)[p_ran - 1].Attack);
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
					printf("%s 가 %s에게 데미지:%d만큼 입혔습니다", (*a_MonList)[e_ran].m_Name, (*a_PcList)[log].Name, (*a_MonList)[e_ran].m_Attack);
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
			printf("%s 가 %s에게 데미지:%d만큼 입혔습니다", (*a_MonList)[e_ran].m_Name, (*a_PcGdList)[p_ran-1].Name, (*a_MonList)[e_ran].m_Attack);
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
			printf("%s 가 %s에게 데미지:%d만큼 입혔습니다", (*a_MonList)[e_ran].m_Name, (*a_PcGdList)[p_ran - 1].Name, (*a_MonList)[e_ran].m_Attack);
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
			printf("%s 가 %s에게 데미지:%d만큼 입혔습니다", (*a_MonList)[e_ran].m_Name, (*a_PcGdList)[p_ran - 1].Name, (*a_MonList)[e_ran].m_Attack);
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
			printf("%s 가 %s에게 데미지:%d만큼 입혔습니다", (*a_MonList)[e_ran].m_Name, (*a_PcList)[log].Name, (*a_MonList)[e_ran].m_Attack);
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
			printf("%s 가 %s에게 데미지:%d만큼 입혔습니다", (*a_MonList)[e_ran].m_Name, (*a_PcGdList)[p_ran - 1].Name, (*a_MonList)[e_ran].m_Attack);
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
			printf("%s 가 %s에게 데미지:%d만큼 입혔습니다", (*a_MonList)[e_ran].m_Name, (*a_PcGdList)[p_ran - 1].Name, (*a_MonList)[e_ran].m_Attack);
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
			printf("%s 가 %s에게 데미지:%d만큼 입혔습니다", (*a_MonList)[e_ran].m_Name, (*a_PcGdList)[p_ran - 1].Name, (*a_MonList)[e_ran].m_Attack);
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
			printf("%s 가 %s에게 데미지:%d만큼 입혔습니다", (*a_MonList)[e_ran].m_Name, (*a_PcList)[log].Name, (*a_MonList)[e_ran].m_Attack);
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
			printf("%s 가 %s에게 데미지:%d만큼 입혔습니다", (*a_MonList)[e_ran].m_Name, (*a_PcGdList)[p_ran - 1].Name, (*a_MonList)[e_ran].m_Attack);
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
			printf("%s 가 %s에게 데미지:%d만큼 입혔습니다", (*a_MonList)[e_ran].m_Name, (*a_PcGdList)[p_ran - 1].Name, (*a_MonList)[e_ran].m_Attack);
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
			printf("%s 가 %s에게 데미지:%d만큼 입혔습니다", (*a_MonList)[e_ran].m_Name, (*a_PcGdList)[p_ran - 1].Name, (*a_MonList)[e_ran].m_Attack);
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



		



