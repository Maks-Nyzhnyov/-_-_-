#pragma once
#include "CBilliardBase.h"
#include "CBilliard.h"
#ifndef Table
#define Table
 


class CBilliardTable
{
private:
	int number = 10;
protected :
	string tables = "tableslist.txt";
	list<string> listtables;
	

public:
	
	void chooseTable(int choice1);
	CBilliardTable();
	CBilliardTable(int number);
	int getnumber();
	void showTables();
	
	~CBilliardTable();
};

#endif // !Table