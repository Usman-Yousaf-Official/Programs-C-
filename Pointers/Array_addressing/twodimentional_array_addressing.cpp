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
	
	// derefrencing the array address of different rows and columns for values at given addresses
	
	cout << "\nValue of 3rd row and 4th column element in this case (2,3): " << *(*(multi +2) + 3); // output should be 6
	
	cout << "\nValue of 4th row and 7th column element in this case (3,6): " << *(*(multi +3) + 6); // output should be 18
	
	cout << "\nValue of 5rd row and 6th column element in this case (4,5): " << *(*(multi +4) + 5); // output should be 20
}

