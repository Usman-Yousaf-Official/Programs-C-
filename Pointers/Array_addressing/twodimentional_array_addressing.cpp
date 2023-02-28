#include <iostream>
using namespace std;

main ()
{
	int multi[5][10];
	int row, col;
	int *ptr;
	ptr = *multi;
	
	for(row = 0; row < 5; row++){
		for(col = 0; col < 10; col++){
			multi[row][col] = row*col;
		}
	}
	
	for(row = 0; row < 5; row++){
		for(col = 0; col < 10; col++){
			cout << (*ptr++) << "  ";
		}
		cout << "\n";
	}
	
	
	
	cout << "\nAddress of the array is shown using pointer: \n";
	cout << multi;
	
	
	// using * with name of the array would still show the address of the array as
	
	cout << "\n" << *multi;
	
	// this is beacause multi is a 2 dimentional array and we can not derefrence it to show the value at that address by adding 1 * with the array name
	// to derefrence a two dimentional array we will have to add 2 * to the array multi to show its value:
	
	cout << "\nDerefrenceing two dimentional array to see the value of first element of the array: " << **multi;
	
}

