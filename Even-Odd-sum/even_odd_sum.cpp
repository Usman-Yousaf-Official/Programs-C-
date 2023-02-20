#include <iostream>
using namespace std;

int main()
{
	int Sum = 0;
	int Number = 1;
	int UpperLimit;
	int EvenNumberSum;
	int OddNumberSum;
	cout << "Enter the Upperlimit of the range\nWhose Even and Odd sum you want to calculate : ";
	cin >> UpperLimit;
	while (Number <= UpperLimit)
	{
		if (Number % 2 == 0)
		{
			Sum = Sum + Number;
			EvenNumberSum = Sum;
		}
		else if (Number % 2 == 1)
		{
			OddNumberSum = OddNumberSum + Number;
		}		
		Number = Number + 1;
	}
	
	cout << "\nSum of Even numbers from 1 to " << UpperLimit << " is: " << EvenNumberSum << "\n\n";
	cout << "Sum of Odd numbers from 1 to " << UpperLimit << " is: " << OddNumberSum;
}

