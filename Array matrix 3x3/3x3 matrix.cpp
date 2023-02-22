#include <iostream>
using namespace std;

main()
{
	int row,col;
	const int maxRows = 3;
	const int maxCols = 3;
	int a[maxRows][maxCols];
	
	for (row=0; row<maxRows;row++)
	{
		for(col=0;col<maxCols;col++)
		{
			cout << "please enter the value for each index of " << row << "," << col << " : ";
			cin >> a[row][col];
		}
	}
	cout << "\n---------------------------------------\n";
	cout << "---------------------------------------\n";
	cout << "Original order of the matrix is: \n";
	for (row=0; row<maxRows;row++)
	{
		cout << "\n";
		for(col=0;col<maxCols;col++)
		{
			cout << a[row][col] << "\t";
		}
	}
	
	cout << "\n\nReverse order of the matrix is: \n";
	for (row=maxRows-1 ; row>=0;row--)
	{
		cout << "\n";
		for(col=0;col<maxCols;col++)
		{
			cout << a[row][col] << "\t";
		}
	}
	
	cout << "\n\nReverse order of the matrix is: \n";
	for (row=0; row<maxRows;row++)
	{
		cout << "\n";
		for(col=maxCols-1 ; col>=0;col--)
		{
			cout << a[row][col] << "\t";
		}
	}
}

