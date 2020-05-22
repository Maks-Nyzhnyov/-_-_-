#pragma once

#ifndef CBilliard_hpp
#define CBilliard_hpp

//#include "stdafx.h"
#include "CBilliardBase.h"
#include "CBilliardTable.h"
class CBilliard :public CBilliardBase {
private:
	
	class CBilliardTablex
	{
	private:
		int num;
	public:
		
		void setNum()
		{
			num = 10;
		}

		
	};
	CBilliardTablex table;
	
public:
	string nameBilliard;
	void AdditionalEnter(int choice)override;
	CBilliard();
		void setNum();
	CBilliard(int amountPlayers, int time,string nameBilliard);
	void information()override;
	void Start()override;
	void ChooseKind(int choice,int n);
	virtual ~CBilliard();
};

#endif /* CBilliard_hpp */
