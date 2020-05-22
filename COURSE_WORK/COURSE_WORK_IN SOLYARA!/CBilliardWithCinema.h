
#ifndef CBilliardWithCinema_hpp
#define CBilliardWithCinema_hpp

//#include "stdafx.h"
#include "CBilliardBase.h"
#include <vector>
#include <string>
#include "CBilliardTable.h"


class CBilliardWithCinema : public CBilliardBase {
private:

public:
	CBilliardTable Table2;
	string nameCinema;
	CBilliardWithCinema();
	void Start()override;
	~CBilliardWithCinema();
	void getnumber();
};


#endif /* CBilliardWithCinema_hpp */
