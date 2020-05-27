
#include <iostream>

using namespace std;

#include <vector>
vector <bool> set;
void inputSet();
void inputSet()
{

	int a = 0;
	int i = 0;

	while (a != -1)
	{
		cout << "Enter an element (-1 to end): ";
		cin >> a;

		if (a >= 0 && a <= 100)
		{
			set[i] = { true };
			i++;
		}

		else if (a < 0 && a>100)
		{
			set[i] = { false };
			i++;
		}

	}
}

int main()
{

	inputSet();

	for (int i = 0;i <= 100;i++)
	{
		cout << set[i] << endl;
	}
	return 0;
}

