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
		Pc::gotoxy2(x, y);
		printf("��                                                                                                                                                            ��");
		y++;
		Pc::gotoxy2(x, y);
		printf("��  ��������������������������������������                                                                                                                    ��");
		y++;
		Pc::gotoxy2(x, y);
		printf("��  ���̸�:%-14s ����:%-9s��                                                                                                                    ��", (*a_PcList)[log].Name, (*a_PcList)[log].Char_Type);

		y++;
		Pc::gotoxy2(x, y);
		printf("��  ��ü��:%-8d       ����:%-8d ��                                                                                                                    ��", (*a_PcList)[log].Hp, (*a_PcList)[log].Mp);
		y++;
		Pc::gotoxy2(x, y);
		printf("��  ������:%-5d          ���:%-5d    ��                                                                                                                    ��", (*a_PcList)[log].Attack, (*a_PcList)[log].Deffence);
		y++;
		Pc::gotoxy2(x, y);
		printf("��  ������:%-2d            ����:%-3d       ��			                                                                                              ��", (*a_PcList)[log].Att_Speed, (*a_PcList)[log].Level);
		y++;
		Pc::gotoxy2(x, y);
		printf("��  ����:%-4d ��ø:%-4d ����:%-4d       ��                                                                                                                    ��", (*a_PcList)[log].Str, (*a_PcList)[log].Dex, (*a_PcList)[log].INT);
		y++;
		Pc::gotoxy2(x, y);

		printf("��  ��������������������������������������                                                                                                                    ��");
		y++;
		Pc::gotoxy2(x, y);
		printf("��  ��������������������������������������                                                                                                                    ��");
		y++;
		Pc::gotoxy2(x, y);
		printf("��  ���̸�:%-14s ����:%-9s��                                                                                                                    ��", (*a_PcGdList)[0].Name, (*a_PcGdList)[0].Char_Type);
		y++;
		Pc::gotoxy2(x, y);
		printf("��  ��ü��:%-8d       ����:%-8d ��                                                                                                                    ��", (*a_PcGdList)[0].Hp, (*a_PcGdList)[0].Mp);
		y++;
		Pc::gotoxy2(x, y);
		printf("��  ������:%-5d          ���:%-5d    ��                                                                                                                    ��", (*a_PcGdList)[0].Attack, (*a_PcGdList)[0].Deffence);
		y++;
		Pc::gotoxy2(x, y);
		printf("��  ������:%-2d            ����:%-3d       ��			                                                                                              ��", (*a_PcGdList)[0].Att_Speed, (*a_PcGdList)[0].Level);
		y++;
		Pc::gotoxy2(x, y);
		printf("��  ����:%-4d ��ø:%-4d ����:%-4d       ��                                                                                                                    ��", (*a_PcGdList)[0].Str, (*a_PcGdList)[0].Dex, (*a_PcGdList)[0].INT);
		y++;
		Pc::gotoxy2(x, y);

		printf("��  ��������������������������������������                                                                                                                    ��");
		y++;
		Pc::gotoxy2(x, y);
		printf("��  ��������������������������������������                                                                                                                    ��");
		y++;
		Pc::gotoxy2(x, y);
		printf("��  ���̸�:%-14s ����:%-9s��                                                                                                                    ��", (*a_PcGdList)[1].Name, (*a_PcGdList)[1].Char_Type);
		y++;
		Pc::gotoxy2(x, y);
		printf("��  ��ü��:%-8d       ����:%-8d ��                                                                                                                    ��", (*a_PcGdList)[1].Hp, (*a_PcGdList)[1].Mp);
		y++;
		Pc::gotoxy2(x, y);
		printf("��  ������:%-5d          ���:%-5d    ��                                                                                                                    ��", (*a_PcGdList)[1].Attack, (*a_PcGdList)[1].Deffence);
		y++;
		Pc::gotoxy2(x, y);
		printf("��  ������:%-2d            ����:%-3d       ��			                                                                                              ��", (*a_PcGdList)[1].Att_Speed, (*a_PcGdList)[1].Level);
		y++;
		Pc::gotoxy2(x, y);
		printf("��  ����:%-4d ��ø:%-4d ����:%-4d       ��                                                                                                                    ��", (*a_PcGdList)[1].Str, (*a_PcGdList)[1].Dex, (*a_PcGdList)[1].INT);
		y++;
		Pc::gotoxy2(x, y);

		printf("��  ��������������������������������������                                                                                                                    ��");
		y++;
		Pc::gotoxy2(x, y);
		printf("��  ��������������������������������������                                                                                                                    ��");
		y++;
		Pc::gotoxy2(x, y);
		printf("��  ���̸�:%-14s ����:%-9s��                                                                                                                    ��", (*a_PcGdList)[2].Name, (*a_PcGdList)[2].Char_Type);
		y++;
		Pc::gotoxy2(x, y);
		printf("��  ��ü��:%-8d       ����:%-8d ��                                                                                                                    ��", (*a_PcGdList)[2].Hp, (*a_PcGdList)[2].Mp);
		y++;
		Pc::gotoxy2(x, y);
		printf("��  ������:%-5d          ���:%-5d    ��                                                                                                                    ��", (*a_PcGdList)[2].Attack, (*a_PcGdList)[2].Deffence);
		y++;
		Pc::gotoxy2(x, y);
		printf("��  ������:%-2d            ����:%-3d       ��			                                                                                              ��", (*a_PcGdList)[2].Att_Speed, (*a_PcGdList)[2].Level);
		y++;
		Pc::gotoxy2(x, y);
		printf("��  ����:%-4d ��ø:%-4d ����:%-4d       ��                                                                                                                    ��", (*a_PcGdList)[2].Str, (*a_PcGdList)[2].Dex, (*a_PcGdList)[2].INT);
		y++;
		Pc::gotoxy2(x, y);

		printf("��  ��������������������������������������                                                                                                                    ��");
		y++;
		Pc::gotoxy2(x, y);

		printf("��                                                                                                                                                            ��");
		y++;
		Pc::gotoxy2(x, y);
		printf("��                                                                                                                                                            ��");
		y++;
		Pc::gotoxy2(x, y);
		printf("��                                                                                                                                                            ��");
		Pc::gotoxy2(x, y);
		printf("����������������������������������������������������������������������������������������������������������������������������������������������������������������");
		y++;
		Pc::gotoxy2(x, y);

		printf("����������������������������������������������������������������������������������������������������������������������������������������������������������������");

		x++;
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
		printf("��                                                                            ����				                                                              ��");
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
		printf("��                                                                            ������ȣ�� �Է����ּ���:                                                        ��");
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
		printf("<�����۸��>");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //���
		Pc::gotoxy2(156, y); printf("����"); y++;

		for (int i = 0; i < 25; i++)
		{
			Pc::gotoxy2(x, y);
			printf(" ��                                                                                                          ��");

			if (a_Hall2List->size() > i)
			{
				Pc::gotoxy2(50, y);
				printf("%-3d.�̸�:", i + 1, (*a_Hall2List)[i].Name);
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

void Hall2::HallSetting(vector<Hall2>*a_Hall2List)
{
	Hall2("�ȳ�ƴ�");
}
