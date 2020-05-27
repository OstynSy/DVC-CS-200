#pragma once
#include <iostream>
#include <vector>
using namespace std;
#ifndef OSTYN_SY_INTEGERSET_H
#define OSTYN_SY_INTEGERSET_H

class IntegerSet
{
private:
	bool set[101] = { 0 };//size and initialize set
public:
	IntegerSet();
	IntegerSet(int [], int);
	IntegerSet unionOfSets(IntegerSet);
	IntegerSet intersectionOfSets(IntegerSet);
	void insertElement(int);
	void deleteElement(int);
	void printSet();
	bool isEqualTo(IntegerSet);
	void inputSet();
};

#endif