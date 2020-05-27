//Ostyn Sy
#pragma once
using namespace std;
#ifndef OSTYN_SY_HEARTRATES_H
#define OSTYN_SY_HEARTRATES_H
#include <iostream>
#include <string>

class HeartRates
{
private:
	string firstName; // user's first name   
	string lastName; // user's last name   
	int birthMonth; // user's birth month   
	int birthDay; // user's birth day   
	int birthYear; // user's birth year   
	int currentMonth; // current month   
	int currentDay; // current day   
	int currentYear; // current year
	int Agey;
	int Age;
	int maxHeart;
	int range1Heart;
	int range2Heart;
	int a, b, c;

public:
	HeartRates();//constructor
	void setName();//functions needed
	void getName();
	void setDates();
	void getDates();
	void setcurrDate();
	int getAge();
	int getMaximumHeartRate();
	void getTargetHeartRate();
};
#endif