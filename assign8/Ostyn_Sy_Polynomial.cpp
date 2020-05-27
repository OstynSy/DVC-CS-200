#include "Ostyn_Sy_Polynomial.h"
Polynomial::Polynomial()///constructor initialize variables
{
	term = 0;
	coef = 0;
	exp = 0;
	c = 0;
	e = 0;

}

Polynomial::~Polynomial()//destructor
{
}

void Polynomial::setCoef(int c)//sets coef
{
	coef = c;
}

int Polynomial::getCoef()//returns coef
{
	return coef;
}

void Polynomial::setExp(int e)//sets exo
{
	exp = e;
}

int Polynomial::getExp()//returns exp
{
	return exp;
}



void Polynomial::enterTerms()//asks and stores values into arrays
{
	cout << "Enter number of polynomial terms: ";
	cin >> term;
	cout << endl;

	for (int i = 1; i <= term;i++)//increments array to the term
	{
		cout << "Enter coefficient: ";
		cin >> c;
		setCoef(c);
		CoefArr[i] = { getCoef() };//stores data into array

		cout << "Enter Exponent: ";
		cin >> e;
		setExp(e);
		ExpArr[i] = { getExp() };//stores data into array

		cout << endl;
	}
}

void  Polynomial::printPolynomial( )//prints arrays in form of polynomial
{
	for (int i = 1;i <= term;i++)
	{
		if (i!=1 && i!=term+1)
		{
			cout << "+";
		}

		if (ExpArr[i] == 0)
		{
			cout << CoefArr[i];
		}
		else
		{
			cout << CoefArr[i] << "x^" << ExpArr[i];
		}
	}
	cout << endl;
}

Polynomial& Polynomial::operator+ (const Polynomial& rhs)//overload for addition of polynomials
{

	for (int i = 1;i < term;i++)
	{
		CoefArr[i]=CoefArr[i] + rhs.CoefArr[i];
	}

	return *this;
}

Polynomial& Polynomial::operator- (const Polynomial& rhs)//overlaod for subtraction of polynomials
{
	for (int i = 1;i < term;i++)
	{
		CoefArr[i]=CoefArr[i]-rhs.CoefArr[i];
	}
	return *this;
}

Polynomial& Polynomial::operator= (const Polynomial& rhs)//overload for equal of polynomials
{
	for (int i = 0;i < term;i++)
	{
		CoefArr[i] = rhs.CoefArr[i];
	}
	return *this;
}

Polynomial& Polynomial::operator+= (const Polynomial& rhs)//overload for +=
{
	for (int i = 1;i < term;i++)
	{
		CoefArr[i] += rhs.CoefArr[i];
	}

	return *this;
}

Polynomial& Polynomial::operator-= (const Polynomial& rhs)//Overload for -=
{
	for (int i = 1;i < term;i++)
	{
		CoefArr[i] -= rhs.CoefArr[i];
	}
	return *this;
}