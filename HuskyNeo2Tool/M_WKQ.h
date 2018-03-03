#pragma once

#include <WinSock2.h>
#include <Windows.h>

#import "c:\Program Files\Common Files\System\ado\msado15.dll" no_namespace rename("EOF","EndOfFile")

typedef unsigned short u16;
typedef u16 uint16_t;

class M_WKQ
{
public:
	
	int DBDATAID;
	int EQUIPMENTID;
	char *EQUIPMENTNAME;
	char *EQUIPMENTIP;

	char MODIFYDATE[20];

	// WKQ_Table
	int STATUS;
	int ZONES_NOW_TEMP[12];
	int ZONES_SET_TEMP[12];

	// WKQ_ALARM_Table
	uint16_t ALARM_CODE;
	char *ALARM;
	char *ALARM_BEGINTIME;
	char ALARM_TIMESTAMP[20];

public:
	M_WKQ(void);
	~M_WKQ(void);
};

