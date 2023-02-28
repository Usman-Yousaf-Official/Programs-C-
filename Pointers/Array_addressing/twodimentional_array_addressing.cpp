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
	
	
	
	cout << "\nAddress of the array is shown using pointer in this case (0,0): \n";
	cout << multi;
	
	
	// using * with name of the array would still show the address of the array as
	
	cout << "\n" << *multi;
	
	// this is beacause multi is a 2 dimentional array and we can not derefrence it to show the value at that address by adding 1 * with the array name
	// to derefrence a two dimentional array we will have to add 2 * to the array multi to show its value:
	
	cout << "\nDerefrenceing two dimentional array to see the value of first element of the array: " << **multi;
	
	// adding ++ to the 2d array will make pointer jump an entire row
	
	cout << "\nAddress of the first element of second row in this case it is (1,0): " << multi+1;
	
	// in order to move pointer to next column we have to derefrence the row then add number of column we want to jump
	
	cout << "\nAddress of the second element of first row in this case it is (0,1): " << *multi + 1;
}

