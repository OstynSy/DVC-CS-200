#include "Ostyn_Sy_CruiseShip.h"

CruiseShip::CruiseShip(string n, string y, int p) :Ship(n, y)//uses base class for name and year
{
	setPassenger(p);
}

void CruiseShip::setPassenger(int p)
{
	passengers = p;
}

int CruiseShip::getPassenger()
{
	return passengers;
}

void CruiseShip::print()
{
	cout << "Name: " << getName() << endl;
	cout << "Maximum passengers: " << getPassenger() << endl;//changes to maximum passenger
}