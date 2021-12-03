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




	Guild Node("��Ÿ���ִ�", 0, 500, 0, 10, 5, 0, 0, 30, 50, 1, "����", 1);

	a_GdList->push_back(Node);

	Guild Node2("Ȱ����", 0, 350, 0, 10, 0, 5, 0, 15, 10, 2, "�ü�", 1);

	a_GdList->push_back(Node2);

	Guild Node3("��â����", 0, 300, 0, 100, 0, 0, 10, 5, 5, 1, "������", 1);

	a_GdList->push_back(Node3);

	Guild Node4("���ٵ弼��", 0, 250, 0, 100, 0, 0, 10, 4, 2, 1, "����", 1);

	a_GdList->push_back(Node4);

	Guild Node5("����������", 0, 400, 0, 10, 0, 5, 0, 15, 20, 2, "����", 1);

	a_GdList->push_back(Node5);

	Guild Node6("��������", 0, 350, 0, 200, 0, 0, 20, 5, 10, 1, "�渶����", 1);

	a_GdList->push_back(Node6);


	system("cls");
}

void PcGuild::PcGdPrintList(vector<PcGuild> *a_PcGdList, vector<Pc> *a_PcList)
{
	int xx = 0;
	int yy = 0;

	int sel_Count = 0; //��������

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
			printf("=====�α��� �Ͻð� ��ſ� ������ �Ǽ���======");
			getchar();
			break;
		}


		printf("<���� ���>");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN); //�����
		xx += 100;
		yy = 0;
		Pc::gotoxy2(xx, yy);
		printf("\t\t\t\t\t\t��:%d", (*a_PcList)[0].Gold);

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //���
		xx = 0;
		yy = 0;

		yy++;

		Pc::gotoxy2(xx, yy);
		printf("����������������������������������������������������������������������������������������������������������������������������������������������������������������");

		yy += 5;
		xx += 40;
		Pc::gotoxy2(xx, yy);
		printf("�Բ��� ������ ��ȣ�� �Է����ּ��� -(��3�� ���� �ֽ��ϴ�)-�ߺ��Ұ���");


		Pc::gotoxy2(xx, yy);
		//������ϸ���� 
		yy += 10;
		xx = 17;
		//�� �� ��
		//��\t                                 �� 
		Pc::gotoxy2(xx, yy);


		printf("                   ��");
		printf("\t				  ��\t                                 ��");




		yy++;
		xx = 20;
		Pc::gotoxy2(xx, yy);
		printf("����������������������������������\t  ����������������������������������\t����������������������������������");

		yy++;
		//xx++;
		Pc::gotoxy2(xx, yy);
		printf("���̸�:��Ÿ���ִ� ����:����     ��\t  ���̸�:Ȱ���� ����:�ü�         ��\t���̸�:��â���� ����:������     ��");



		yy++;
		Pc::gotoxy2(xx, yy);
		printf("��ü��:500       ����:10        ��\t  ��ü��:350    ����:10           ��\t��ü��:300      ����:100        ��");

		yy++;
		Pc::gotoxy2(xx, yy);
		printf("������:30        ���:50        ��\t  ������:15     ���:10           ��\t������:5        ���:5          ��");

		yy++;
		Pc::gotoxy2(xx, yy);
		printf("������:1         ����:1         ��\t  ������:2      ����:1            ��\t������:1        ����:1          ��");

		yy++;
		Pc::gotoxy2(xx, yy);
		printf("����:5 ��ø:0 ����:0            ��\t  ����:0 ��ø:5 ����:0            ��\t����:0 ��ø:0 ����:10           ��");

		yy++;
		Pc::gotoxy2(xx, yy);
		printf("����������������������������������\t  ����������������������������������\t����������������������������������");


		yy += 3;


		Pc::gotoxy2(xx, yy);
		printf("                ��\t                                  ��\t                                 �� ");

		yy++;
		xx = 20;
		Pc::gotoxy2(xx, yy);
		printf("����������������������������������\t  ����������������������������������\t����������������������������������");
		//�ι�°��
		yy++;
		//xx++;
		Pc::gotoxy2(xx, yy);
		printf("���̸�:���ٵ弼�� ����:����     ��\t  ���̸�:���������� ����:����     ��\t���̸�:�������� ����:�渶���� ��");



		yy++;
		Pc::gotoxy2(xx, yy);
		printf("��ü��:250        ����:100      ��\t  ��ü��:400        ����:10       ��\t��ü��:350        ����:200      ��");

		yy++;
		Pc::gotoxy2(xx, yy);
		printf("������:30         ���:50       ��\t  ������:15         ���:10       ��\t������:5          ���:5        ��");

		yy++;
		Pc::gotoxy2(xx, yy);
		printf("������:1          ����:1        ��\t  ������:2          ����:1        ��\t������:1          ����:1        ��");

		yy++;
		Pc::gotoxy2(xx, yy);
		printf("����:5 ��ø:0 ����:0            ��\t  ����:0 ��ø:5 ����:0            ��\t����:0 ��ø:0 ����:10           ��");

		yy++;
		Pc::gotoxy2(xx, yy);
		printf("����������������������������������\t  ����������������������������������\t����������������������������������");

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
		if (a_Sel == 1 && is_Warrior == true) //����
		{
			char a_Name[128];
			yy += 5;
			xx += 5;
			Pc::gotoxy2(xx, yy);
			strcpy(a_Name, "��Ÿ���ִ�");

			//const char* n, int h, int mh, int m, int mm, int str, int dex, int a_int, int a, int d, int as, const char* ch, int l
			//�Ϻη� �����ε� �̿�
			PcGuild Node(a_Name, 0, 500, 0, 10, 5, 0, 0, 30, 50, 1, "����", 1);

			a_PcGdList->push_back(Node);

			//	//save ���� 
			sel_Count++;
			is_Warrior = !is_Warrior;
			//getchar();
		//break;
		}
		else if (a_Sel == 1 && is_Warrior == false)
		{
			printf("����� �̹� �����߽��ϴ�\n");
			getchar();
		}
		if (a_Sel == 2 && is_Archer == true)//�ü�
		{
			char a_Name[128];
			yy += 5;
			xx += 5;
			Pc::gotoxy2(xx, yy);
			strcpy(a_Name, "Ȱ����");


			//�Ϻη� �����ε� �̿�
			PcGuild Node2(a_Name, 0, 350, 0, 10, 0, 5, 0, 15, 10, 2, "�ü�", 1);

			a_PcGdList->push_back(Node2);
			sel_Count++;
			//	//save ���� 
			is_Archer = !is_Archer;
		}
		else if (a_Sel == 2 && is_Archer == false)
		{
			printf("�ü��� �̹� �����߽��ϴ�\n");
			getchar();
		}
		if (a_Sel == 3 && is_Wizard == true)//������
		{
			char a_Name[128];
			yy += 5;
			xx += 5;
			Pc::gotoxy2(xx, yy);
			strcpy(a_Name, "���簣��");


			PcGuild Node3(a_Name, 0, 300, 0, 100, 0, 0, 10, 5, 5, 1, "������", 1);

			a_PcGdList->push_back(Node3);
			sel_Count++;
			//	//save ���� 
			is_Wizard = !is_Wizard;
		}
		else if (a_Sel == 3 && is_Wizard == false)
		{
			printf("������� �̹� �����߽��ϴ�\n");
			getchar();
		}
		if (a_Sel == 4 && is_Priest == true)//����
		{
			char a_Name[128];
			yy += 5;
			xx += 5;
			Pc::gotoxy2(xx, yy);
			strcpy(a_Name, "���ٵ弼��");


			PcGuild Node4(a_Name, 0, 250, 0, 100, 0, 0, 10, 4, 2, 1, "����", 1);

			a_PcGdList->push_back(Node4);
			sel_Count++;
			//	//save ���� 
			is_Priest = !is_Priest;
		}
		else if (a_Sel == 4 && is_Priest == false)
		{
			printf("������ �̹� �����߽��ϴ�\n");
			getchar();
		}
		if (a_Sel == 5 && is_Thief == true)//����
		{
			char a_Name[128];
			yy += 5;
			xx += 5;
			Pc::gotoxy2(xx, yy);
			strcpy(a_Name, "��������");


			PcGuild Node5(a_Name, 0, 400, 0, 10, 0, 5, 0, 15, 20, 2, "����", 1);

			a_PcGdList->push_back(Node5);
			sel_Count++;
			//	//save ���� 
			is_Thief = !is_Thief;
		}
		else if (a_Sel == 5 && is_Thief == false)
		{
			printf("������ �̹� �����߽��ϴ�\n");
			getchar();
		}
		if (a_Sel == 6 && is_DkWizard == true)//�渶����
		{
			char a_Name[128];
			yy += 5;
			xx += 5;
			Pc::gotoxy2(xx, yy);
			strcpy(a_Name, "��������");


			PcGuild Node6(a_Name, 0, 350, 0, 200, 0, 0, 20, 5, 10, 1, "�渶����", 1);

			a_PcGdList->push_back(Node6);

			//	//save ���� 
			sel_Count++;
			is_DkWizard = !is_DkWizard;


		}
		else if (a_Sel == 6 && is_DkWizard == false)
		{
			printf("�渶����� �̹� �����߽��ϴ�\n");
			getchar();
		}

		system("cls");
	}//while

	//printf("\n");
}



