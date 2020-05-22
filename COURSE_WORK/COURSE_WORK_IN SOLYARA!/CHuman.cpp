
#include "CHuman.h"

Human::Human() {
	this->age = 0;
	this->name = "Unknown";
	this->sex = "Unknown";
	this->money = 0;
}

Human::Human(int age, string name, string sex, int moneyg) {
	this->age = age;
	this->name = name;
	this->sex = sex;
	this->money = money;
	
}



void Human::setAge(int age) {
	this->age = age;
}

int Human::getAge() {
	return age;
}

void Human::setName(string name) {
	this->name = name;
}

string Human::getName() {
	return name;
}

void Human::setSex(string sex) {
	this->sex = sex;
}

string Human::getSex() {
	return sex;
}

void Human::setMoney(int money) {
	this->money = money;
}

int Human::getMoney() {
	return money;
}