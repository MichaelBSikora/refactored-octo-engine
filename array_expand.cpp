// This program uses a function that creates a new 
// array that is twice the size of the argument array. 
// The function returns a pointer to the new array. 

#include <iostream>
using namespace std; 

// Function prototype 

int *Double_array(const int *, int); 

int main() 
{
	int array[20]; 
	int *Doubled; 
	int size; // array size 
	int i;   // loop variable 

	// User input 

	cout << "Enter the size of the array: "; 
	cin >> size; 

	cout << "Enter elements of array: "; 
	for (i = 0; i < size; i++)
		cin >> array[i]; 

	// Call function 

	Doubled = Double_array(array, size); 

	// Program output after doubling 

	cout << "Elements after doubling the array: " << endl; 
	for (i = 0; i < (2 * size); i++)
		cout << *(Doubled + i) << endl; 
}

// Function Defintion 

int *Double_array(const int *arr, int size) 
{
	int *New_array = new int[size * 2];
	int i; 
	for (i = 0; i < (size * 2); i++)
	{
		if (i < size)
			New_array[i] = arr[i]; // Copying to new array 
		else
			New_array[i] = 0; // Assign remaining locations to zero
	}

	return New_array;
}
