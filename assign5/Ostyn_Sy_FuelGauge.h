#pragma once
#include <iostream>
using namespace std;

class FuelGauge
{
public:
	int fuel;

	FuelGauge();//constructor
	void getFuel();//functions
	void addFuel();
	void useFuel();
};