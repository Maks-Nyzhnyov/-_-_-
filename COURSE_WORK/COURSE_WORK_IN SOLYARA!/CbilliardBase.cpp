#include "CBilliardBase.h"
#include <iostream>
#include <vector>
#include <string>

#include <ctime>
#include <thread>
#include <chrono>

using namespace std;


CBilliardBase::CBilliardBase() : CBilliardBase(1, 3600) {}

CBilliardBase::CBilliardBase(int amountPlayers, int time) : amountPlayers(amountPlayers), time(time), coins(vector<int>(amountPlayers, 0)) {
	ifstream in(Kinds);
	if (in.is_open()) {
		string kind;
		while (getline(in, kind)) {
			listKindPools.push_back(kind);
		}
	}
}

void CBilliardBase::ShowKind() {
	if (listKindPools.empty()) {
		cerr << "There arent any kind of pools!Please add them!" << endl;
		return;
	}
	int count = 1;
	for (string kind : listKindPools) {
		cout << count++ << " - " << kind << endl;
	}
}
void CBilliardBase::ChooseKind(int choice,int n) {
	char y;
	auto it = next(listKindPools.begin(), choice);
	cout << "You choose " << *it << " mode!" << endl;
	cout << "Standard:" << endl;
	cout << "Amount players:" << amountPlayers << endl;
	cout << "Playing time(sec.):" << time << endl;
	
	
	
	if (n == 1 ){
		Play();
	}
	else if (n==0){
		int amountPlayers;
		long long time;
		cout << "Input amount players: ";
		cin >> amountPlayers;
		cout << "Input playing time(sec.): ";
		cin >> time;
		SetTime(time);
		SetAmountPlayers(amountPlayers);
		Play();
	}
}

void CBilliardBase::Start() {
#ifndef DISABLE_DEFAULT_ACTION
	int choose;
	auto count = listKindPools.size() + 1;
	while (true) {
		ShowKind();
		cout << count << " - Additional entertainment" << endl;
		cout << "0 - Back to main menu" << endl;
		cin >> choose;
		if (choose > 0 && choose < count) {
			ChooseKind(choose - 1,1);
		}
		else if (choose == count) {
			
		}
		else if (choose == 0) {
			break;
		}
	}
#endif
}

void CBilliardBase::Play() {
	srand(std::time(NULL));
	long long time = 0;
	while (time < this->time) {
		for (int i = 0; i < amountPlayers; ++i) {
			int result = rand() % 2;
			coins[i] += result;
			if (result == 1) {
				cout << i + 1 << " player scores in the hole(" << coins[i] << ")" << endl;
			}
		}
		time += rand() % (this->time / 2);
		if (time > this->time) {
			time = this->time;
		}
		
		this_thread::sleep_for(chrono::milliseconds(1000));
		cout << "Playing time: " << time << endl;
	}
	cout << "Scoreboard:" << endl;
	for (int i = 0; i < amountPlayers; ++i) {
		cout << i + 1 << " player has " << coins[i] << " score(s)" << endl;
	}
}

int CBilliardBase::GetAmountPlayers()const {
	return amountPlayers;
}
long long CBilliardBase::GetTime()const {
	return time;
}

std::vector<int> CBilliardBase::GetCoins()const {
	return coins;
}

void CBilliardBase::SetAmountPlayers(const int amountPlayers) {
	this->amountPlayers = amountPlayers;
	coins.resize(amountPlayers);
}
void CBilliardBase::SetTime(const long long time) {
	this->time = time;
}
void CBilliardBase::SetCoins(const std::vector<int> coins) {
	this->coins = coins;
}