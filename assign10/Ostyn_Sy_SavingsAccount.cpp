#include "Ostyn_Sy_SavingsAccount.h"

SavingsAccount::SavingsAccount(double val, double val2)
{
	interest = 0;
	balance = val;
	rate = val2;
}

double SavingsAccount::calculateInterest()
{
	interest = balance * rate;//calcualtes interest by multiplying the rate and balance
	return interest;
}
