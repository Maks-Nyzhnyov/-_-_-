#include "CBilliardBase.h"
#include "CBilliardWithCasino.h"



CBilliardWithCasino::CBilliardWithCasino()
{

}
void CBilliardWithCasino::getnumber() {

	Table1.getnumber();
}

void CBilliardWithCasino::Start() {
	CBilliardBase::Start();
}
CBilliardWithCasino::~CBilliardWithCasino()
{

}