#include "UI.h"



UI::UI()
{
}


UI::~UI()
{
}

void UI::UIStart(vector<Pc> *a_PcList)
{
	Pc::PcNewAdd(a_PcList);
	Pc::PcPrintList(a_PcList);
}


void UI::UIInven(vector<Pc> *a_PcList, vector<Guild> *a_GdList)
{
	//test ºÎºÐ 
	Pc::PcPrintList(a_PcList);
	//Guild::GdPrintList(a_GdList,a_PcList);

	getchar();


}


