#include <iostream>
#include <time.h>

using namespace std;


int main()
{
	srand(time(NULL));
	int pos;
	int spread[10] = { 0,0,0,0,0,0,0,0,0,0 };
	int r;

	for (int i = 0; i < 100000000; i++)
	{
		pos = 1;
		for (int i = 0; i < 9; i++)
		{
			r = rand() % 2;
			if (r == 1)
			{
				pos++;
			}
		}
		spread[pos - 1]++;
	}

	cout << "Simulation complete, here is the spread:\n";

	for (int i = 0; i < 10; i++)
	{
		cout << "number of " << i + 1 << ": " << spread[i];
		cout << "\n";
	}
	return 0;
}

