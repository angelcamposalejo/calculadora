#include "stdafx.h"  //________________________________________ Calculadora.cpp
#include "Calculadora.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	Calculadora app;
	return app.BeginDialog(IDI_Calculadora, hInstance);
}

void Calculadora::Window_Open(Win::Event& e)
{
	CalculadoraDual::Window_Open(*this, NULL);
}

void Calculadora::btCalcular_Click(Win::Event& e)
{
	CalculadoraDual::btCalcular_Click(*this, NULL);
}

