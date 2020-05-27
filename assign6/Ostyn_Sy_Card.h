//Ostyn Sy
#pragma once

#ifndef OSTYN_SY_CARD_H
#define OSTYN_SY_CARD_H
#include <string>
#include <iostream>
using namespace std;


class Card
{
private:
	int face, suit;
	string arrFace[13] = { "Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King" };//string of face
	string arrSuit[4] = { "Hearts","Diamonds","Clubs","Spades" };//string of suit
public:
	Card();
	Card(int f, int s);
	string toString();
};

#endif