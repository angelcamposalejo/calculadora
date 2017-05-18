#pragma once //_____________________________________________ CalculadoraDual.h 

class CalculadoraDual
{
public:
	CalculadoraDual()
	{
		Init();
	}
	~CalculadoraDual()
	{
	}
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Sys::ITextbox& Get_tbxX() { return *ptbxX; }
	__declspec(property(get = Get_tbxX)) Sys::ITextbox tbxXD;
	Sys::ITextbox* ptbxX;
	Sys::IObject& Get_lb1() { return *plb1; }
	__declspec(property(get = Get_lb1)) Sys::IObject lb1D;
	Sys::IObject* plb1;
	Sys::ITextbox& Get_tbxY() { return *ptbxY; }
	__declspec(property(get = Get_tbxY)) Sys::ITextbox tbxYD;
	Sys::ITextbox* ptbxY;
	Sys::IObject& Get_btCalcular() { return *pbtCalcular; }
	__declspec(property(get = Get_btCalcular)) Sys::IObject btCalcularD;
	Sys::IObject* pbtCalcular;
	Sys::IObject& Get_lb2() { return *plb2; }
	__declspec(property(get = Get_lb2)) Sys::IObject lb2D;
	Sys::IObject* plb2;
	Sys::ITextbox& Get_tbxResultado() { return *ptbxResultado; }
	__declspec(property(get = Get_tbxResultado)) Sys::ITextbox tbxResultadoD;
	Sys::ITextbox* ptbxResultado;
	void Init()
	{
		ptbxX = NULL;
		plb1 = NULL;
		ptbxY = NULL;
		pbtCalcular = NULL;
		plb2 = NULL;
		ptbxResultado = NULL;
	}
	//_________________________________________________
	void btCalcular_Click(Sys::IWindow& window, Web::HttpConnector* h);
	void Window_Open(Sys::IWindow& window, Web::HttpConnector* h);
};
