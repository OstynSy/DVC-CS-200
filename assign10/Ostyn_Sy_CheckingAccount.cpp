#include "Ostyn_Sy_CheckingAccount.h"

CheckingAccount::CheckingAccount(double val1, double val2)
{
	balance = val1;
	charge = val2;
}

double CheckingAccount::Fee()
{
	cout << "$" << charge << " transaction fee charged." << endl;//displays a charge when a charge occurs.
	return charge;
}

void CheckingAccount::debit(double val)//creates its own version of debit function
{
	bool b= Account::debit(val);//calls accounts version of debit
	if (b==true)
	{
		balance -= charge;//if there is a debit, then balance will subtract charge and reupdate balance.
		Fee();
	}
}

void CheckingAccount::credit(double val)//creates own version of credit function
{
	Account::credit(val);//calls accounts version of credit
		balance -= charge;//when credited, balance will subtract charge and reupdate.
		Fee();
}