#include "HallOf.h"



HallOf::HallOf()
{
	Name[0] = '\0';
}

HallOf::HallOf(const char * n)
{
	strcpy(Name, n);
}

HallOf::~HallOf()
{
}


void HallOf::HallSave(vector<Pc>*a_PcList, vector<HallOf>*a_HallList, int log)
{
	FILE *a_wF4 = fopen("Hall.txt", "wt");
	if (a_wF4 != NULL)
	{

		int PcCount = a_HallList->size();
		fprintf(a_wF4, "%d\n", PcCount);

		for (int i = 0; i < a_HallList->size(); i++)
		{
			fprintf(a_wF4, "%s \n",
				(*a_HallList)[i].Name);//
		}//for (int i = 0; i < a_PcList->size(); i++)

		fclose(a_wF4);
	}
}

void HallOf::HallLoad(vector<Pc>*a_PcList, vector<HallOf>*a_HallList, int log)
{
	FILE *a_rF4 = fopen("Hall.txt", "rt");
	if (a_rF4 != NULL)

	if (a_rF4 != NULL && log == -1)
	{
		int PcCount = 0;
		fscanf(a_rF4, "%d", &PcCount);
		if (PcCount > 0)
		{

			for (int i = 0; i < PcCount; i++)
			{
				HallOf Node;
				fscanf(a_rF4, "%s",
					Node.Name);//
				a_HallList->push_back(Node);
			}//for (int i = 0; i < a_PcList->size(); i++)
		}//if
		fclose(a_rF4);
	}//if (a_rF != NULL)
}


