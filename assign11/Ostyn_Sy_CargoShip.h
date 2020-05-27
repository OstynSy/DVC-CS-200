#pragma once
#include "Ostyn_Sy_Ship.h"
#ifndef Ostyn_Sy_CargoShip_H
#define Ostyn_Sy_CargoShip_H

class CargoShip :public Ship//inherit from ship
{
private:
	int capacity;
public:
	CargoShip(string n, string y, int c);
	void setCapacity(int c);
	int getCapacity();
	void print() override;
	
};

#endif