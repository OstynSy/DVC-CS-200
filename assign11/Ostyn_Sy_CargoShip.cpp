#include "Ostyn_Sy_CargoShip.h"

CargoShip::CargoShip(string n, string y, int c):Ship(n,y)//uses base constructor for name and year
{
	setCapacity(c);
}

void CargoShip::setCapacity(int c)
{
	capacity = c;
}

int CargoShip::getCapacity()
{
	return capacity;
}

void CargoShip::print()
{
	cout << "Name: " << getName() << endl;
	cout << "Maximum capacity: " << getCapacity() <<" tons"<< endl;//changes to maximum capacity
}