#include "Ostyn_Sy_Ship.h"

Ship::Ship(string n, string y)//base constructor
{
	setName(n);
	setYear(y);
}

void Ship::setName(string n)//mutator for name
{
	name = n;
}

void Ship::setYear(string y)//mutator for year
{
	year = y;
}

string Ship::getName()//accesor for name
{
	return name;
}

string Ship::getYear()//accesor for year
{
	return year;
}

void Ship::print()//base print fucntion
{
	cout << "Name: " << getName() << endl;
	cout << "Year built: " << getYear() << endl;
}