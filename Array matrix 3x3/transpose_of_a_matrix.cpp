#include <iostream>
using namespace std;

main()
{
	int row,col;
	const int maxRows = 3;
	const int maxCols = 3;
	int a[maxRows][maxCols];
	int transpose[maxRows][maxCols];
	
	for (row=0;row<maxRows;row++)
	{
		for(col=0;col<maxCols;col++)
		{
			cout << "Value of " << row << "," << col << " index of matrix is : ";
			cin >> a[row][col];
		}
	}
	
	cout << "\n\n The original matix is: \n";
	
	for (row=0;row<maxRows;row++)
	{
		cout << "\n";
		for(col=0;col<maxCols;col++)
		{
			cout << "\t" << a[row][col];
			if (col == maxCols - 1)
            cout << "\n";
		}
		
	}
	
   // Computing transpose of the matrix
	
	for (int row = 0; row < maxRows; row++)
	{
    	for (int col = 0; col < maxCols; col++) 
		{
    		transpose[col][row] = a[row][col];
		}
	}

   // Printing the transpose
 
   cout << "\n\n The transpose of original matix is: \n\n";
 
   for (int row = 0; row < maxCols; row++)
   {
		for (int col = 0; col < maxRows; col++) 
		{
        	cout << "\t" << transpose[row][col];
        	if (col == maxRows - 1)
			{
				cout << "\n" << "\n" ;
			}
		}
   }
	
}

