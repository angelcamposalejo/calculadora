#include "stdafx.h"  //_____________________________________________ Index.cpp
#include "Index.h"

void Index::Window_Open(Web::HttpConnector& h)
{
	CalculadoraDual::Window_Open(*this, &h);
}



void Index::btCalcular_onclick(Web::HttpConnector& h)
{
	CalculadoraDual::btCalcular_Click(*this, &h);
}

