//Ostyn Sy
#ifndef OSTYN_SY_DECKOFCARDS_H
#define OSTYN_SY_DECKOFCARDS_H
#include "Ostyn_Sy_Card.h"
#include <vector>
#pragma once

class DeckOfCards
{
private:
	const int Size = 52;
	vector <Card> deck{Size};//connects vector array to class card
	bool TF=false;
	

public:
	int currentCard = 0;
	DeckOfCards();
	void shuffle();
	string dealCard();
	bool moreCards();
};

#endif