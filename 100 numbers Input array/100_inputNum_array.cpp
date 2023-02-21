#include <iostream>
using namespace std;

main ()
{
	int z,i = 0;
	int c[100];
	do {
		cin >> z;
		if (z != -1)
		{
			c[i] = z;
		}
		i++;
	}
	while ( z != -1 && i < 100);
	
	cout << "The total number of positive integers entered by the user is " << i-1;
}

