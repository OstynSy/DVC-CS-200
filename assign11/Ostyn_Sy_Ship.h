#pragma once
#include <iostream>
#include <string>
using namespace std;

#ifndef Ostyn_Sy_Ship_H
#define Ostyn_Sy_Ship_H

class Ship
{
public:
	string name, year;
	Ship(string n, string y);
	void setYear(string y);
	void setName(string n);
	string getYear();
	string getName();
	virtual void print();
};

#endif