// This program lets a user enter ten integer values into an array.
// The program then displays the minimum and maximum values stored
// in the array. 

#include<iostream>
using namespace std; 

int main()
{
	int numbers[10]; // Array 
	int minimum; // Minimum 
	int maximum; // Maximum 
	int temp; // Integer to compare against 

	for (int i = 0; i < 10; i++)
	{
		//Prompt user to enter integer values
		cout << "Enter integer " << i +1 << ": " << endl; 
		cin >> numbers[i];
	}

	minimum = numbers[0]; // First number entered in array 
	maximum = numbers[0]; 

	for (int i = 1; i < 10; i++)
	{
		temp = numbers[i]; // To compare against min and max 
		if (temp < minimum)
			minimum = temp;
	}
	for (int i = 1; i <= 10; i++)
	{
		temp = numbers[i];
		if (temp > maximum)
			maximum = temp; 
	}

	cout << "The maximum integer entered is: " << maximum << endl; 
	cout << "The minimum integer entered is: " << minimum << endl; 

return 0;
}