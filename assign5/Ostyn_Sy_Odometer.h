#pragma once
#include "Ostyn_Sy_FuelGauge.h"
#include <iostream>
using namespace std;

class Odometer
{

private:
	FuelGauge obj;//pointer to FuelGauge Class
	int mileage;

public:
	Odometer();//constructor
	void getmileage();//needed functions
	void addmileage();
	void run();//function that puts everything together
};