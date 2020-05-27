#include "Ostyn_Sy_IntegerSet.h"

IntegerSet::IntegerSet()
{
	for (int i = 0;i <= 100;i++)//iterates
	{
		set[i] = false;//initializes set to false
	}
}

IntegerSet IntegerSet::unionOfSets(IntegerSet other)
{
	IntegerSet third;

	for (int i = 0; i <= 100;i++)//iterates
	{
		if (set[i]==true || other.set[i]==true)//if either/ or are true in obj a and b, it will create a third set of the same element and equal true.
		{
			third.set[i] = true;
		}
	}

	return third;
}

IntegerSet IntegerSet::intersectionOfSets(IntegerSet other)
{
	IntegerSet third;

	for (int i = 0; i <= 100;i++)//iterates
	{
		if (set[i]==true && other.set[i]==true)//same thing as unionOfSets but both a and b have to be true.
		{
			third.set[i] =  true ;
		}
	}

	return third;
}

void IntegerSet::insertElement(int k)
{
	if (k >= 0 && k <= 100)//checks if element is within the range
	{
		set[k] =  true;//if so, it will make that element part of the set and equal true.
	}	
}

void IntegerSet::deleteElement(int m)
{
	if (m >= 0 && m <= 100)//checks if element m is part of the set so it can be removed
	{
		set[m] = false;//changes the element to false so it no longer is part of the set
	}
}

void IntegerSet::printSet()
{
	bool empty = true;
	cout << "{ ";
	for (int i = 0;i <= 100;i++)//iterates
	{
		if (set[i])//if its part of the set it will print the element
		{
		 cout << i << " ";
		 empty = false;
		}
	}

	if (empty)//prints for empty set
	{
		cout << "---";
	}

	cout << " }" << endl;
}

bool IntegerSet::isEqualTo(IntegerSet other)
{
	for (int i = 0;i <= 100;i++)//iterate
	{
		if (set[i] !=other.set[i])//determines if array a is not equal to array b
		{
			return false;//if not equal then return false
		}	
	}
	return true;//otherwise, return true
}