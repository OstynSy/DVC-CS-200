//Ostyn Sy
#include "Ostyn_Sy_Coin.h"

Coin::Coin()
{
}

void Coin::toss() //Function that tosses the coin. Randomly selects 1 or 2. 1 being heads which add the points and 2 being tails which doesnt add anything.
{
	int temp = rand() % 2+1;

	if (temp == 1)
	{
		sideUp = "Heads";
	}

	if (temp == 2)
	{
		sideUp = "Tails";
	}
}

string Coin::getSideUp()//returns the results from the toss
{
	return sideUp;
}

float Coin::quarter()//fucntion that tosses the coin for a quarter and gives.25 or none if tails.It will also return the balance. 
{
	toss();
	if (sideUp == "Heads")
	{
		balance = 0.25;
	}

	if (sideUp == "Tails")
	{
		balance = 0.00;
	}
	return balance;
}

float Coin::dime()//same function but for dimes and adds .10 cents instead.
{
	toss();
	if (sideUp == "Heads")
	{
		balance = 0.10;
	}

	if (sideUp == "Tails")
	{
		balance = 0.00;
	}
	return balance;
}

float Coin::nickel() //Same thing but wiht .05 cents.
{
	toss();
	if (sideUp == "Heads")
	{
		balance = 0.05;
	}

	if (sideUp == "Tails")
	{
		balance = 0.00;
	}
	return balance;
}