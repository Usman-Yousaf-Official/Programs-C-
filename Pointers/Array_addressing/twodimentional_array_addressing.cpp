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
	
	// This will still shows address of the first element of the array because it is a two dimentional array and we will have to use * twice 
	// to derefrence the address of this element of the array.
	
	cout << "\n" << *multi;
	cout << "\nValue of the first elemnt of the array is: " << **multi;
	
}

