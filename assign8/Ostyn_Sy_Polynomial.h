#pragma once
#include <iostream> 
using namespace std;

class Polynomial
{
private:
	int term, coef, exp, c, e;
	int ExpArr[100];//array for exp
	int CoefArr[100];//array for coef
public:
	Polynomial();//constructor
	~Polynomial();//destructor

	void enterTerms();
	void printPolynomial();

	void setCoef(int c);//setters and getters
	int getCoef();

	void setExp(int e);
	int getExp();


	Polynomial& operator= (const Polynomial& rhs);//operator overloads
	Polynomial& operator+ (const Polynomial& rhs);
	Polynomial& operator+= (const Polynomial& rhs);
	Polynomial& operator- (const Polynomial& rhs);
	Polynomial& operator-= (const Polynomial& rhs);
};