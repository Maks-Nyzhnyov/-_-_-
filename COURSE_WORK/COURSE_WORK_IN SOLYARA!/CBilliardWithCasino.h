
#ifndef CBilliardWithCasino_hpp
#define CBilliardWithCasino_hpp

//#include "stdafx.h"
#include "CBilliardBase.h"
#include <vector>
#include <string>
#include "CBilliardTable.h"

class CBilliardWithCasino : public CBilliardBase {
private:

public:
	
	CBilliardTable Table1;
	string nameCasino;
	CBilliardWithCasino();
	void getnumber();

	void Start()override;
	~CBilliardWithCasino();
	
	
	

	

};

#endif /* CBilliardWithCasino_hpp */
