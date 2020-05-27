#include "Ostyn_Sy_Odometer.h"

Odometer::Odometer()
{
		mileage = 0;//initializes mileage to zero
}

void Odometer::getmileage()
{
	cout << "Mileage: " << mileage << endl;
}

void Odometer::addmileage()
{

		mileage++;//increments the mileage by 1
		getmileage();

		if (mileage > 999999)//if the mileage is over 999,999 then it will be reset to zero miles
		{
			mileage = 0;
		}
}

void Odometer::run()
{
	obj.addFuel();//fuel gas
	while (obj.fuel > 0 && obj.fuel <= 15)//while car has gas it will keep adding miles until it runs out at 15gallons
	{
		addmileage();
		if (mileage % 24 == 0)//if the mile is divisible by 24, it will drop the fuel level by 1
		{
			obj.useFuel();
		}
		obj.getFuel();
		cout << "---------------------" << endl;
		cout << endl;
		cout << endl;
	}
}