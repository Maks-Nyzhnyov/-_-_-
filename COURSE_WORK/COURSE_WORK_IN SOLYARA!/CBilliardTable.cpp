#pragma once
#include "CBilliardTable.h"

CBilliardTable::CBilliardTable()
{
	ifstream ik(tables);
	if (ik.is_open()) {
		string table;
		while (getline(ik, table)) {
			listtables.push_back(table);
		}
	}
}
CBilliardTable::CBilliardTable(int number)
{	
	this->number = number;
}
int CBilliardTable::getnumber()
{
	return number;
}
void CBilliardTable::showTables()
{
	if (listtables.empty()) {
		cerr << "There arent any kind of pools!Please add them!" << endl;
		return;
	}
	int count = 1;
	for (string table : listtables) {
		cout << count++ << " - " << table << endl;
	}
}

void CBilliardTable::chooseTable(int choice1)
{
	
	auto it = next(listtables.begin(), choice1);
	cout << "You choose " << *it << " Table" << endl;
	cout << "Standard:" << endl;

}
CBilliardTable::~CBilliardTable()
{

}
