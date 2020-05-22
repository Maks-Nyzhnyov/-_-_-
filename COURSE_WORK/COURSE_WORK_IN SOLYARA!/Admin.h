#pragma once
#include "CBilliard.h"
#include "CCasino.h"
#include "CCinema.h"
#include "CBar.h"
class Admin:public CBilliard,CBar,CCasino,CCinema
{
public:
	Admin();
	void ChangeBilliard();
	void ChangeBar();
	void ChangeCasino();
	void ChangeCinema();
	void AdminInform();

	~Admin();
};

