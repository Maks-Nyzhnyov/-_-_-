#include "CCasino.h"



//#include "stdafx.h"
#include "CBilliardWithCasino.h"

#include <string>
#include <fstream>
#include <iostream>
#include <ctime>

using namespace std;

void CCasino::AdditionalEnter(int choice) {
	srand(std::time(NULL));

	int money1;
	while (true) {

		if (listCasinos.empty()) {
			return;
		}

		if (choice > 0 && choice <= listCasinos.size()) {
			
				
				cout << "Input money:";
				cin >> money1;
				
		
			int x, y;
			x = rand() % 10;
			y = rand() % 10;
			auto it = next(listCasinos.begin(), choice - 1);
			cout << "You play " << *it << ".";
			if (x == y) {
				cout << " Congratulation! You win " << money1 * 2 << endl;
			}
			else {
				cout << " You lose your money!" << endl;
			}
			break;
		}
	}
}

CCasino::CCasino() : CBilliardWithCasino() {
	ifstream in(casinoTxt);
	if (in.is_open()) {
		string casino;
		while (getline(in, casino)) {
			listCasinos.push_back(casino);
		}
	}
	nameCasino = "Casinos";
	
}

void CCasino::information()
{
	cout << "Hello,welcome to the" << nameCasino << endl << "There are has a list of casinos in Additional entertainments" << endl;
}
void CCasino::ListCasinos() {
	if (listCasinos.empty()) {
		cerr << "There arent any kind of casino!Please add them!" << endl;
		return;
	}
	int count = 1;
	cout << "List of casinos:" << endl;
	for (string casino : listCasinos) {
		cout << count++ << " - " << casino << endl;
	}
}

void CCasino::Start() {
	CBilliardBase::Start();
}

void CCasino::SetListCasinos(const std::vector<std::string> listCasinos) {
	this->listCasinos = listCasinos;
}

std::vector<std::string> CCasino::GetListCasinos()const {
	return listCasinos;
}

