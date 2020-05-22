//#include "stdafx.h"
#include "CBilliard.h"
#include <iostream>

using namespace std;



void CBilliard::AdditionalEnter(int choice) {
	cout << "There arent any entertaiments!" << endl;
}

CBilliard::CBilliard() : CBilliardBase() {
	
	
	nameBilliard = "Billiard POOL";
}

CBilliard::CBilliard(int amountPlayers, int time,string nameBilliard) : CBilliardBase(amountPlayers, time) {
	this->nameBilliard = nameBilliard;
	CBilliardTable Table1;
	
}
	void CBilliard::setNum()
	{
		table.setNum();
	}
void CBilliard::information()
{
	
	cout << "HELLO,WELCOME TO OUR " << nameBilliard <<endl<< "We have standarts rules of billiard games" <<endl<<" Amount of players on game: " << amountPlayers <<endl<< " and time: " << time << endl;
}


void CBilliard::Start() {
	CBilliardBase::Start();
}
void CBilliard::ChooseKind(int choice,int n)
{
	CBilliardBase::ChooseKind(choice,n);
}

CBilliard::~CBilliard()
{
	
}
