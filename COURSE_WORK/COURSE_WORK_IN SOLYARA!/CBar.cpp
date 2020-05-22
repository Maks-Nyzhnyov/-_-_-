#include "CBar.h"
//#include "stdafx.h"
#include "CBilliardWithBar.h"

#include <iostream>
#include <string>
#include <fstream>
#include <chrono>
#include <thread>

using namespace std;

void CBar::AdditionalEnter(int choice) {

	while (true) {
		int age;
		if (menu.empty()) {
			return;
		}
		
		if (choice > 0 && choice <= menu.size()) {
			cout << "Enter your age: ";
			cin >> age;
			if (age == 18) {

			
			auto it = next(menu.begin(), choice - 1);
			cout << "Eating/drinking " << *it << "..." << endl;
			this_thread::sleep_for(chrono::milliseconds(3125));
			cout << "Leaving the bar..." << endl;
			break;
			}
			else
			{
				cout << "Not 18 y.o!" << endl;
				break;
			}
		}
	}
}

void CBar::ListMenu() {
	if (menu.empty()) {
		cerr << "There arent any dishes in menu!Please add them!" << endl;
		return;
	}
	int count = 1;
	cout << "Menu:" << endl;
	for (auto item : menu) {
		cout << count++ << " - " << item << endl;
	}
}

CBar::CBar() : CBilliardWithBar() {
	ifstream in(barTxt);
	if (in.is_open()) {
		string menuItem;
		while (getline(in, menuItem)) {
			menu.push_back(menuItem);
		}
	}
	
	nameBar = "Bar";
}
void CBar::AddDish()
{
	
}


void CBar::information()
{
	cout << "HELLO,Welcome to the " << nameBar << endl << "There are has a list of dishes in additional entertainments " << endl;
}

void CBar::SetMenu(const std::vector<std::string> menu) {
	this->menu = menu;
}

std::vector<std::string> CBar::GetMenu()const {
	return menu;
}
CBar::~CBar()
{
	
}
