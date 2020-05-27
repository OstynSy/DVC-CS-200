//Ostyn Sy
#include "Ostyn_Sy_Card.h"

Card::Card()
{
	face = 0;
	suit = 0;
}

Card::Card(int f, int s)
{
	face = f;//sets arguements into variables
	suit = s;
}

string Card::toString()
{
	return (arrFace[face] + " of " + arrSuit[suit]);//searches for string in array and returns the string value
}
