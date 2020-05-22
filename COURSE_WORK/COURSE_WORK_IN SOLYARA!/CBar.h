#pragma once
#ifndef CBAR
#define CBAR


#include "CBilliardWithBar.h"
#include "CBilliardTable.h"
class CBar: public CBilliardWithBar
{
private:
	
public:
	std::vector<std::string> menu;
	std::string barTxt = "menuBar.txt";
	void AdditionalEnter(int choice);
	CBar();

	

	void ListMenu();

	void SetMenu(const std::vector<std::string> menu);
	void information()override;



	std::vector<std::string> GetMenu()const;
	void AddDish();
	virtual ~CBar();
	void AddItsem(std::string item);
};

#endif /* CBilliardWithBar_hpp */




