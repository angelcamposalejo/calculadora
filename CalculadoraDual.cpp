#include "stdafx.h" //_____________________________________________ CalculadoraDual.cpp
#include "CalculadoraDual.h"

void CalculadoraDual::Window_Open(Sys::IWindow& window, Web::HttpConnector* h)
{
}

void CalculadoraDual::btCalcular_Click(Sys::IWindow& window, Web::HttpConnector* h)
{
	tbxResultadoD.DoubleValue = tbxXD.DoubleValue+tbxYD.DoubleValue;
}

