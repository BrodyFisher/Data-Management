#include <iostream>
#include <time.h>

using namespace std;


int main()
{
	srand(time(NULL));
	int pos = 1;
	int guess;
	double bet;

	for (;;)
	{
		cout << "Call your end point\n";
		cin >> guess;
		cout << "Enter the amount that you want to bet\n";
		cin >> bet;
		double winnings[10] =
		{
		5,
		4,
		3,
		2,
		1.5,
		1.5,
		2,
		3,
		4,
		5
		};

		for (int i = 0; i < 9; i++)
		{
			int r = rand() % 2;
			if (r == 1)
			{
				pos++;
			}
		}
		cout << "The ball landed in square " << pos << "\n";

		if (pos == guess)
		{
			cout << "You chose the right square, you win!\n";
			bet *= winnings[pos - 1];
			cout << "You won " << bet << " dollars!\n";
		}
		else
		{
			cout << "You chose the wrong square, you lose\nYou won 0 dollars\n";
		}
	}
	return 0;
}