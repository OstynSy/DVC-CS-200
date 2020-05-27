//Ostyn Sy
#include "Ostyn_Sy_DeckOfCards.h"
#include "Ostyn_Sy_Card.h"
#include <time.h>
#include <iomanip>

DeckOfCards::DeckOfCards()
{
	for (int currentCard = 0;currentCard < Size;currentCard++)
	{
		deck[currentCard] = Card((currentCard % 13), (currentCard / 13));//initializes the deck vector
	}
};

void DeckOfCards::shuffle()//shuffle/swap function
{
	for (int first = 0;first < Size;first++)//sorts through all 52 cards
	{
		int second = (rand() + time(0)) % Size;//selects a random number within 52
		Card temp = deck[first];
		deck[first] = deck[second];//swaps the initial card with the random card
		deck[second] = temp;
	}
}

string DeckOfCards::dealCard()//uses 
{
	moreCards();//checks if there are cards left


	if(TF)// if false it will default to deck[0]
	{
		return deck[0].toString();
	}

	else//it will shuffle cards and return the string
	{
		shuffle();
		return deck[currentCard].toString();
	}
}

bool DeckOfCards::moreCards()
{
	if (currentCard < Size)//if current card is less than the size of 52, it will return true
	{
		return true;
	}
	else
	{
		return false; //if the amount of cards dealt are greater than the amount of cards total then it will return false
	}
}

