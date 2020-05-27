//Ostyn Sy
#pragma once
#ifndef OSTYN_SY_COIN_H
#define OSTYN_SY_COIN_H
#include <string>
#include <cstdlib>     
#include <ctime>
#include <iostream>
#include <iomanip>
using namespace std;

class Coin //Coin class. Sets private variables and the functions to be used.
{

private:
	string sideUp;
	float balance = 0.00;

public:

	Coin();
	void toss();
	string getSideUp();
	float quarter();
	float dime();
	float nickel();
};
#endif
