#include<iostream>
using namespace std;

int main()
{
	int num = 100;
	do
	{
		int bit = 0;
		int ten = 0;
		int hundred = 0;

		bit = num % 10;
		ten = num / 10 % 10;
		hundred = num / 100;

		if (bit * bit * bit + ten * ten * ten + hundred * hundred * hundred == num)
		{
			cout << num << endl;
		}
		num++;
	} while (num < 1000);
}