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
	
}

