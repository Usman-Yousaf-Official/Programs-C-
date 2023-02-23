#include <iostream>
using namespace std;

double raiseToPow (double x, int power)
{
	double result = 1.0;	

	//--------------------------------------------------	
	if (power < 0)
	{
		for(int i=0;i > power ; i--)
		{
			result *= x;
		}
	}	
	
	else if (power > 0) 
	{
		for(int i=0;i < power ; i++)
		{
			result *= x;
		}	
	}
	else if (power == 0)
		{
			result == 1;
		}

		return(result);		
}

main()
{
	double x;
	int power;
	cout << "Please Enter a number whose power you want to calculate: ";
	cin >> x;
	cout << "\nPlease Enter integer power you want to calculate for the given number: ";
	cin >> power;
	
	if (power < 0)
	{
		cout << 1 / raiseToPow(x,power);
	}
	else
	{
		cout <<"\n\n" << x << " raise to power " << power << " is equal to " << raiseToPow(x,power);
	}
}

