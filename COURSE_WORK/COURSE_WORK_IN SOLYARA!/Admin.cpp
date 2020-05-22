#include "Admin.h"



Admin::Admin()
{
	
}

void Admin::ChangeBar()
{
	cout << "New name of BAR: ";
	cin >> nameBar;
	cout << endl;
	cout << "Name of Bar succesfully changed!" << endl;
}
void Admin::ChangeBilliard()
{
	cout << "New name of Billiard: ";
	cin >> nameBilliard;
	cout << endl;
	cout << "Name of Billiard succesfully changed!" << endl;
}
void Admin::ChangeCasino()
{
	cout << "New name of Casino: ";
	cin >> nameCasino;
	cout << endl;
	cout << "Name of Casino succesfully changed!" << endl;
}
void Admin::ChangeCinema()
{
	cout << "New name of Cinema: ";
	cin >> nameCinema;
	cout << endl;
	cout << "Name of Cinema succesfully changed!" << endl;
}
void Admin::AdminInform()
{
	cout << "Name of Billiard: " << nameBilliard << endl;
	cout << "Name of Bar: " << nameBar << endl;
	cout << "Name of Cinema: " << nameCinema << endl;
	cout << "Name of Casino: " << nameCasino << endl;

}

Admin::~Admin()
{
}
