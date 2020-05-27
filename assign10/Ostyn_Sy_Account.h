#pragma once
#include <iostream>
#include <iomanip>
using namespace std;

#ifndef Ostyn_Sy_Account_H
#define Ostyn_Sy_Account_H

class Account
{
public:
	double balance;//set to public so derived classes can access and update balance
	Account();
	Account(double val);
	double getBalance();
	bool debit(double val);
	void credit(double val);
};

#endif