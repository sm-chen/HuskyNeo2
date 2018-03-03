#include "stdafx.h"
#include "M_WKQ.h"

#include <Windows.h>

#import "c:\Program Files\Common Files\System\ado\msado15.dll" no_namespace rename("EOF","EndOfFile")

M_WKQ::M_WKQ(void)
{
	EQUIPMENTNAME = "HUSKY NEO2";
	for (int i = 0; i < 12; i++) {
		ZONES_NOW_TEMP[i] = 0;
		ZONES_SET_TEMP[i] = 0;
	}
}

M_WKQ::~M_WKQ(void)
{
}