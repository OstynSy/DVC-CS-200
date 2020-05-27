//Ostyn Sy

#include <iostream>
#include <string>
using namespace std;

const int ROWS = 4;
const int COLS = 5;

int getTotal(int[][COLS], int);
int getTotal(int array[][COLS], int rows)
{
	int total = 0;
	for (int i = 0;i < rows; i++)
	{
		for (int j = 0; j < COLS;j++)
		{
			total += array[i][j];
		}
	}
	return total;
}

double getAverage(int[][COLS], int);
double getAverage(int array[][COLS], int rows)
{
	double avg = 0;
	avg = getTotal(array, rows) / (20.0);
	return avg;
}

int getRowTotal(int[][COLS], int);
int getRowTotal(int array[][COLS], int rowToTotal)
{
	int Rtotal = 0;
	for (int i = 0; i < COLS;i++)
	{
		Rtotal += array[rowToTotal][i];
	}
	return Rtotal;
}

int getColumnTotal(int[][COLS], int, int);
int getColumnTotal(int array[][COLS], int colToTotal, int rows)
{
	int Ctotal = 0;
	for (int i = 0; i < rows;i++)
	{
		Ctotal += array[i][colToTotal];
	}
	return Ctotal;
}

int getHighestInRow(int[][COLS], int);
int getHighestInRow(int array[][COLS], int rowToSearch)
{
	int highest=array[rowToSearch][0];
	for (int i = 0; i < COLS; i++)
	{
		if (array[rowToSearch][0]< array[rowToSearch][i])
		{
		 highest = array[rowToSearch][i];
		}
	}
	return highest;
}

int getLowestInRow(int[][COLS], int);
int getLowestInRow(int array[][COLS], int rowToSearch)
{
	int lowest= array[rowToSearch][0];
	for (int i = 0; i < COLS; i++)
	{
		if (array[rowToSearch][0] > array[rowToSearch][i])
		{
			lowest = array[rowToSearch][i];
		}
	}
	return lowest;
}

int main()
{
	int testArray[ROWS][COLS] =
	{ 
	{ 1,   2,  3,  4,  5 },
	{ 6,   7,  8,  9, 10 },
	{ 11,  12, 13, 14, 15 },
	{ 16,  17, 18, 19, 20 } 
	};

	cout << "The Total of the array elements is " << getTotal(testArray, ROWS) << endl;
	cout << "The average value of the array elemts is " << getAverage(testArray, ROWS) << endl;
	cout << "The total of row 0 is " << getRowTotal(testArray, 0) << endl;
	cout << "The total of col 2 is " << getColumnTotal(testArray, 2, ROWS) << endl;
	cout << "The highest value in row 2 is " << getHighestInRow(testArray, 2) << endl;
	cout << "The lowest value in row 2 is " << getLowestInRow(testArray, 2) << endl;
	system("PAUSE");
	return 0;
}



