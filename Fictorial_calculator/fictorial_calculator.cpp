#include <iostream>
using namespace std;

int main()
{
	int number;
	int fictorial = 1;
	cout << "Please enter a number whose fictorial you want to calculate: ";
	cin >> number;
	while (number >= 1)
	{
		fictorial = fictorial * number;
		number = number - 1;
	}
	
	cout << "\nThe Fictorial of given number is: " << fictorial;

}

