#pragma once   //_____________________________________________ Index.h  
#include "resource.h"

#include "..\CalculadoraDual.h"
class Index : public Web::Page, public CalculadoraDual
{
public:
	Index()
	{
	}
	~Index()
	{
	}
private:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Web::Textbox tbxX;
	Web::Label lb1;
	Web::Textbox tbxY;
	Web::Button btCalcular;
	Web::Label lb2;
	Web::Textbox tbxResultado;
protected:
	void InitializeGui()
	{
		this->ID = L"Index";
		this->Title = L"Index";
		this->CssFile = L"cyan.css";
		this->JavascriptFile = L"Index.js";
		this->WebSiteIcon = L"WebSiteIcon.png";
		this->tbxX.ID = L"tbxX";
		this->lb1.ID = L"lb1";
		this->tbxY.ID = L"tbxY";
		this->btCalcular.ID = L"btCalcular";
		this->lb2.ID = L"lb2";
		this->tbxResultado.ID = L"tbxResultado";
		this->lb1.Text = L"+";
		this->btCalcular.Text = L"Calcular";
		this->lb2.Text = L"=";
		this->tbxX.BeginHtml = L"<table><tr><td>";
		this->tbxX.EndHtml = L"</td>";
		this->tbxX.RowCount = 1;
		this->tbxX.ColCount = 16;
		this->tbxX.MaxTextLength = 32;
		this->lb1.BeginHtml = L"<td>";
		this->lb1.EndHtml = L"</td>";
		this->tbxY.BeginHtml = L"<td>";
		this->tbxY.EndHtml = L"</td>";
		this->tbxY.RowCount = 1;
		this->tbxY.ColCount = 16;
		this->tbxY.MaxTextLength = 32;
		this->btCalcular.BeginHtml = L"<td>";
		this->btCalcular.EndHtml = L"</td>";
		this->lb2.BeginHtml = L"<td>";
		this->lb2.EndHtml = L"</td>";
		this->tbxResultado.BeginHtml = L"<td>";
		this->tbxResultado.EndHtml = L"</td></tr></table>";
		this->tbxResultado.RowCount = 1;
		this->tbxResultado.ColCount = 16;
		this->tbxResultado.MaxTextLength = 32;
		this->AddChild(tbxX);
		this->AddChild(lb1);
		this->AddChild(tbxY);
		this->AddChild(btCalcular);
		this->AddChild(lb2);
		this->AddChild(tbxResultado);
		//WintemplaDual:CalculadoraDual
		this->ptbxX = &tbxX;
		this->plb1 = &lb1;
		this->ptbxY = &tbxY;
		this->pbtCalcular = &btCalcular;
		this->plb2 = &lb2;
		this->ptbxResultado = &tbxResultado;
	}
	//_________________________________________________
	void btCalcular_onclick(Web::HttpConnector& h);
	void Window_Open(Web::HttpConnector& h);
	void EventHandler(Web::HttpConnector& h)
	{
		if (btCalcular.IsEvent(h, LEX_HTML_ONCLICK)) { btCalcular_onclick(h); }
	}
};
