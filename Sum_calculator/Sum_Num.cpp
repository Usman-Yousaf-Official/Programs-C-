#include <iostream>
using namespace std;

// calculates sum of positive intergers statring form 1.

int main ()
{
	int Number, Sum, Limit;
	Number = 0; Sum = 0; Limit = 0;
	cout <<"Enter the total amount of numbers you want to calculate sum of = ";
	cin >> Limit;
	while (Number<=Limit)
	{
		Sum = Sum + Number;
		Number = Number + 1;
	}
	cout <<"\nThe sum of first " << Limit << " numbers starting form 1 = " << Sum;
}