void HallOf::HallPrint(vector<Pc>*a_PcList, vector<HallOf>*a_HallOfList, int log)
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
		printf("����������������������������������������������������������������������������������������������������������������������������������������������������������������");
		y++;
		Pc::gotoxy2(x, y);
		printf("��                                                                                                                                                            ��");

		x++;
		Pc::gotoxy2(x, y);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_GREEN); //�ϴû�
		printf("<Scence>");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //���

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN); //�����
		printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t   ��");
		printf(" %-8d", (*a_PcList)[log].Gold);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //���

		x--;
		y++;
		Pc::gotoxy2(x, y); printf("��                                                                                                                                                            ��"); y++;
		Pc::gotoxy2(x, y); printf("��  ��������������������������������������                                                                                          ����������������������������"); y++;
		Pc::gotoxy2(x, y); printf("��  ��                                  ��                                                                                          ��                      ����"); y++;
		Pc::gotoxy2(x, y); printf("��  ��                                  ��                                                                                          ��                      ����"); y++;
		Pc::gotoxy2(x, y); printf("��  ��                                  ��                                                                                          ��                      ����"); y++;
		Pc::gotoxy2(x, y); printf("��  ��                                  ��                                                                                          ��                      ����"); y++;
		Pc::gotoxy2(x, y); printf("��  ��                                  ��                                                                                          ��                      ����"); y++;
		Pc::gotoxy2(x, y); printf("��  ��������������������������������������                                                                                          ����������������������������"); y++;
		Pc::gotoxy2(x, y); printf("��  ��������������������������������������                                                                                          ����������������������������"); y++;
		Pc::gotoxy2(x, y); printf("��  ��                                  ��                                                                                          ��                      ����"); y++;
		Pc::gotoxy2(x, y); printf("��  ��                                  ��                                                                                          ��                      ����"); y++;
		Pc::gotoxy2(x, y); printf("��  ��                                  ��                                                                                          ��                      ����"); y++;
		Pc::gotoxy2(x, y); printf("��  ��                                  ��                                                                                          ��                      ����"); y++;
		Pc::gotoxy2(x, y); printf("��  ��                                  ��                                                                                          ��                      ����"); y++;
		Pc::gotoxy2(x, y); printf("��  ��������������������������������������                                                                                          ����������������������������"); y++;
		Pc::gotoxy2(x, y); printf("��  ��������������������������������������                                                                                          ����������������������������"); y++;
		Pc::gotoxy2(x, y); printf("��  ��                                  ��                                                                                          ��                      ����"); y++;
		Pc::gotoxy2(x, y); printf("��  ��                                  ��                                                                                          ��                      ����"); y++;
		Pc::gotoxy2(x, y); printf("��  ��                                  ��                                                                                          ��                      ����"); y++;
		Pc::gotoxy2(x, y); printf("��  ��                                  ��                                                                                          ��                      ����"); y++;
		Pc::gotoxy2(x, y); printf("��  ��                                  ��                                                                                          ��                      ����"); y++;
		Pc::gotoxy2(x, y); printf("��  ��������������������������������������                                                                                          ����������������������������"); y++;
		Pc::gotoxy2(x, y); printf("��  ��������������������������������������                                                                                          ����������������������������"); y++;
		Pc::gotoxy2(x, y); printf("��  ��                                  ��                                                                                          ��                      ����"); y++;
		Pc::gotoxy2(x, y); printf("��  ��                                  ��                                                                                          ��                      ����"); y++;
		Pc::gotoxy2(x, y); printf("��  ��                                  ��                                                                                          ��                      ����"); y++;
		Pc::gotoxy2(x, y); printf("��  ��                                  ��                                                                                          ��                      ����"); y++;
		Pc::gotoxy2(x, y); printf("��  ��                                  ��                                                                                          ��                      ����"); y++;
		Pc::gotoxy2(x, y); printf("��  ��������������������������������������                                                                                          ����������������������������"); y++;
		Pc::gotoxy2(x, y); printf("��                                                                                                                                                            ��"); y++;
		Pc::gotoxy2(x, y); printf("��                                                                                                                                                            ��"); y++;
		Pc::gotoxy2(x, y); printf("��                                                                                                                                                            ��");
		Pc::gotoxy2(x, y); printf("����������������������������������������������������������������������������������������������������������������������������������������������������������������"); y++;
		Pc::gotoxy2(x, y); printf("����������������������������������������������������������������������������������������������������������������������������������������������������������������"); x++;
		Pc::gotoxy2(x, y);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_INTENSITY | FOREGROUND_RED); //�ϴû�
		printf("<SystemPrint>");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //���

		x += 79;
		Pc::gotoxy2(x, y);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN); //�ϴû�
		printf("<Menu>");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //���
		x = 0;
		y++;
		Pc::gotoxy2(x, y);
		printf("��                                                                            ����                                                                            ��");
		y++;
		Pc::gotoxy2(x, y);
		printf("��                                                                            ����1.������                                                                    ��");
		y++;
		Pc::gotoxy2(x, y);
		printf("��                                                                            ����                                                                            ��");
		y++;
		Pc::gotoxy2(x, y);
		printf("��                                                                            ����                                                                            ��");
		y++;
		Pc::gotoxy2(x, y);
		printf("��                                                                            ����                                                                            ��");
		y++;
		Pc::gotoxy2(x, y);
		printf("��                                                                            ����                                                                            ��");
		y++;
		Pc::gotoxy2(x, y);
		printf("��                                                                            ����                                                                            ��");
		y++;
		Pc::gotoxy2(x, y);
		printf("��                                                                            ����                                                                            ��");
		y++;
		Pc::gotoxy2(x, y);
		printf("��                                                                            ����                                                                            ��");
		y++;
		Pc::gotoxy2(x, y);
		printf("��                                                                            ����                                                                            ��");
		y++;
		Pc::gotoxy2(x, y);
		printf("��                                                                            ����                                                                            ��");
		y++;
		Pc::gotoxy2(x, y);
		printf("��                                                                            ���� ��ȣ�� �Է����ּ���.                                                       ��");
		y++;
		Pc::gotoxy2(x, y);
		printf("��                                                                            ����                                                                            ��");
		y++;
		Pc::gotoxy2(x, y);
		printf("����������������������������������������������������������������������������������������������������������������������������������������������������������������");
		x = 47, y = 3;
		Pc::gotoxy2(x, y); printf(" ��������������������������������������������������������������������������������������������������������������"); y++;
		Pc::gotoxy2(x, y); printf(" ��");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN); //�����
		printf("<��������>                                                                            ");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //���
		Pc::gotoxy2(156, y); printf("��"); y++;

		for (int i = 0; i < 25; i++)
		{
			Pc::gotoxy2(x, y);printf(" ��                                                                                                          ��");
			
			if (a_HallOfList->size() > i)
			{
				Pc::gotoxy2(50, y);
				printf("�̸�:%-13s",(*a_HallOfList)[i].Name);
			}
			y++;
		}
		Pc::gotoxy2(x, y); printf(" ��������������������������������������������������������������������������������������������������������������");
		//��%-3d.�̸�:%-13s�� : %-3d ��ø : %-3d ���� : %-3d ���� : %-2d ��� : %-2d���� : %-3d�������� : %-10s���� : %-4d        �� ��


		int a_Sel = 0;

		y = 46;
		x = 108;
		Pc::gotoxy2(x, y);
		scanf_s("%d", &a_Sel);
		getchar();

		if (a_Sel == 1) break;


	}
}



void HallOf::HallADD(vector<HallOf>*a_HallList, vector<Pc>*a_PcList , int log)
{
	HallOf Node;
	strcpy(Node.Name, (*a_PcList)[log].Name);

	a_HallList->push_back(Node);
}