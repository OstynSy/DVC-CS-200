#pragma once
#include <iostream>
#include <iomanip>
#include "Ostyn_Sy_Account.h"
using namespace std;

#ifndef Ostyn_Sy_CheckingAccount_H
#define Ostyn_Sy_CheckingAccount_H

class CheckingAccount:public Account//inherits account
{
private:
	double charge;
public:
	CheckingAccount(double val1, double val2);
	double Fee();
	void debit(double val);
	void credit(double val);
};

#endif