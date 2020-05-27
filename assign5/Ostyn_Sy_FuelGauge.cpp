#include "Ostyn_Sy_FuelGauge.h"

FuelGauge::FuelGauge()
{
		fuel = 0;//initializes fuel at 0
}

void FuelGauge::getFuel()
{
	cout << "Fuel Level: " << fuel << " gallons" << endl;
}

void FuelGauge::addFuel()
{
	cout << "Refueling..." << endl;
	getFuel();

	for(fuel=0;fuel<15;)//adds fuel from zero to 15
	{
		fuel++;
		getFuel();
	}

	cout << "-----Done Fueling-----" << endl;
	cout << endl;
}

void FuelGauge::useFuel()
{
	if (fuel > 0)//when called, it will decrement the amount of fuel by 1 until 0
	{
		fuel--;
	}

	else
	{
		cout << "No more Fuel!" << endl;
	}
}