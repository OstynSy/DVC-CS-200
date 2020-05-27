#pragma once
#include "Ostyn_Sy_Ship.h"
#ifndef Ostyn_Sy_CruiseShip_H
#define Ostyn_Sy_CruiseShip_H

class CruiseShip :public Ship//inheritence from ship
{
private:
	int passengers;
public:
	CruiseShip(string n, string y, int p);
	void setPassenger(int p);
	int getPassenger();
	void print() override;//overrides base print function
};

#endif