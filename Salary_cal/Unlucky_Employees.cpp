#include <iostream>
using namespace std;

void getInput(double sal[][2], int numEmps); 
void calcNetSal(double sal[][2], int numEmps); 
void findUnluckies(double sal[][2], int numEmps, int lucky[]); 
void markIfUnlucky(double sal[][2], int numEmps, int lucky[], int upperBound, int empNbr); 
void printUnluckies(int lucky[], int numEmps);

main ()
{
	const int arraySize = 100;
	double sal[arraySize][2];
	int lucky [arraySize] = {0};
	
	//getting number of employees from user
	
	int numEmps;
	cout << "Enter the total number of employees of your company: ";
	cin >> numEmps;
	cout << "\n";
	
	
/* Read the gross salaries of the employees into the array 'sal' */ 
 getInput(sal, numEmps); 
 
 /* Calculate net salaries of the employees and store them in the array */ 
 cout << "\n\n Calculating the net salaries ... "; 
 calcNetSal(sal, numEmps); 
 
 /* Find the unlucky employees */ 
 cout << "\n\n Locating the unlucky employees ... "; 
 findUnluckies(sal, numEmps, lucky); 
 
 /* Print the unlucky employee numbers */ 
 cout << "\n\n Printing the unlucky employees ... "; 
 printUnluckies(lucky, numEmps);
}

// function call to get number of employees of the company and their gross salaries

void getInput(double sal[][2], int numEmps)
	{ 
 		for (int i = 1; i <= numEmps; i ++) 
 		{
 			cout << "\n Please enter the gross salary for employee no." << i << ": ";
 			cin >> sal[i][0]; // Get the gross salary for each employee 
		} 
	}	

// function that calculates and adds the net salary to second column of salary array of the employees

void calcNetSal(double sal[][2], int numEmps)
{
	for (int i = 0; i < numEmps; i++) //Note that this numEmps is local to this function 
 	{ 
 		if(sal[i][0] >= 0 && sal[i][0] <= 5000) 
 		{ 
 			/* There is no tax deduction */ 
 			sal[i][1] = sal[i][0]; 
		}
 		else if(sal[i][0] >= 5001 && sal[i][0] <= 10000) 
 		{ 
 			/* Tax deduction is 5% */ 
 			sal[i][1] = sal[i][0] - (.05 * sal[i][0]); 
		}
 		else if (sal[i][0] >= 10001 && sal[i][0] <= 20000) 
 		{ 
 			/* Tax deduction is 10% */ 
 			sal[i][1] = sal[i][0] - (.10 * sal[i][0]); 
		}
 		else if (sal[i][0] >= 20001) 
 		{ 
 			/* Tax deduction is 15% */ 
 			sal[i][1] = sal[i][0] - (.15 * sal[i][0]); 
		}
 		else 
 		{ 
 			/* No need to do anything here */ 
		}
	} 
}

// function that finds the unluckey employees in the company

void findUnluckies(double sal[][2], int numEmps, int lucky[])
{ 
 	for (int i = 0; i < numEmps; i++) //Note that this numEmps is local to this function 
 	{ 
 		if(sal[i][0] >= 0 && sal[i][0] <= 5000) 
 		{ 
 			/* No need to check for unlucky employees for this tax bracket */ 
		 	; 
		} 
 		else if(sal[i][0] >= 5001 && sal[i][0] <= 10000) 
 		{ 
 			markIfUnlucky(sal, numEmps, lucky, 5001, i); 
		} 
 		else if (sal[i][0] >= 10001 && sal[i][0] <= 20000) 
 		{ 
 			markIfUnlucky(sal, numEmps, lucky, 10001, i); 
 		} 
 		else if (sal[i][0] >= 20001) 
 		{ 
 			markIfUnlucky(sal, numEmps, lucky, 20001, i); 
 		} 
 	} 
} 

// function that mark the unluckey emplayees in the lucky array

void markIfUnlucky(double sal[][2], int numEmps, int lucky[], int upperBound, int empNbr)
{ 
 	for (int i = 0; i < numEmps; i++) 
 	{ 
 		/* 
	 	See the if the condition below, it will mark the employee 
 		unlucky even if an employee in the higher tax bracket is getting 
 		the same amount of net salary as that of a person in the lower 
 		tax bracket 
 		*/ 
 		if (sal[i][0] < upperBound && sal[i][1] >= sal[empNbr][1]) 
 		{ 
 			lucky[empNbr] = 1; //Employee marked as unlucky 
 			break; 
		}
	}
}

// function that shows the number of unluckey employees marked by the markIfUnlucky() function in luckey array

void printUnluckies(int lucky[], int numEmps) 
{ 
 	for (int i = 0; i < numEmps; i++) 
 	{ 
 		if(lucky[i] == 1) 
 		{
 			cout <<"\n Employee No.: " << i; 
 		} 
 	} 
} 


