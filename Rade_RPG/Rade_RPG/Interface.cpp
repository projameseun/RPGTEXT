#include "Interface.h"


Interface::Interface()
{
}


Interface::~Interface()
{
}


void Interface::Save(vector<Pc> *a_PcList, vector<PcGuild>*a_PcGdList, vector<Inven> *a_InItemList,int log)
{

	char InvenItem[128];
	itoa(log, InvenItem, 10);
	strcat(InvenItem, "InvenItem");
	strcat(InvenItem, ".txt");
	//플레이어 동료
	char PcGd[128];
	itoa(log, PcGd, 10);
	strcat(PcGd, "PcGd");
	strcat(PcGd, ".txt");
	//Pc(const char* n, int h, int mh, int m, int mm, int str, int dex, int a_int, int a, int d, int as ,const char* ch ,int l ,int g
	FILE *a_wF = fopen( "Char.txt", "wt");
	FILE *a_wF4 = fopen("Hall.txt", "wt");
	if (a_wF != NULL)
	{

		int PcCount = a_PcList->size();
		fprintf(a_wF, "%d\n", PcCount);

		for (int i = 0; i < a_PcList->size(); i++)
		{
			fprintf(a_wF, "%s %d %d %d %d %d %d %d %d %d %d %s %d %d\n",
				(*a_PcList)[i].Name,
				(*a_PcList)[i].Hp,
				(*a_PcList)[i].Max_Hp,
				(*a_PcList)[i].Mp,
				(*a_PcList)[i].Max_Mp,
				(*a_PcList)[i].Str,
				(*a_PcList)[i].Dex,
				(*a_PcList)[i].INT,
				(*a_PcList)[i].Attack,
				(*a_PcList)[i].Deffence,
				(*a_PcList)[i].Att_Speed,
				(*a_PcList)[i].Char_Type,
				(*a_PcList)[i].Level,
				(*a_PcList)[i].Gold

			);//
		}//for (int i = 0; i < a_PcList->size(); i++)

		fclose(a_wF);
	}//file

	FILE *a_wF2 = fopen(PcGd, "wt");
	if (a_wF2 != NULL)
	{
		int PcGdCount = a_PcGdList->size();
		fprintf(a_wF2, "%d\n", PcGdCount);

		for (int i = 0; i < a_PcGdList->size(); i++)
		{
			fprintf(a_wF2, "%s %d %d %d %d %d %d %d %d %d %d %s %d\n",
				(*a_PcGdList)[i].Name,
				(*a_PcGdList)[i].Hp,
				(*a_PcGdList)[i].Max_Hp,
				(*a_PcGdList)[i].Mp,
				(*a_PcGdList)[i].Max_Mp,
				(*a_PcGdList)[i].Str,
				(*a_PcGdList)[i].Dex,
				(*a_PcGdList)[i].INT,
				(*a_PcGdList)[i].Attack,
				(*a_PcGdList)[i].Deffence,
				(*a_PcGdList)[i].Att_Speed,
				(*a_PcGdList)[i].Char_Type,
				(*a_PcGdList)[i].Level

			);//
		}//for (int i = 0; i < a_PcList->size(); i++)

		fclose(a_wF2);
	}//if (a_wF2 != NULL)


	FILE *a_wF3 = fopen(InvenItem, "wt");
	if (a_wF3 != NULL)
	{
		int InCount = a_InItemList->size();
		fprintf(a_wF3, "%d\n", InCount);

		for (int i = 0; i < a_InItemList->size(); i++)
		{
			fprintf(a_wF3, "%s %s %d %d %d %d %d %d %d\n",
				(*a_InItemList)[i].Name,
				(*a_InItemList)[i].Char_Type,
				(*a_InItemList)[i].Str,
				(*a_InItemList)[i].Dex,
				(*a_InItemList)[i].a_Int,
				(*a_InItemList)[i].Cost,
				(*a_InItemList)[i].Star,
				(*a_InItemList)[i].Grade,
				(*a_InItemList)[i].Level

			);//
		}//for (int i = 0; i < a_PcList->size(); i++)

		fclose(a_wF3);
	}//if (a_wF2 != NULL)

	//if (a_wF4 != NULL)
	//{

	//	int PcCount = a_HallList->size();
	//	fprintf(a_wF4, "%d\n", PcCount);

	//	for (int i = 0; i < a_HallList->size(); i++)
	//	{
	//		fprintf(a_wF4, "%s \n",
	//			(*a_HallList)[i].Name);//
	//	}//for (int i = 0; i < a_PcList->size(); i++)

	//	fclose(a_wF4);
	//}//file



}
void Interface::Load(vector<Pc> *a_PcList, vector<PcGuild>*a_PcGdList, vector<Inven> *a_InItemList, int log)
{
	
	char InvenItem[128];
	itoa(log, InvenItem, 10);
	strcat(InvenItem, "InvenItem");
	strcat(InvenItem, ".txt");
	//플레이어 동료
	char PcGd[128];
	itoa(log, PcGd, 10);
	strcat(PcGd, "PcGd");
	strcat(PcGd, ".txt");

	FILE *a_rF = fopen("Char.txt", "rt");
	FILE *a_rF2 = fopen(PcGd, "rt");
	FILE *a_rF3 = fopen(InvenItem, "rt");
	FILE *a_rF4 = fopen("Hall.txt", "rt");

	if (a_rF != NULL && log == -1)
	{
		int PcCount = 0;
		fscanf(a_rF, "%d", &PcCount);
		if (PcCount > 0)
		{
			
			for (int i = 0; i < PcCount; i++)
			{
				Pc Node;
				fscanf(a_rF, "%s %d %d %d %d %d %d %d %d %d %d %s %d %d",
					Node.Name,
					&Node.Hp,
					&Node.Max_Hp,
					&Node.Mp,
					&Node.Max_Mp,
					&Node.Str,
					&Node.Dex,
					&Node.INT,
					&Node.Attack,
					&Node.Deffence,
					&Node.Att_Speed,
					&Node.Char_Type,
					&Node.Level,
					&Node.Gold

				);//
				a_PcList->push_back(Node);
			}//for (int i = 0; i < a_PcList->size(); i++)
		}//if
		fclose(a_rF);
	}//if (a_rF != NULL)



	if (a_rF2 != NULL)
	{
		int PcGdCount = 0;
		fscanf(a_rF2, "%d", &PcGdCount);
		if (PcGdCount > 0)
		{
			
			
			for (int i = 0; i < PcGdCount; i++)
			{
				PcGuild Node2;
				fscanf(a_rF2, "%s %d %d %d %d %d %d %d %d %d %d %s %d",
					Node2.Name,
					&Node2.Hp,
					&Node2.Max_Hp,
					&Node2.Mp,
					&Node2.Max_Mp,
					&Node2.Str,
					&Node2.Dex,
					&Node2.INT,
					&Node2.Attack,
					&Node2.Deffence,
					&Node2.Att_Speed,
					&Node2.Char_Type,
					&Node2.Level

				);//
				a_PcGdList->push_back(Node2);
			}//for (int i = 0; i < a_PcList->size(); i++)
		}//if
		fclose(a_rF2);
	}//if (a_rF != NULL)

	if (a_rF3 != NULL)
	{

		int InCount = 0;
		fscanf(a_rF3, "%d", &InCount);
		if (InCount > 0)
		{
			

			
			for (int i = 0; i < InCount; i++)
			{
				Inven Node3;
					
					fscanf(a_rF3, "%s %s %d %d %d %d %d %d %d",
					Node3.Name,
					Node3.Char_Type,
					&Node3.Str,
					&Node3.Dex,
					&Node3.a_Int,
					&Node3.Cost,
					&Node3.Star,
					&Node3.Grade,
					&Node3.Level

				);//
				a_InItemList->push_back(Node3);
			}//for (int i = 0; i < a_PcList->size(); i++)
		}//if
		fclose(a_rF3);
	}//if (a_rF != NULL)
	
	//if (a_rF4 != NULL && log == -1)
	//{
	//	int PcCount = 0;
	//	fscanf(a_rF4, "%d", &PcCount);
	//	if (PcCount > 0)
	//	{

	//		for (int i = 0; i < PcCount; i++)
	//		{
	//			HallOf Node;
	//			fscanf(a_rF4, "%s",
	//				Node.Name);//
	//			a_HallList->push_back(Node);
	//		}//for (int i = 0; i < a_PcList->size(); i++)
	//	}//if
	//	fclose(a_rF4);
	//}//if (a_rF != NULL)

}



