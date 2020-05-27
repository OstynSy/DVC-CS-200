#pragma once
#include <iostream>
#include <iomanip>
#include "Ostyn_Sy_Account.h"
using namespace std;

#ifndef Ostyn_Sy_SavingsAccount_H
#define Ostyn_Sy_SavingsAccount_H

class SavingsAccount: public Account//inherits account functions
{
private:
	double interest, rate;
public:
	SavingsAccount(double val, double val2);
	double calculateInterest();
};

#endif