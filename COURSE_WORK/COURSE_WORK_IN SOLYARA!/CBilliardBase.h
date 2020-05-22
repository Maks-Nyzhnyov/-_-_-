#pragma once
#include <iostream>
#include <string>
#include <conio.h>
#include <list>
#include <vector>
#include <fstream>
using namespace std;
#ifndef Billiard_Base
#define Billiard_Base
class CBilliardBase
{
private: 
	string Kinds = "Kindslist.txt";
protected :
	string name;
	list<string> listKindPools;
	int amountPlayers;
	std::vector<int> coins;
	long long time;
	void ShowKind();
	void ChooseKind(int choice,int n);
	virtual void AdditionalEnter(int choice) = 0;
public:
	CBilliardBase();
	CBilliardBase(int amountPlayers, int time);
	virtual void Start();
	virtual void information() = 0;
	void Play();
	int GetAmountPlayers()const;
	long long GetTime()const;
	std::vector<int> GetCoins()const;
	void SetAmountPlayers(const int amountPlayers);
	void SetTime(const long long time);
	void SetCoins(const std::vector<int> coins);
};

#endif
