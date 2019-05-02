// The median of a set of values is the middle value. If the 
// set contains an even number of values, the median is the
// mean (average) of the two middle values.

// This program uses a function that accepts an array of 
// integers and an integer that indicates the number of 
// elements in the array. It then determines the median.

// Pointer notation is used instead of array notation. 

#include <iostream>
using namespace std; 

// Function prototype 

double median_value(int *arrptr, int n); 

int main()
{
	// declare array 

	int *array = new int[20];

	// i is loop variable, n is size of array 

	int i, n; 

	double Median; 
	cout << "Enter the size of the array: "; 
	cin >> n; 
	cout << "Enter the elements of the array: "; 
	for (i = 0; i < n; i++)
	{
		cin >> *(array + i); 
	}
	Median = median_value(array, n); 

	cout << "Median is " << Median; 

}

// Function definition 

double median_value(int *arrptr, int n)
{
	// local variable 
	double median; 
	if (n%2==0)
	{
		median = (*(arrptr + (n/2)) + *(arrptr) + ((n/2)+1))/2; 
	}
	else
	{
		median = *(arrptr + (n/2)); 
	}
	return median; 
}

