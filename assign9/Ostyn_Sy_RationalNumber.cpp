#include "Ostyn_Sy_RationalNumber.h"

RationalNumber::RationalNumber()
{
	n = 0;
	d = 1;
}

RationalNumber::RationalNumber(int numerator, int denominator)
{
	n = numerator;
	d = denominator;
}

void RationalNumber::printRational()
{
	if (d == 1)
	{
		cout << n;
	}
	else
	{
		cout << n << "/" << d;
	}
}

RationalNumber RationalNumber::operator+(const RationalNumber& rhs)
{
	RationalNumber t;
	if (d != rhs.d)//if lhs denominator does not equal to rhs denominator then multiply the two denominators together and multiply opposite numerators to denominators and add them together
	{
		t.n = (n * rhs.d) + (rhs.n * d);
		t.d = d * rhs.d;
	}

	else//if they have the same denominator then they can proceed to add
	{
		t.d = rhs.d;
		t.n = n + rhs.n;
	}

	return t;
}

RationalNumber RationalNumber::operator-(const RationalNumber& rhs)
{
	RationalNumber t;
	if (d != rhs.d)//check if they have different denominators
	{
		t.n = (n * rhs.d) - (rhs.n * d);
		t.d = d * rhs.d;
	}

	else if (rhs.d < d)//checks for same denominator
	{
		int temp = d / rhs.d;
		t.d = rhs.d * temp;
		t.n = (n * temp) - rhs.n;
	}

	else//if denomiators are equal then proceed to subtract
	{
		t.d = rhs.d;
		t.n = n - rhs.n;
	}
	return t;
}

RationalNumber RationalNumber::operator*(const RationalNumber& rhs)
{
	RationalNumber t;
	t.n = n * rhs.n;//multiplies numerators together
	t.d = d * rhs.d;//multiplies denominator together

	return t;
}

RationalNumber RationalNumber::operator/(const RationalNumber& rhs)
{
	RationalNumber t;//when dividing fractions you flip the second and multiply
	t.n = n * rhs.d;//numerator of lhs times the denominator of rhs
	t.d = d * rhs.n;//denominator times the rhs numerator
	return t;
}

RationalNumber RationalNumber::operator=(const RationalNumber& rhs)
{
	int gcf;
	n = rhs.n;//sets them equal to each other
	d = rhs.d;

	for (gcf = 1000; gcf >= 2;gcf--)//searches for greatest common factor, if so, divide both numerator and divisor by gcf
	{
		if (n % gcf == 0 && d % gcf == 0)
		{
			n = rhs.n / gcf;
			d = rhs.d / gcf;
		}
	}

	if (n % d == 0)//if numerator and denominator are divisible by each other with 0 remainders then set n= a whole number and d = 1; 
	{
		n = rhs.n / rhs.d;
		d = 1;
	}

	return *this;
}

bool RationalNumber::operator>(const RationalNumber& rhs)
{
	if ((float)n / (float)d > (float)rhs.n / (float)rhs.d)//if lhs > rhs return true
	{
		return true;
	}
	
	else
	{
		return false;
	}
}

bool RationalNumber::operator<(const RationalNumber& rhs)
{
	if (((float)n / (float)d) < ((float)rhs.n / (float)rhs.d))//if lhs < rhs return true
	{
		return true;
	}

	else
	{
		return false;
	}
}

bool RationalNumber::operator>=(const RationalNumber& rhs)
{
	if ((float)n / (float)d >= (float)rhs.n / (float)rhs.d)//if lhs >= rhs return true
	{
		return true;
	}

	else
	{
		return false;
	}
}

bool RationalNumber::operator<=(const RationalNumber& rhs)
{
	if ((float)n / (float)d <= (float)rhs.n / (float)rhs.d)//if lhs <= rhs return true
	{
		return true;
	}

	else
	{
		return false;
	}
}

bool RationalNumber::operator==(const RationalNumber& rhs)
{
	if ((float)n / (float)d == (float)rhs.n / (float)rhs.d)//if lhs == rhs return true
	{
		return true;
	}

	else
	{
		return false;
	}
}

bool RationalNumber::operator!=(const RationalNumber& rhs)
{
	if ((float)n / (float)d != (float)rhs.n / (float)rhs.d)//if lhs != rhs return true
	{
		return true;
	}

	else
	{
		return false;
	}
}