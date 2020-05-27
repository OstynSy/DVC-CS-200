//Ostyn Sy
#include <iostream>
#include <string>
#include <stdlib.h>
#include <ctime>
using namespace std;

class Die
{

private:
	int sides;
	int value;

public:

	Die()//constructor
	{
		roll();
	};

	void setSides(int numSides) //setter and roll the dice. It obtains the amount of sides that you want to roll the dice and will roll the dice.
	{
		sides = numSides;
		roll();
	}

	void roll() //function roll will take a random number between 1-6 and output a value that can be get through getValue.
	{
		value = (rand() % sides) + 1;
	}

	int getSides() //getter
	{
		return sides;
	}

	int getValue()//returns value
	{
		return value;
	}
};

int main()
{
	Die Dice1;
	Die Dice2;
	srand(time(0));

	char choice;
	int myPoints = 0;
	int compPoints = 0;

	cout << "Let's play a game of 21!" << endl;
	cout << endl;
	cout << "--------------------------------" << endl;

	while (compPoints < 17) //calculate comp points by rolling both dices and adding them together. It will keep rolling the dice until the comp has at least 17 points.
	{
		Dice1.setSides(6);
		Dice2.setSides(6);
		compPoints = compPoints + Dice1.getValue() + Dice2.getValue();
	}

	while (myPoints < 21) //Loop will keep prompting until 21 points or until the user decides to to stop rolling.
	{
		cout << "Would you like to roll the dice?" << endl;
		cout << "Enter Y for yes or N for no: ";
		cin >> choice;
		cout << endl;

		if (choice == 'y'|| choice=='Y')//choice to roll both dice and add them together to calculate the total points. 
		{
			Dice1.setSides(6);
			Dice2.setSides(6);
			myPoints = myPoints + Dice1.getValue() + Dice2.getValue();
			cout << "You have " << myPoints <<" points."<< endl;
			cout << endl;
		}

		else if (choice=='n'||choice=='N')//choice to stop rolling. It will stop the loop and continue to the next part of the program. 
		{
			break;
		}
		else //incorrect commands will prompt the message and reiterate the loop.
		{
			cout << "Sorry, that is not a command!" << endl;
			cout << endl;
		}
	}

	cout << "You had " << myPoints << " points" << endl;
	cout << "Computer had " << compPoints << " points" << endl;
	cout << endl;

	if((myPoints<=21 && myPoints>compPoints)|| (myPoints <= 21 && compPoints>21)) //condition to win if user points are less than 21 and user points are less than computers. Or, user points are less than or equal to 21 and the computer points are less than 21.
	{
		cout << "Congratulations! you won!" << endl;
		cout << endl;
	}

	else if (myPoints>21 || (compPoints>myPoints && myPoints<=21 && compPoints <=21)) //condition to lose if user points are greater than 21 or comp points are greater than user points while they are both equal or below 21.
	{
		cout << "Better luck next time" << endl;
		cout << endl;
	}
	
	else if(myPoints = compPoints) //condition for tie if user points and computer points are equal to each other.
	{
		cout << "It's a tie!" << endl;
		cout << endl;
	}

	cout << "Game Over" << endl;//GG
	system("pause");
	return 0;
}
