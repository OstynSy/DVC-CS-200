#include "Ostyn_Sy_Account.h"

Account::Account()
{
	balance = 0.0;
}

Account::Account(double val)
{
	if (val >= 0)//checks to see if initial balance is equal or above 0
	{
		balance = val;
	}
	else//if not set it to 0 and report invalid initial balance
	{
		balance = 0.0;
		cout << "Initial balance was invalid." << endl;
	}
}

double Account::getBalance()//getter function
{
	return balance;
}

bool Account::debit(double val)
{

	if (val <= balance)//checks to see if there is enough balance to debit
	{
		balance -= val;
		return true; //if so return true so checkings derived class can charge
	}

	else
	{
		cout << "Debit amount exceeded account balance." << endl;
		return false; //checkings derived class wont charge
	}
}

void Account::credit(double val)
{
	balance += val;//adds balance and credit amount together and reupdates balance
}