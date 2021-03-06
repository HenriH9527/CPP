#include<iostream>
using namespace std;

int main()
{
	/*for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}*/

	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < i + 1; j++)
		{
			cout << j << " x " << i << " = " << i * j << " | ";
		}
		cout << endl;
	}

	return 0;
}