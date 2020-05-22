#pragma once
#include "CHuman.h"
#include "CBar.h"
class Barman : virtual public Human,CBar {
public:
	Barman();
	
	~Barman();
};
