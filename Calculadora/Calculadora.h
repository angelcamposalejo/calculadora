#pragma once  //______________________________________ Calculadora.h  
#include "Resource.h"
#include "..\CalculadoraDual.h"
class Calculadora : public Win::Dialog, public CalculadoraDual
{
public:
	Calculadora()
	{
	}
	~Calculadora()
	{
	}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Button btCalcular;
	Win::Textbox tbxX;
	Win::Textbox tbxY;
	Win::Textbox tbxResultado;
	Win::Label lb1;
	Win::Label lb2;
protected:
	Win::Gdi::Font fontArial014A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::PixelToDlgUnitX(524);
		dlgTemplate.cy = Sys::Convert::PixelToDlgUnitY(131);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"Calculadora";
		btCalcular.Create(NULL, L"Calcular", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 317, 96, 81, 28, hWnd, 1000);
		tbxX.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 107, 98, 80, 25, hWnd, 1001);
		tbxY.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 217, 98, 81, 25, hWnd, 1002);
		tbxResultado.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 436, 96, 81, 25, hWnd, 1003);
		lb1.Create(NULL, L"+", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 190, 99, 23, 25, hWnd, 1004);
		lb2.Create(NULL, L"=", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 408, 98, 23, 25, hWnd, 1005);
		fontArial014A.Create(L"Arial", 14, false, false, false, false);
		btCalcular.Font = fontArial014A;
		tbxX.Font = fontArial014A;
		tbxY.Font = fontArial014A;
		tbxResultado.Font = fontArial014A;
		lb1.Font = fontArial014A;
		lb2.Font = fontArial014A;
		//WintemplaDual:CalculadoraDual
		this->pbtCalcular = &btCalcular;
		this->ptbxX = &tbxX;
		this->ptbxY = &tbxY;
		this->ptbxResultado = &tbxResultado;
		this->plb1 = &lb1;
		this->plb2 = &lb2;
	}
	//_________________________________________________
	void btCalcular_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btCalcular.IsEvent(e, BN_CLICKED)) { btCalcular_Click(e); return true; }
		return false;
	}
};
