 


#ifndef CBilliardWithBar_hpp
#define CBilliardWithBar_hpp

//#include "stdafx.h"
#include "CBilliardBase.h"
#include <vector>
#include <string>


class CBilliardWithBar : public CBilliardBase {
private:
	class CBilliardTablex
	{
	private:
		int num;
	public:
		void setNumofTable()
		{
			num = 10;
		}

	};
	CBilliardTablex x;
public:
	string nameBar;
	
	void setNumofTable();
	void Start()override;
		
	CBilliardWithBar();
	~CBilliardWithBar();


};
#endif /* CBilliardWithBar_hpp */