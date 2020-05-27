//Ostyn Sy
#include "Ostyn_Sy_HeartRates.h"

HeartRates::HeartRates() //constructor to initialize data
{
	firstName = "";   
	lastName = "";
	birthMonth = 0;
	birthDay = 0;
	birthYear = 0;
	currentMonth = 0; 
	currentDay = 0; 
	currentYear = 0; 
	Agey = 0;
	Age = 0;
	maxHeart = 0;
	range1Heart = 0;
	range2Heart = 0;
}

void HeartRates::setName()//prompts for first and last name.
{
	cout << "Please enter first and last name (seperated by spaces):" << endl;
	cin >> firstName >> lastName;
}

void HeartRates::getName()// prints out first and last name
{
	cout << "First Name: " << firstName << endl;
	cout << "Last Name: " << lastName << endl;
}

void HeartRates::setDates()//gets the birth date
{
	cout << "Please enter month, day, and year of birth (seperated by spaces):" << endl;
	cin >> birthMonth >> birthDay >> birthYear;
}

void HeartRates::getDates()//prints out birth date
{
	cout << "Date of Birth: " << birthMonth << "/" << birthDay << "/" << birthYear << endl;
}

void HeartRates::setcurrDate()//get the current date
{
	cout << "Please enter today's month, day, and year (seperated by spaces):" << endl;
	cin >> currentMonth >> currentDay >> currentYear;
}

int HeartRates::getAge()//asks for current date and determine users age
{
	setcurrDate();
	Agey = currentYear - birthYear;//calcualtes the age by year

	if (currentMonth > birthMonth)//if month greater than birth month then the user is the age calcualted by year
	{
		Age = Agey;
	}
	else if (currentMonth < birthMonth)//if the month is less than birth month then it has not yet reached users birthmonth. Therefore user is not yet the age of the difference in years.
	{
		Age = Agey - 1;
	}
	else//if the months are equal, then we have to look at the current date and the users birth date to determine age.
	{
		if (currentDay < birthDay)//if currrent day is less then birth day then it is not quite the users birthday yet
		{
			Age = Agey - 1;
		}
		else//if the days are equal or more then the users age is the same as the difference in years.
		{
			Age = Agey;
		}
	}
	return Age;
}

int HeartRates::getMaximumHeartRate()//calcualtes maximum heart rate by subtracting the age from 220.
{
	maxHeart = 220 - Age;
	return maxHeart;
}

void HeartRates::getTargetHeartRate()//calcualtes target heart rate by multiplying max heart rate by .5 and .85. Then displays the range.
{
	range1Heart = .5 * maxHeart;
	range2Heart = .85 * maxHeart;
	cout << "Target Heart Rate: " << range1Heart << "-" << range2Heart << endl;
}