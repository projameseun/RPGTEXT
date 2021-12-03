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
		printf("¦®¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¯");
		y++;
		Pc::gotoxy2(x, y);
		printf("¦­                                                                                                                                                            ¦­");

		x++;
		Pc::gotoxy2(x, y);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_GREEN); //ÇÏ´Ã»ö
		printf("<Scence>");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //Èò»ö

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN); //³ë¶û»ö
		printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t   ¨Ó");
		printf(" %-8d", (*a_PcList)[login].Gold);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //Èò»ö

		x--;
		y++;
		Pc::gotoxy2(x, y);
		printf("¦­                                                                                                                                                            ¦­");
		y++;
		Pc::gotoxy2(x, y);
		printf("¦­  ¦®¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¯     ¦®¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¯ ¦­");
		y++;
		Pc::gotoxy2(x, y);
		printf("¦­  ¦­ÀÌ¸§:%-14s Á÷¾÷:%-9s¦­     ¦­", (*a_PcList)[login].Name, (*a_PcList)[login].Char_Type);

		x += 49;
		Pc::gotoxy2(x, y);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN); //³ë¶û»ö
		printf("<¾ÆÀÌÅÛ¸ñ·Ï>");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //Èò»ö
		x += 106;
		y = 4;
		Pc::gotoxy2(x, y);
		printf("¦­ ¦­");

		x = 0;
		y = 4;


		y++;
		Pc::gotoxy2(x, y);
		printf("¦­  ¦­Ã¼·Â:%-8d       ¸¶³ª:%-8d ¦­     ¦­										                                   ¦­ ¦­", (*a_PcList)[login].Hp, (*a_PcList)[login].Mp);
		y++;
		Pc::gotoxy2(x, y);
		printf("¦­  ¦­°ø°Ý:%-5d          ¹æ¾î:%-5d    ¦­     ¦­%-3d.ÀÌ¸§:%-13sÈû:%-3d ¹ÎÃ¸:%-3d Áö´É:%-3d ¼º±Þ:%-2d µî±Þ:%-2d·¹º§:%-3dÀü¿ëÁ÷¾÷:%-10s°¡°Ý:%-4d        ¦­ ¦­", (*a_PcList)[login].Attack, (*a_PcList)[login].Deffence, num, (*a_ItemList)[0].Name, (*a_ItemList)[0].Star, (*a_ItemList)[0].Dex, (*a_ItemList)[0].a_Int, (*a_ItemList)[0].Star, (*a_ItemList)[0].Grade, (*a_ItemList)[0].Level, (*a_ItemList)[0].Char_Type, (*a_ItemList)[0].Cost);
		y++;
		num++;
		Pc::gotoxy2(x, y);
		printf("¦­  ¦­°ø¼Ó:%-2d            ·¹º§:%-3d       ¦­     ¦­%-3d.ÀÌ¸§:%-13sÈû:%-3d ¹ÎÃ¸:%-3d Áö´É:%-3d ¼º±Þ:%-2d µî±Þ:%-2d·¹º§:%-3dÀü¿ëÁ÷¾÷:%-10s°¡°Ý:%-4d	   ¦­ ¦­", (*a_PcList)[login].Att_Speed, (*a_PcList)[login].Level, num, (*a_ItemList)[1].Name, (*a_ItemList)[1].Star, (*a_ItemList)[1].Dex, (*a_ItemList)[1].a_Int, (*a_ItemList)[1].Star, (*a_ItemList)[1].Grade, (*a_ItemList)[1].Level, (*a_ItemList)[1].Char_Type, (*a_ItemList)[1].Cost);
		y++;
		num++;
		Pc::gotoxy2(x, y);
		printf("¦­  ¦­Èû:%-4d ¹ÎÃ¸:%-4d Áö´É:%-4d       ¦­     ¦­%-3d.ÀÌ¸§:%-13sÈû:%-3d ¹ÎÃ¸:%-3d Áö´É:%-3d ¼º±Þ:%-2d µî±Þ:%-2d·¹º§:%-3dÀü¿ëÁ÷¾÷:%-10s°¡°Ý:%-4d	   ¦­ ¦­", (*a_PcList)[login].Str, (*a_PcList)[login].Dex, (*a_PcList)[login].INT, num, (*a_ItemList)[2].Name, (*a_ItemList)[2].Star, (*a_ItemList)[2].Dex, (*a_ItemList)[2].a_Int, (*a_ItemList)[2].Star, (*a_ItemList)[2].Grade, (*a_ItemList)[2].Level, (*a_ItemList)[2].Char_Type, (*a_ItemList)[2].Cost);
		y++;
		num++;
		Pc::gotoxy2(x, y);

		printf("¦­  ¦±¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦°     ¦­%-3d.ÀÌ¸§:%-13sÈû:%-3d ¹ÎÃ¸:%-3d Áö´É:%-3d ¼º±Þ:%-2d µî±Þ:%-2d·¹º§:%-3dÀü¿ëÁ÷¾÷:%-10s°¡°Ý:%-4d	   ¦­ ¦­", num, (*a_ItemList)[3].Name, (*a_ItemList)[3].Star, (*a_ItemList)[3].Dex, (*a_ItemList)[3].a_Int, (*a_ItemList)[3].Star, (*a_ItemList)[3].Grade, (*a_ItemList)[3].Level, (*a_ItemList)[3].Char_Type, (*a_ItemList)[3].Cost);
		y++;
		num++;
		Pc::gotoxy2(x, y);
		printf("¦­  ¦®¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¯     ¦­%-3d.ÀÌ¸§:%-13sÈû:%-3d ¹ÎÃ¸:%-3d Áö´É:%-3d ¼º±Þ:%-2d µî±Þ:%-2d·¹º§:%-3dÀü¿ëÁ÷¾÷:%-10s°¡°Ý:%-4d	   ¦­ ¦­", num, (*a_ItemList)[4].Name, (*a_ItemList)[4].Star, (*a_ItemList)[4].Dex, (*a_ItemList)[4].a_Int, (*a_ItemList)[4].Star, (*a_ItemList)[4].Grade, (*a_ItemList)[4].Level, (*a_ItemList)[4].Char_Type, (*a_ItemList)[4].Cost);
		y++;
		num++;
		Pc::gotoxy2(x, y);
		printf("¦­  ¦­ÀÌ¸§:%-14s Á÷¾÷:%-9s¦­     ¦­%-3d.ÀÌ¸§:%-13sÈû:%-3d ¹ÎÃ¸:%-3d Áö´É:%-3d ¼º±Þ:%-2d µî±Þ:%-2d·¹º§:%-3dÀü¿ëÁ÷¾÷:%-10s°¡°Ý:%-4d	   ¦­ ¦­", (*a_PcGdList)[0].Name, (*a_PcGdList)[0].Char_Type, num, (*a_ItemList)[5].Name, (*a_ItemList)[5].Star, (*a_ItemList)[5].Dex, (*a_ItemList)[5].a_Int, (*a_ItemList)[5].Star, (*a_ItemList)[5].Grade, (*a_ItemList)[5].Level, (*a_ItemList)[5].Char_Type, (*a_ItemList)[5].Cost);
		y++;
		num++;
		Pc::gotoxy2(x, y);
		printf("¦­  ¦­Ã¼·Â:%-8d       ¸¶³ª:%-8d ¦­     ¦­%-3d.ÀÌ¸§:%-13sÈû:%-3d ¹ÎÃ¸:%-3d Áö´É:%-3d ¼º±Þ:%-2d µî±Þ:%-2d·¹º§:%-3dÀü¿ëÁ÷¾÷:%-10s°¡°Ý:%-4d	   ¦­ ¦­", (*a_PcGdList)[0].Hp, (*a_PcGdList)[0].Mp, num, (*a_ItemList)[6].Name, (*a_ItemList)[6].Star, (*a_ItemList)[6].Dex, (*a_ItemList)[6].a_Int, (*a_ItemList)[6].Star, (*a_ItemList)[6].Grade, (*a_ItemList)[6].Level, (*a_ItemList)[6].Char_Type, (*a_ItemList)[6].Cost);
		y++;
		num++;
		Pc::gotoxy2(x, y);
		printf("¦­  ¦­°ø°Ý:%-5d          ¹æ¾î:%-5d    ¦­     ¦­%-3d.ÀÌ¸§:%-13sÈû:%-3d ¹ÎÃ¸:%-3d Áö´É:%-3d ¼º±Þ:%-2d µî±Þ:%-2d·¹º§:%-3dÀü¿ëÁ÷¾÷:%-10s°¡°Ý:%-4d        ¦­ ¦­", (*a_PcGdList)[0].Attack, (*a_PcGdList)[0].Deffence, num, (*a_ItemList)[7].Name, (*a_ItemList)[7].Star, (*a_ItemList)[7].Dex, (*a_ItemList)[7].a_Int, (*a_ItemList)[7].Star, (*a_ItemList)[7].Grade, (*a_ItemList)[7].Level, (*a_ItemList)[7].Char_Type, (*a_ItemList)[7].Cost);
		y++;
		num++;
		Pc::gotoxy2(x, y);
		printf("¦­  ¦­°ø¼Ó:%-2d            ·¹º§:%-3d       ¦­     ¦­%-3d.ÀÌ¸§:%-13sÈû:%-3d ¹ÎÃ¸:%-3d Áö´É:%-3d ¼º±Þ:%-2d µî±Þ:%-2d·¹º§:%-3dÀü¿ëÁ÷¾÷:%-10s°¡°Ý:%-4d	   ¦­ ¦­", (*a_PcGdList)[0].Att_Speed, (*a_PcGdList)[0].Level, num, (*a_ItemList)[8].Name, (*a_ItemList)[8].Star, (*a_ItemList)[8].Dex, (*a_ItemList)[8].a_Int, (*a_ItemList)[8].Star, (*a_ItemList)[8].Grade, (*a_ItemList)[8].Level, (*a_ItemList)[8].Char_Type, (*a_ItemList)[8].Cost);
		y++;
		num++;
		Pc::gotoxy2(x, y);
		printf("¦­  ¦­Èû:%-4d ¹ÎÃ¸:%-4d Áö´É:%-4d       ¦­     ¦­%-3d.ÀÌ¸§:%-13sÈû:%-3d ¹ÎÃ¸:%-3d Áö´É:%-3d ¼º±Þ:%-2d µî±Þ:%-2d·¹º§:%-3dÀü¿ëÁ÷¾÷:%-10s°¡°Ý:%-4d	   ¦­ ¦­", (*a_PcGdList)[0].Str, (*a_PcGdList)[0].Dex, (*a_PcGdList)[0].INT, num, (*a_ItemList)[9].Name, (*a_ItemList)[9].Star, (*a_ItemList)[9].Dex, (*a_ItemList)[9].a_Int, (*a_ItemList)[9].Star, (*a_ItemList)[9].Grade, (*a_ItemList)[9].Level, (*a_ItemList)[9].Char_Type, (*a_ItemList)[9].Cost);
		y++;
		num++;
		Pc::gotoxy2(x, y);

		printf("¦­  ¦±¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦°     ¦­%-3d.ÀÌ¸§:%-13sÈû:%-3d ¹ÎÃ¸:%-3d Áö´É:%-3d ¼º±Þ:%-2d µî±Þ:%-2d·¹º§:%-3dÀü¿ëÁ÷¾÷:%-10s°¡°Ý:%-4d	   ¦­ ¦­", num, (*a_ItemList)[10].Name, (*a_ItemList)[10].Star, (*a_ItemList)[10].Dex, (*a_ItemList)[10].a_Int, (*a_ItemList)[10].Star, (*a_ItemList)[10].Grade, (*a_ItemList)[10].Level, (*a_ItemList)[10].Char_Type, (*a_ItemList)[10].Cost);
		y++;
		num++;
		Pc::gotoxy2(x, y);
		printf("¦­  ¦®¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¯     ¦­%-3d.ÀÌ¸§:%-13sÈû:%-3d ¹ÎÃ¸:%-3d Áö´É:%-3d ¼º±Þ:%-2d µî±Þ:%-2d·¹º§:%-3dÀü¿ëÁ÷¾÷:%-10s°¡°Ý:%-4d	   ¦­ ¦­", num, (*a_ItemList)[11].Name, (*a_ItemList)[11].Star, (*a_ItemList)[11].Dex, (*a_ItemList)[11].a_Int, (*a_ItemList)[11].Star, (*a_ItemList)[11].Grade, (*a_ItemList)[11].Level, (*a_ItemList)[11].Char_Type, (*a_ItemList)[11].Cost);
		y++;
		num++;
		Pc::gotoxy2(x, y);
		printf("¦­  ¦­ÀÌ¸§:%-14s Á÷¾÷:%-9s¦­     ¦­%-3d.ÀÌ¸§:%-13sÈû:%-3d ¹ÎÃ¸:%-3d Áö´É:%-3d ¼º±Þ:%-2d µî±Þ:%-2d·¹º§:%-3dÀü¿ëÁ÷¾÷:%-10s°¡°Ý:%-4d	   ¦­ ¦­", (*a_PcGdList)[1].Name, (*a_PcGdList)[1].Char_Type, num, (*a_ItemList)[12].Name, (*a_ItemList)[12].Star, (*a_ItemList)[12].Dex, (*a_ItemList)[12].a_Int, (*a_ItemList)[12].Star, (*a_ItemList)[12].Grade, (*a_ItemList)[12].Level, (*a_ItemList)[12].Char_Type, (*a_ItemList)[12].Cost);
		y++;
		num++;
		Pc::gotoxy2(x, y);
		printf("¦­  ¦­Ã¼·Â:%-8d       ¸¶³ª:%-8d ¦­     ¦­%-3d.ÀÌ¸§:%-13sÈû:%-3d ¹ÎÃ¸:%-3d Áö´É:%-3d ¼º±Þ:%-2d µî±Þ:%-2d·¹º§:%-3dÀü¿ëÁ÷¾÷:%-10s°¡°Ý:%-4d	   ¦­ ¦­", (*a_PcGdList)[1].Hp, (*a_PcGdList)[1].Mp, num, (*a_ItemList)[13].Name, (*a_ItemList)[13].Star, (*a_ItemList)[13].Dex, (*a_ItemList)[13].a_Int, (*a_ItemList)[13].Star, (*a_ItemList)[13].Grade, (*a_ItemList)[13].Level, (*a_ItemList)[13].Char_Type, (*a_ItemList)[13].Cost);
		y++;
		num++;
		Pc::gotoxy2(x, y);
		printf("¦­  ¦­°ø°Ý:%-5d          ¹æ¾î:%-5d    ¦­     ¦­					                                                                   ¦­ ¦­", (*a_PcGdList)[1].Attack, (*a_PcGdList)[1].Deffence);
		y++;
		num++;
		Pc::gotoxy2(x, y);
		printf("¦­  ¦­°ø¼Ó:%-2d            ·¹º§:%-3d       ¦­     ¦­						                                                           ¦­ ¦­", (*a_PcGdList)[1].Att_Speed, (*a_PcGdList)[1].Level);
		y++;
		num++;
		Pc::gotoxy2(x, y);
		printf("¦­  ¦­Èû:%-4d ¹ÎÃ¸:%-4d Áö´É:%-4d       ¦­     ¦­						                                                           ¦­ ¦­", (*a_PcGdList)[1].Str, (*a_PcGdList)[1].Dex, (*a_PcGdList)[1].INT);
		y++;
		num++;
		Pc::gotoxy2(x, y);

		printf("¦­  ¦±¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦°     ¦­				                                                                           ¦­ ¦­");
		y++;
		Pc::gotoxy2(x, y);
		printf("¦­  ¦®¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¯     ¦­			                                                                                   ¦­ ¦­");
		y++;
		Pc::gotoxy2(x, y);
		printf("¦­  ¦­ÀÌ¸§:%-14s Á÷¾÷:%-9s¦­     ¦­		                                                                                           ¦­ ¦­", (*a_PcGdList)[2].Name, (*a_PcGdList)[2].Char_Type);
		y++;
		Pc::gotoxy2(x, y);
		printf("¦­  ¦­Ã¼·Â:%-8d       ¸¶³ª:%-8d ¦­     ¦­							                                                       ¦­ ¦­", (*a_PcGdList)[2].Hp, (*a_PcGdList)[2].Mp);
		y++;
		Pc::gotoxy2(x, y);
		printf("¦­  ¦­°ø°Ý:%-5d          ¹æ¾î:%-5d    ¦­     ¦­					                                                                   ¦­ ¦­", (*a_PcGdList)[2].Attack, (*a_PcGdList)[2].Deffence);
		y++;
		Pc::gotoxy2(x, y);
		printf("¦­  ¦­°ø¼Ó:%-2d            ·¹º§:%-3d       ¦­     ¦­						                                                           ¦­ ¦­", (*a_PcGdList)[2].Att_Speed, (*a_PcGdList)[2].Level);
		y++;
		Pc::gotoxy2(x, y);
		printf("¦­  ¦­Èû:%-4d ¹ÎÃ¸:%-4d Áö´É:%-4d       ¦­     ¦­						                                                           ¦­ ¦­", (*a_PcGdList)[2].Str, (*a_PcGdList)[2].Dex, (*a_PcGdList)[2].INT);
		y++;
		Pc::gotoxy2(x, y);

		printf("¦­  ¦±¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦°     ¦±¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦° ¦­");
		y++;
		Pc::gotoxy2(x, y);

		printf("¦­                                                                                                                                                            ¦­");
		y++;
		Pc::gotoxy2(x, y);
		printf("¦­                                                                                                                                                            ¦­");
		y++;
		Pc::gotoxy2(x, y);
		printf("¦­                                                                                                                                                            ¦­");
		Pc::gotoxy2(x, y);
		printf("¦±¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦°");
		y++;
		Pc::gotoxy2(x, y);
		printf("¦®¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¯¦®¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¯");

		x++;
		Pc::gotoxy2(x, y);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_INTENSITY | FOREGROUND_RED); //ÇÏ´Ã»ö
		printf("<SystemPrint>");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //Èò»ö

		x += 79;
		Pc::gotoxy2(x, y);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN); //³ë¶û»ö
		printf("<Menu>");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //Èò»ö
		x = 0;
		y++;
		Pc::gotoxy2(x, y);
		printf("¦­                                                                            ¦­¦­");
		x += 100;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_GREEN); //ÇÏ´Ã»ö
		printf("Please Select a Menu.                                                       ");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
			FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //Èò»ö

		x += 160;
		Pc::gotoxy2(x, y);
		printf("¦­");
		x = 0;
		y++;
		Pc::gotoxy2(x, y);
		printf("¦­                                                                            ¦­¦­  1.Buy																	  ¦­");
		y++;
		Pc::gotoxy2(x, y);
		printf("¦­                                                                            ¦­¦­  2.Sell                                                                    ¦­");
		y++;
		Pc::gotoxy2(x, y);
		printf("¦­                                                                            ¦­¦­  3.EXIT                                                                    ¦­");
		y++;
		Pc::gotoxy2(x, y);
		printf("¦­                                                                            ¦­¦­                                                                            ¦­");
		y++;
		Pc::gotoxy2(x, y);
		printf("¦­                                                                            ¦­¦­                                                                            ¦­");
		y++;
		Pc::gotoxy2(x, y);
		printf("¦­                                                                            ¦­¦­                                                                            ¦­");
		y++;
		Pc::gotoxy2(x, y);
		printf("¦­                                                                            ¦­¦­                                                                            ¦­");
		y++;
		Pc::gotoxy2(x, y);
		printf("¦­                                                                            ¦­¦­                                                                            ¦­");
		y++;
		Pc::gotoxy2(x, y);
		printf("¦­                                                                            ¦­¦­                                                                            ¦­");
		y++;
		Pc::gotoxy2(x, y);
		printf("¦­                                                                            ¦­¦­                                                                            ¦­");
		y++;
		Pc::gotoxy2(x, y);
		printf("¦­                                                                            ¦­¦­  ¹øÈ£¸¦ ÀÔ·ÂÇØÁÖ¼¼¿ä:                                                      ¦­");
		y++;
		Pc::gotoxy2(x, y);
		printf("¦­                                                                            ¦­¦­                                                                            ¦­");
		y++;
		Pc::gotoxy2(x, y);
		printf("¦±¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦°¦±¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦°");




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
				printf("¦®¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¯");
				y++;
				Pc::gotoxy2(x, y);
				printf("¦­                                                                                                                                                            ¦­");

				x++;
				Pc::gotoxy2(x, y);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
					FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_GREEN); //ÇÏ´Ã»ö
				printf("<Scence>");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
					FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //Èò»ö

				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
					FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN); //³ë¶û»ö
				printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t   ¨Ó");
				printf(" %-8d", (*a_PcList)[login].Gold);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
					FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //Èò»ö

				x--;
				y++;
				Pc::gotoxy2(x, y);
				printf("¦­                                                                                                                                                            ¦­");
				y++;
				Pc::gotoxy2(x, y);
				printf("¦­  ¦®¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¯     ¦®¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¯ ¦­");
				y++;
				Pc::gotoxy2(x, y);
				printf("¦­  ¦­ÀÌ¸§:%-14s Á÷¾÷:%-9s¦­     ¦­", (*a_PcList)[login].Name, (*a_PcList)[login].Char_Type);

				x += 49;
				Pc::gotoxy2(x, y);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
					FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN); //³ë¶û»ö
				printf("<¾ÆÀÌÅÛ¸ñ·Ï>");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
					FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //Èò»ö
				x += 106;
				y = 4;
				Pc::gotoxy2(x, y);
				printf("¦­ ¦­");

				x = 0;
				y = 4;


				y++;
				Pc::gotoxy2(x, y);
				printf("¦­  ¦­Ã¼·Â:%-8d       ¸¶³ª:%-8d ¦­     ¦­										                                   ¦­ ¦­", (*a_PcList)[login].Max_Hp, (*a_PcList)[login].Max_Mp);
				y++;
				Pc::gotoxy2(x, y);
				printf("¦­  ¦­°ø°Ý:%-5d          ¹æ¾î:%-5d    ¦­     ¦­%-3d.ÀÌ¸§:%-13sÈû:%-3d ¹ÎÃ¸:%-3d Áö´É:%-3d ¼º±Þ:%-2d µî±Þ:%-2d·¹º§:%-3dÀü¿ëÁ÷¾÷:%-10s°¡°Ý:%-4d        ¦­ ¦­", (*a_PcList)[login].Attack, (*a_PcList)[login].Deffence, num, (*a_ItemList)[0].Name, (*a_ItemList)[0].Star, (*a_ItemList)[0].Dex, (*a_ItemList)[0].a_Int, (*a_ItemList)[0].Star, (*a_ItemList)[0].Grade, (*a_ItemList)[0].Level, (*a_ItemList)[0].Char_Type, (*a_ItemList)[0].Cost);
				y++;
				num++;
				Pc::gotoxy2(x, y);
				printf("¦­  ¦­°ø¼Ó:%-2d            ·¹º§:%-3d       ¦­     ¦­%-3d.ÀÌ¸§:%-13sÈû:%-3d ¹ÎÃ¸:%-3d Áö´É:%-3d ¼º±Þ:%-2d µî±Þ:%-2d·¹º§:%-3dÀü¿ëÁ÷¾÷:%-10s°¡°Ý:%-4d	   ¦­ ¦­", (*a_PcList)[login].Att_Speed, (*a_PcList)[login].Level, num, (*a_ItemList)[1].Name, (*a_ItemList)[1].Star, (*a_ItemList)[1].Dex, (*a_ItemList)[1].a_Int, (*a_ItemList)[1].Star, (*a_ItemList)[1].Grade, (*a_ItemList)[1].Level, (*a_ItemList)[1].Char_Type, (*a_ItemList)[1].Cost);
				y++;
				num++;
				Pc::gotoxy2(x, y);
				printf("¦­  ¦­Èû:%-4d ¹ÎÃ¸:%-4d Áö´É:%-4d       ¦­     ¦­%-3d.ÀÌ¸§:%-13sÈû:%-3d ¹ÎÃ¸:%-3d Áö´É:%-3d ¼º±Þ:%-2d µî±Þ:%-2d·¹º§:%-3dÀü¿ëÁ÷¾÷:%-10s°¡°Ý:%-4d	   ¦­ ¦­", (*a_PcList)[login].Str, (*a_PcList)[login].Dex, (*a_PcList)[login].INT, num, (*a_ItemList)[2].Name, (*a_ItemList)[2].Star, (*a_ItemList)[2].Dex, (*a_ItemList)[2].a_Int, (*a_ItemList)[2].Star, (*a_ItemList)[2].Grade, (*a_ItemList)[2].Level, (*a_ItemList)[2].Char_Type, (*a_ItemList)[2].Cost);
				y++;
				num++;
				Pc::gotoxy2(x, y);

				printf("¦­  ¦±¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦°     ¦­%-3d.ÀÌ¸§:%-13sÈû:%-3d ¹ÎÃ¸:%-3d Áö´É:%-3d ¼º±Þ:%-2d µî±Þ:%-2d·¹º§:%-3dÀü¿ëÁ÷¾÷:%-10s°¡°Ý:%-4d	   ¦­ ¦­", num, (*a_ItemList)[3].Name, (*a_ItemList)[3].Star, (*a_ItemList)[3].Dex, (*a_ItemList)[3].a_Int, (*a_ItemList)[3].Star, (*a_ItemList)[3].Grade, (*a_ItemList)[3].Level, (*a_ItemList)[3].Char_Type, (*a_ItemList)[3].Cost);
				y++;
				num++;
				Pc::gotoxy2(x, y);
				printf("¦­  ¦®¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¯     ¦­%-3d.ÀÌ¸§:%-13sÈû:%-3d ¹ÎÃ¸:%-3d Áö´É:%-3d ¼º±Þ:%-2d µî±Þ:%-2d·¹º§:%-3dÀü¿ëÁ÷¾÷:%-10s°¡°Ý:%-4d	   ¦­ ¦­", num, (*a_ItemList)[4].Name, (*a_ItemList)[4].Star, (*a_ItemList)[4].Dex, (*a_ItemList)[4].a_Int, (*a_ItemList)[4].Star, (*a_ItemList)[4].Grade, (*a_ItemList)[4].Level, (*a_ItemList)[4].Char_Type, (*a_ItemList)[4].Cost);
				y++;
				num++;
				Pc::gotoxy2(x, y);
				printf("¦­  ¦­ÀÌ¸§:%-14s Á÷¾÷:%-9s¦­     ¦­%-3d.ÀÌ¸§:%-13sÈû:%-3d ¹ÎÃ¸:%-3d Áö´É:%-3d ¼º±Þ:%-2d µî±Þ:%-2d·¹º§:%-3dÀü¿ëÁ÷¾÷:%-10s°¡°Ý:%-4d	   ¦­ ¦­", (*a_PcGdList)[0].Name, (*a_PcGdList)[0].Char_Type, num, (*a_ItemList)[5].Name, (*a_ItemList)[5].Star, (*a_ItemList)[5].Dex, (*a_ItemList)[5].a_Int, (*a_ItemList)[5].Star, (*a_ItemList)[5].Grade, (*a_ItemList)[5].Level, (*a_ItemList)[5].Char_Type, (*a_ItemList)[5].Cost);
				y++;
				num++;
				Pc::gotoxy2(x, y);
				printf("¦­  ¦­Ã¼·Â:%-8d       ¸¶³ª:%-8d ¦­     ¦­%-3d.ÀÌ¸§:%-13sÈû:%-3d ¹ÎÃ¸:%-3d Áö´É:%-3d ¼º±Þ:%-2d µî±Þ:%-2d·¹º§:%-3dÀü¿ëÁ÷¾÷:%-10s°¡°Ý:%-4d	   ¦­ ¦­", (*a_PcGdList)[0].Hp, (*a_PcGdList)[0].Mp, num, (*a_ItemList)[6].Name, (*a_ItemList)[6].Star, (*a_ItemList)[6].Dex, (*a_ItemList)[6].a_Int, (*a_ItemList)[6].Star, (*a_ItemList)[6].Grade, (*a_ItemList)[6].Level, (*a_ItemList)[6].Char_Type, (*a_ItemList)[6].Cost);
				y++;
				num++;
				Pc::gotoxy2(x, y);
				printf("¦­  ¦­°ø°Ý:%-5d          ¹æ¾î:%-5d    ¦­     ¦­%-3d.ÀÌ¸§:%-13sÈû:%-3d ¹ÎÃ¸:%-3d Áö´É:%-3d ¼º±Þ:%-2d µî±Þ:%-2d·¹º§:%-3dÀü¿ëÁ÷¾÷:%-10s°¡°Ý:%-4d        ¦­ ¦­", (*a_PcGdList)[0].Attack, (*a_PcGdList)[0].Deffence, num, (*a_ItemList)[7].Name, (*a_ItemList)[7].Star, (*a_ItemList)[7].Dex, (*a_ItemList)[7].a_Int, (*a_ItemList)[7].Star, (*a_ItemList)[7].Grade, (*a_ItemList)[7].Level, (*a_ItemList)[7].Char_Type, (*a_ItemList)[7].Cost);
				y++;
				num++;
				Pc::gotoxy2(x, y);
				printf("¦­  ¦­°ø¼Ó:%-2d            ·¹º§:%-3d       ¦­     ¦­%-3d.ÀÌ¸§:%-13sÈû:%-3d ¹ÎÃ¸:%-3d Áö´É:%-3d ¼º±Þ:%-2d µî±Þ:%-2d·¹º§:%-3dÀü¿ëÁ÷¾÷:%-10s°¡°Ý:%-4d	   ¦­ ¦­", (*a_PcGdList)[0].Att_Speed, (*a_PcGdList)[0].Level, num, (*a_ItemList)[8].Name, (*a_ItemList)[8].Star, (*a_ItemList)[8].Dex, (*a_ItemList)[8].a_Int, (*a_ItemList)[8].Star, (*a_ItemList)[8].Grade, (*a_ItemList)[8].Level, (*a_ItemList)[8].Char_Type, (*a_ItemList)[8].Cost);
				y++;
				num++;
				Pc::gotoxy2(x, y);
				printf("¦­  ¦­Èû:%-4d ¹ÎÃ¸:%-4d Áö´É:%-4d       ¦­     ¦­%-3d.ÀÌ¸§:%-13sÈû:%-3d ¹ÎÃ¸:%-3d Áö´É:%-3d ¼º±Þ:%-2d µî±Þ:%-2d·¹º§:%-3dÀü¿ëÁ÷¾÷:%-10s°¡°Ý:%-4d	   ¦­ ¦­", (*a_PcGdList)[0].Str, (*a_PcGdList)[0].Dex, (*a_PcGdList)[0].INT, num, (*a_ItemList)[9].Name, (*a_ItemList)[9].Star, (*a_ItemList)[9].Dex, (*a_ItemList)[9].a_Int, (*a_ItemList)[9].Star, (*a_ItemList)[9].Grade, (*a_ItemList)[9].Level, (*a_ItemList)[9].Char_Type, (*a_ItemList)[9].Cost);
				y++;
				num++;
				Pc::gotoxy2(x, y);

				printf("¦­  ¦±¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦°     ¦­%-3d.ÀÌ¸§:%-13sÈû:%-3d ¹ÎÃ¸:%-3d Áö´É:%-3d ¼º±Þ:%-2d µî±Þ:%-2d·¹º§:%-3dÀü¿ëÁ÷¾÷:%-10s°¡°Ý:%-4d	   ¦­ ¦­", num, (*a_ItemList)[10].Name, (*a_ItemList)[10].Star, (*a_ItemList)[10].Dex, (*a_ItemList)[10].a_Int, (*a_ItemList)[10].Star, (*a_ItemList)[10].Grade, (*a_ItemList)[10].Level, (*a_ItemList)[10].Char_Type, (*a_ItemList)[10].Cost);
				y++;
				num++;
				Pc::gotoxy2(x, y);
				printf("¦­  ¦®¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¯     ¦­%-3d.ÀÌ¸§:%-13sÈû:%-3d ¹ÎÃ¸:%-3d Áö´É:%-3d ¼º±Þ:%-2d µî±Þ:%-2d·¹º§:%-3dÀü¿ëÁ÷¾÷:%-10s°¡°Ý:%-4d	   ¦­ ¦­", num, (*a_ItemList)[11].Name, (*a_ItemList)[11].Star, (*a_ItemList)[11].Dex, (*a_ItemList)[11].a_Int, (*a_ItemList)[11].Star, (*a_ItemList)[11].Grade, (*a_ItemList)[11].Level, (*a_ItemList)[11].Char_Type, (*a_ItemList)[11].Cost);
				y++;
				num++;
				Pc::gotoxy2(x, y);
				printf("¦­  ¦­ÀÌ¸§:%-14s Á÷¾÷:%-9s¦­     ¦­%-3d.ÀÌ¸§:%-13sÈû:%-3d ¹ÎÃ¸:%-3d Áö´É:%-3d ¼º±Þ:%-2d µî±Þ:%-2d·¹º§:%-3dÀü¿ëÁ÷¾÷:%-10s°¡°Ý:%-4d	   ¦­ ¦­", (*a_PcGdList)[1].Name, (*a_PcGdList)[1].Char_Type, num, (*a_ItemList)[12].Name, (*a_ItemList)[12].Star, (*a_ItemList)[12].Dex, (*a_ItemList)[12].a_Int, (*a_ItemList)[12].Star, (*a_ItemList)[12].Grade, (*a_ItemList)[12].Level, (*a_ItemList)[12].Char_Type, (*a_ItemList)[12].Cost);
				y++;
				num++;
				Pc::gotoxy2(x, y);
				printf("¦­  ¦­Ã¼·Â:%-8d       ¸¶³ª:%-8d ¦­     ¦­%-3d.ÀÌ¸§:%-13sÈû:%-3d ¹ÎÃ¸:%-3d Áö´É:%-3d ¼º±Þ:%-2d µî±Þ:%-2d·¹º§:%-3dÀü¿ëÁ÷¾÷:%-10s°¡°Ý:%-4d	   ¦­ ¦­", (*a_PcGdList)[1].Hp, (*a_PcGdList)[1].Mp, num, (*a_ItemList)[13].Name, (*a_ItemList)[13].Star, (*a_ItemList)[13].Dex, (*a_ItemList)[13].a_Int, (*a_ItemList)[13].Star, (*a_ItemList)[13].Grade, (*a_ItemList)[13].Level, (*a_ItemList)[13].Char_Type, (*a_ItemList)[13].Cost);
				y++;
				num++;
				Pc::gotoxy2(x, y);
				printf("¦­  ¦­°ø°Ý:%-5d          ¹æ¾î:%-5d    ¦­     ¦­					                                                                   ¦­ ¦­", (*a_PcGdList)[1].Attack, (*a_PcGdList)[1].Deffence);
				y++;
				num++;
				Pc::gotoxy2(x, y);
				printf("¦­  ¦­°ø¼Ó:%-2d            ·¹º§:%-3d       ¦­     ¦­						                                                           ¦­ ¦­", (*a_PcGdList)[1].Att_Speed, (*a_PcGdList)[1].Level);
				y++;
				num++;
				Pc::gotoxy2(x, y);
				printf("¦­  ¦­Èû:%-4d ¹ÎÃ¸:%-4d Áö´É:%-4d       ¦­     ¦­						                                                           ¦­ ¦­", (*a_PcGdList)[1].Str, (*a_PcGdList)[1].Dex, (*a_PcGdList)[1].INT);
				y++;
				num++;
				Pc::gotoxy2(x, y);

				printf("¦­  ¦±¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦°     ¦­				                                                                           ¦­ ¦­");
				y++;
				Pc::gotoxy2(x, y);
				printf("¦­  ¦®¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¯     ¦­			                                                                                   ¦­ ¦­");
				y++;
				Pc::gotoxy2(x, y);
				printf("¦­  ¦­ÀÌ¸§:%-14s Á÷¾÷:%-9s¦­     ¦­		                                                                                           ¦­ ¦­", (*a_PcGdList)[2].Name, (*a_PcGdList)[2].Char_Type);
				y++;
				Pc::gotoxy2(x, y);
				printf("¦­  ¦­Ã¼·Â:%-8d       ¸¶³ª:%-8d ¦­     ¦­							                                                       ¦­ ¦­", (*a_PcGdList)[2].Hp, (*a_PcGdList)[2].Mp);
				y++;
				Pc::gotoxy2(x, y);
				printf("¦­  ¦­°ø°Ý:%-5d          ¹æ¾î:%-5d    ¦­     ¦­					                                                                   ¦­ ¦­", (*a_PcGdList)[2].Attack, (*a_PcGdList)[2].Deffence);
				y++;
				Pc::gotoxy2(x, y);
				printf("¦­  ¦­°ø¼Ó:%-2d            ·¹º§:%-3d       ¦­     ¦­						                                                           ¦­ ¦­", (*a_PcGdList)[2].Att_Speed, (*a_PcGdList)[2].Level);
				y++;
				Pc::gotoxy2(x, y);
				printf("¦­  ¦­Èû:%-4d ¹ÎÃ¸:%-4d Áö´É:%-4d       ¦­     ¦­						                                                           ¦­ ¦­", (*a_PcGdList)[2].Str, (*a_PcGdList)[2].Dex, (*a_PcGdList)[2].INT);
				y++;
				Pc::gotoxy2(x, y);

				printf("¦­  ¦±¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦°     ¦±¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦° ¦­");
				y++;
				Pc::gotoxy2(x, y);

				printf("¦­                                                                                                                                                            ¦­");
				y++;
				Pc::gotoxy2(x, y);
				printf("¦­                                                                                                                                                            ¦­");
				y++;
				Pc::gotoxy2(x, y);
				printf("¦­                                                                                                                                                            ¦­");
				Pc::gotoxy2(x, y);
				printf("¦±¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦°");
				y++;
				Pc::gotoxy2(x, y);
				printf("¦®¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¯¦®¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¯");

				x++;
				Pc::gotoxy2(x, y);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
					FOREGROUND_INTENSITY | FOREGROUND_RED); //ÇÏ´Ã»ö
				printf("<SystemPrint>");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
					FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //Èò»ö

				x += 79;
				Pc::gotoxy2(x, y);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
					FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN); //³ë¶û»ö
				printf("<Menu>");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
					FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //Èò»ö
				x = 0;
				y++;
				Pc::gotoxy2(x, y);
				printf("¦­                                                                            ¦­¦­");
				x += 100;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
					FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_GREEN); //ÇÏ´Ã»ö
				printf("Please Select a Menu.                                                       ");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
					FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //Èò»ö

				x += 160;
				Pc::gotoxy2(x, y);
				printf("¦­");
				x = 0;
				y++;
				Pc::gotoxy2(x, y);
				printf("¦­                                                                            ¦­¦­  																	      ¦­");
				y++;
				Pc::gotoxy2(x, y);
				printf("¦­                                                                            ¦­¦­                                                                            ¦­");
				y++;
				Pc::gotoxy2(x, y);
				printf("¦­                                                                            ¦­¦­                                                                            ¦­");
				y++;
				Pc::gotoxy2(x, y);
				printf("¦­                                                                            ¦­¦­                                                                            ¦­");
				y++;
				Pc::gotoxy2(x, y);
				printf("¦­                                                                            ¦­¦­                                                                            ¦­");
				y++;
				Pc::gotoxy2(x, y);
				printf("¦­                                                                            ¦­¦­                                                                            ¦­");
				y++;
				Pc::gotoxy2(x, y);
				printf("¦­                                                                            ¦­¦­                                                                            ¦­");
				y++;
				Pc::gotoxy2(x, y);
				printf("¦­                                                                            ¦­¦­                                                                            ¦­");
				y++;
				Pc::gotoxy2(x, y);
				printf("¦­                                                                            ¦­¦­                                                                            ¦­");
				y++;
				Pc::gotoxy2(x, y);
				printf("¦­                                                                            ¦­¦­                                                                            ¦­");
				y++;
				Pc::gotoxy2(x, y);
				printf("¦­                                                                            ¦­¦­  »ç½Ç¾ÆÀÌÅÛÀÇ ¹øÈ£¸¦ ÀÔ·ÂÇØÁÖ¼¼¿ä:                                         ¦­");
				y++;
				Pc::gotoxy2(x, y);
				printf("¦­                                                                            ¦­¦­                                                                            ¦­");
				y++;
				Pc::gotoxy2(x, y);
				printf("¦±¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦°¦±¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦°");



				int by_Sel = 0;
				y = 46;
				x += 119;
				Pc::gotoxy2(x, y);
				scanf_s("%d", &by_Sel);
				getchar();

				by_Sel--;

				if ((*a_PcList)[login].Gold < (*a_ItemList)[by_Sel].Cost)
				{
					printf("±Ý¾×ÀÌ ºÎÁ·ÇÕ´Ï´Ù");

					getchar();
					break;
				}
				if ((*a_PcList)[login].Level < (*a_ItemList)[by_Sel].Level)
				{
					printf("·¹º§ÀÌ ºÎÁ·ÇÕ´Ï´Ù");
					getchar();
					break;

				}
				if (strcmp((*a_PcList)[login].Char_Type, (*a_ItemList)[by_Sel].Char_Type) != 0)
				{
					printf("Á÷¾÷ÀÌ ´Ù¸¨´Ï´Ù");
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
				printf("¦®¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¯");
				y++;
				Pc::gotoxy2(x, y);
				printf("¦­                                                                                                                                                            ¦­");

				x++;
				Pc::gotoxy2(x, y);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
					FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_GREEN); //ÇÏ´Ã»ö
				printf("<Scence>");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
					FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //Èò»ö

				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
					FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN); //³ë¶û»ö
				printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t   ¨Ó");
				printf(" %-8d", (*a_PcList)[login].Gold);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
					FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //Èò»ö

				x--;
				y++;
				Pc::gotoxy2(x, y);
				printf("¦­                                                                                                                                                            ¦­");
				y++;
				Pc::gotoxy2(x, y);
				printf("¦­  ¦®¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¯                                                                                                                    ¦­");
				y++;
				Pc::gotoxy2(x, y);
				printf("¦­  ¦­ÀÌ¸§:%-14s Á÷¾÷:%-9s¦­                                                                                                                    ¦­", (*a_PcList)[login].Name, (*a_PcList)[login].Char_Type);

				y++;
				Pc::gotoxy2(x, y);
				printf("¦­  ¦­Ã¼·Â:%-8d       ¸¶³ª:%-8d ¦­                                                                                                                    ¦­", (*a_PcList)[login].Hp, (*a_PcList)[login].Mp);
				y++;
				Pc::gotoxy2(x, y);
				printf("¦­  ¦­°ø°Ý:%-5d          ¹æ¾î:%-5d    ¦­                                                                                                                    ¦­", (*a_PcList)[login].Attack, (*a_PcList)[login].Deffence);
				y++;
				Pc::gotoxy2(x, y);
				printf("¦­  ¦­°ø¼Ó:%-2d            ·¹º§:%-3d       ¦­			                                                                                              ¦­", (*a_PcList)[login].Att_Speed, (*a_PcList)[login].Level);
				y++;
				Pc::gotoxy2(x, y);
				printf("¦­  ¦­Èû:%-4d ¹ÎÃ¸:%-4d Áö´É:%-4d       ¦­                                                                                                                    ¦­", (*a_PcList)[login].Str, (*a_PcList)[login].Dex, (*a_PcList)[login].INT);
				y++;
				Pc::gotoxy2(x, y);

				printf("¦­  ¦±¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦°                                                                                                                    ¦­");
				y++;
				Pc::gotoxy2(x, y);
				printf("¦­  ¦®¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¯                                                                                                                    ¦­");
				y++;
				Pc::gotoxy2(x, y);
				printf("¦­  ¦­ÀÌ¸§:%-14s Á÷¾÷:%-9s¦­                                                                                                                    ¦­", (*a_PcGdList)[0].Name, (*a_PcGdList)[0].Char_Type);
				y++;
				Pc::gotoxy2(x, y);
				printf("¦­  ¦­Ã¼·Â:%-8d       ¸¶³ª:%-8d ¦­                                                                                                                    ¦­", (*a_PcGdList)[0].Hp, (*a_PcGdList)[0].Mp);
				y++;
				Pc::gotoxy2(x, y);
				printf("¦­  ¦­°ø°Ý:%-5d          ¹æ¾î:%-5d    ¦­                                                                                                                    ¦­", (*a_PcGdList)[0].Attack, (*a_PcGdList)[0].Deffence);
				y++;
				Pc::gotoxy2(x, y);
				printf("¦­  ¦­°ø¼Ó:%-2d            ·¹º§:%-3d       ¦­			                                                                                              ¦­", (*a_PcGdList)[0].Att_Speed, (*a_PcGdList)[0].Level);
				y++;
				Pc::gotoxy2(x, y);
				printf("¦­  ¦­Èû:%-4d ¹ÎÃ¸:%-4d Áö´É:%-4d       ¦­                                                                                                                    ¦­", (*a_PcGdList)[0].Str, (*a_PcGdList)[0].Dex, (*a_PcGdList)[0].INT);
				y++;
				Pc::gotoxy2(x, y);

				printf("¦­  ¦±¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦°                                                                                                                    ¦­");
				y++;
				Pc::gotoxy2(x, y);
				printf("¦­  ¦®¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¯                                                                                                                    ¦­");
				y++;
				Pc::gotoxy2(x, y);
				printf("¦­  ¦­ÀÌ¸§:%-14s Á÷¾÷:%-9s¦­                                                                                                                    ¦­", (*a_PcGdList)[1].Name, (*a_PcGdList)[1].Char_Type);
				y++;
				Pc::gotoxy2(x, y);
				printf("¦­  ¦­Ã¼·Â:%-8d       ¸¶³ª:%-8d ¦­                                                                                                                    ¦­", (*a_PcGdList)[1].Hp, (*a_PcGdList)[1].Mp);
				y++;
				Pc::gotoxy2(x, y);
				printf("¦­  ¦­°ø°Ý:%-5d          ¹æ¾î:%-5d    ¦­                                                                                                                    ¦­", (*a_PcGdList)[1].Attack, (*a_PcGdList)[1].Deffence);
				y++;
				Pc::gotoxy2(x, y);
				printf("¦­  ¦­°ø¼Ó:%-2d            ·¹º§:%-3d       ¦­			                                                                                              ¦­", (*a_PcGdList)[1].Att_Speed, (*a_PcGdList)[1].Level);
				y++;
				Pc::gotoxy2(x, y);
				printf("¦­  ¦­Èû:%-4d ¹ÎÃ¸:%-4d Áö´É:%-4d       ¦­                                                                                                                    ¦­", (*a_PcGdList)[1].Str, (*a_PcGdList)[1].Dex, (*a_PcGdList)[1].INT);
				y++;
				Pc::gotoxy2(x, y);

				printf("¦­  ¦±¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦°                                                                                                                    ¦­");
				y++;
				Pc::gotoxy2(x, y);
				printf("¦­  ¦®¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¯                                                                                                                    ¦­");
				y++;
				Pc::gotoxy2(x, y);
				printf("¦­  ¦­ÀÌ¸§:%-14s Á÷¾÷:%-9s¦­                                                                                                                    ¦­", (*a_PcGdList)[2].Name, (*a_PcGdList)[2].Char_Type);
				y++;
				Pc::gotoxy2(x, y);
				printf("¦­  ¦­Ã¼·Â:%-8d       ¸¶³ª:%-8d ¦­                                                                                                                    ¦­", (*a_PcGdList)[2].Hp, (*a_PcGdList)[2].Mp);
				y++;
				Pc::gotoxy2(x, y);
				printf("¦­  ¦­°ø°Ý:%-5d          ¹æ¾î:%-5d    ¦­                                                                                                                    ¦­", (*a_PcGdList)[2].Attack, (*a_PcGdList)[2].Deffence);
				y++;
				Pc::gotoxy2(x, y);
				printf("¦­  ¦­°ø¼Ó:%-2d            ·¹º§:%-3d       ¦­			                                                                                              ¦­", (*a_PcGdList)[2].Att_Speed, (*a_PcGdList)[2].Level);
				y++;
				Pc::gotoxy2(x, y);
				printf("¦­  ¦­Èû:%-4d ¹ÎÃ¸:%-4d Áö´É:%-4d       ¦­                                                                                                                    ¦­", (*a_PcGdList)[2].Str, (*a_PcGdList)[2].Dex, (*a_PcGdList)[2].INT);
				y++;
				Pc::gotoxy2(x, y);

				printf("¦­  ¦±¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦°                                                                                                                    ¦­");
				y++;
				Pc::gotoxy2(x, y);

				printf("¦­                                                                                                                                                            ¦­");
				y++;
				Pc::gotoxy2(x, y);
				printf("¦­                                                                                                                                                            ¦­");
				y++;
				Pc::gotoxy2(x, y);
				printf("¦­                                                                                                                                                            ¦­");
				Pc::gotoxy2(x, y);
				printf("¦±¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦°");
				y++;
				Pc::gotoxy2(x, y);

				printf("¦®¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¯¦®¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¯");

				x++;
				Pc::gotoxy2(x, y);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
					FOREGROUND_INTENSITY | FOREGROUND_RED); //ÇÏ´Ã»ö
				printf("<SystemPrint>");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
					FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //Èò»ö

				x += 79;
				Pc::gotoxy2(x, y);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
					FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN); //ÇÏ´Ã»ö
				printf("<Menu>");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
					FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //Èò»ö
				x = 0;
				y++;
				Pc::gotoxy2(x, y);
				printf("¦­                                                                            ¦­¦­                                                                            ¦­");
				y++;
				Pc::gotoxy2(x, y);
				printf("¦­                                                                            ¦­¦­99.³ª°¡±â				                                                      ¦­");
				y++;
				Pc::gotoxy2(x, y);
				printf("¦­                                                                            ¦­¦­                                                                            ¦­");
				y++;
				Pc::gotoxy2(x, y);
				printf("¦­                                                                            ¦­¦­                                                                            ¦­");
				y++;
				Pc::gotoxy2(x, y);
				printf("¦­                                                                            ¦­¦­                                                                            ¦­");
				y++;
				Pc::gotoxy2(x, y);
				printf("¦­                                                                            ¦­¦­                                                                            ¦­");
				y++;
				Pc::gotoxy2(x, y);
				printf("¦­                                                                            ¦­¦­                                                                            ¦­");
				y++;
				Pc::gotoxy2(x, y);
				printf("¦­                                                                            ¦­¦­                                                                            ¦­");
				y++;
				Pc::gotoxy2(x, y);
				printf("¦­                                                                            ¦­¦­                                                                            ¦­");
				y++;
				Pc::gotoxy2(x, y);
				printf("¦­                                                                            ¦­¦­                                                                            ¦­");
				y++;
				Pc::gotoxy2(x, y);
				printf("¦­                                                                            ¦­¦­                                                                            ¦­");
				y++;
				Pc::gotoxy2(x, y);
				printf("¦­                                                                            ¦­¦­ÆÄ½Ç¹øÈ£¸¦ ÀÔ·ÂÇØÁÖ¼¼¿ä:                                                    ¦­");
				y++;
				Pc::gotoxy2(x, y);
				printf("¦­                                                                            ¦­¦­                                                                            ¦­");
				y++;
				Pc::gotoxy2(x, y);
				printf("¦±¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦°¦±¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦°");

				x = 47, y = 3;
				Pc::gotoxy2(x, y); printf(" ¦®¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¯"); y++;
				Pc::gotoxy2(x, y); printf(" ¦­");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
					FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN); //³ë¶û»ö
				printf("<¾ÆÀÌÅÛ¸ñ·Ï>");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
					FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //Èò»ö
				Pc::gotoxy2(156, y); printf("¦­¦­"); y++;

				for (int i = 0; i < 25; i++)
				{
					Pc::gotoxy2(x, y);
					printf(" ¦­                                                                                                          ¦­");

					if (a_InList->size() > i)
					{
						Pc::gotoxy2(50, y);
						printf("%-3d.ÀÌ¸§:%-13sÈû:%-3d ¹ÎÃ¸:%-3d Áö´É:%-3d ¼º±Þ:%-2d µî±Þ:%-2d·¹º§:%-3dÀü¿ëÁ÷¾÷:%-10s°¡°Ý:%-4d", i + 1, (*a_InList)[i].Name,
							(*a_InList)[i].Str, (*a_InList)[i].Dex, (*a_InList)[i].a_Int, (*a_InList)[i].Star, (*a_InList)[i].Grade, (*a_InList)[i].Level, (*a_InList)[i].Char_Type,
							(*a_InList)[i].Cost);
					}
					y++;
				}
				Pc::gotoxy2(x, y); printf(" ¦±¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦°");
				//¦­%-3d.ÀÌ¸§:%-13sÈû : %-3d ¹ÎÃ¸ : %-3d Áö´É : %-3d ¼º±Þ : %-2d µî±Þ : %-2d·¹º§ : %-3dÀü¿ëÁ÷¾÷ : %-10s°¡°Ý : %-4d        ¦­ ¦­


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
					printf("Àß¸øÀÔ·ÂÇÏ¼Ì½À´Ï´Ù");
					return;
				}

				by_Sel--;

				system("cls");
				x = 98;
				y = 46;
				Pc::gotoxy2(x, y);
				printf("¾ÆÀÌÅÛÀ» ÆÄ½Ã°Ú½À´Ï±î? 1.Yes 2.No");
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
				printf("ÆÄ½Å±Ý¾× :%d  ÇÃ·¹ÀÌ¾î µ·:%d\n", SellResult,(*a_PcList)[login].Gold);
				
			//	system("cls");
				//break;

				getchar();

			}




		}//else if (a_Sel == 2)
	}
}
