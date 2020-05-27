#pragma once
#include <iostream> 
using namespace std;

class RationalNumber
{
private:
	int n, d;

public:
	RationalNumber();
	RationalNumber(int numerator, int denominator);
	void printRational();

	RationalNumber operator+(const RationalNumber& rhs);
	RationalNumber operator-(const RationalNumber& rhs);
	RationalNumber operator*(const RationalNumber& rhs);
	RationalNumber operator/(const RationalNumber& rhs);
	RationalNumber operator=(const RationalNumber& rhs);
	bool operator>(const RationalNumber& rhs);
	bool operator<(const RationalNumber& rhs);
	bool operator>=(const RationalNumber& rhs);
	bool operator<=(const RationalNumber& rhs);
	bool operator==(const RationalNumber& rhs);
	bool operator!=(const RationalNumber& rhs);
};