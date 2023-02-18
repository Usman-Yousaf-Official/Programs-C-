#include <iostream>
using namespace std;

int main ()
{
	
	int num = 0;
	cout << "Enter the number of Students: ";
	cin >> num; 
	cout << "\n";
	int age[num] = {0};
	
	float age_Total = 0.0;
	float Avg_age = 0.0;

	for (int i = 0; i < num; i++)
	{
		cout << "Enter the age of student " << i+1 << " : ";
		cin >> age[i];
		cout << "\n";
		age_Total = age_Total + age[i];
	
	}

	cout <<"\nTotal age = " ;
	cout << age_Total << "\n";
	Avg_age = age_Total / num;
	cout <<"\nAverage Age = ";
	cout << Avg_age << "\n";
}

