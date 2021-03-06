#include<iostream>
using namespace std;

int main()
{
	// create a round number
	srand((unsigned int)time(NULL));
	int num = rand() % 100 + 1;
	cout << num << endl;

	int inputValue = 0;
	int biggestGuessCount = 0;

	while (biggestGuessCount <= 3)
	{
		biggestGuessCount++;
		cin >> inputValue;
		if (inputValue > num)
		{
			cout << "bigger" << endl;
		}
		else if (inputValue < num)
		{
			cout << "smaller" << endl;
		}
		else {
			cout << "nice" << endl;
			break;
		}
	}
	cout << "You are failed" << endl;
	return 0;
}