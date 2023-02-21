#include <iostream>
#include <stdlib.h>

using namespace std;

main ()
{
	int z, i ; 
 	int a [ 100 ] ; 
 // Initializing the array. 
	for ( i =0 ; i < 100 ; i ++ ) 
	{ 
		 a [i] = rand() ; 
 	} 
 	cout << " Please enter a positive integer: " ; 
 	cin >> z ; 
 	int found = 0 ; 
 // loop to search the number. 
	for ( i = 0 ; i < 100 ; i ++ ) 
 	{ 
 		if ( z == a [ i ] ) 
 		{ 
 			found = 1 ; 
 			break ; 
 		} 
 	} 
 	if ( found == 1 ) 
 		{
 			cout << "\nWe found the integer at position " << i ;
		} 
 	else 
 		cout << "The number was not found " ; 
}

