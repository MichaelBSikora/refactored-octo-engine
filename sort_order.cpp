// This program uses two identical arrays of eight integers. 
// It then implements the bubble sort and selection sort 
// algorithms to display the contents of the arrays in 
// ascending order. 

#include <iostream>
using namespace std; 

//Function prototypes 
void bubbleSort(int arr[], int);
void selectionSort(int arr[], int);

int main()
{
	int array1[8] = {5, 1, 4, 6, 3, 8, 2, 7};
	int array2[8] = {5, 1, 4, 6, 3, 8, 2, 7};

	int i; // Loop variable

	// Display contents of array 1 

	cout << "Elements of first array: " << endl; 
	for(i=0; i < 8; i++)
		cout << " " << array1[i];
	cout << endl; 

	// Call bubbleSort function 
	bubbleSort(array1, 8); 

	// Display contents of array 2

	cout << "Elements of second array: " << endl; 
	for (i = 0; i < 8; i++)
		cout << " " << array2[i]; 
	cout << endl; 

	// Call selectionSort function 
	selectionSort(array2, 8); 
	system("pause"); 
}

void bubbleSort(int array[], int size)
{
	bool swap; 
	int temp;
	cout << "Bubble sort" << endl;
	do
	{
		swap = false; 
		for (int count = 0; count < (size -1); count++)
		{
			if(array[count] > array[count +1])
			{
				temp = array[count];
				array[count] = array[count + 1];
				array[count + 1] = temp; 
				swap = true;
			}
		}
	 for (int i = 0; i < size; i++)
		cout << array[i] << " "; 
		cout << endl;
		
	} while (swap);
}

void selectionSort(int array[], int size)
{
	int startScan, minIndex, minValue; 
	cout << "Selection sort: " << endl; 
	for(startScan = 0; startScan < (size - 1); startScan++)
	{
		minIndex = startScan;
		minValue = array[startScan];
		for (int index = startScan + 1; index < size; index++)
		{
			if (array[index] < minValue)
			{
				minValue = array[index];
				minIndex = index;
			}

		}
	}
	for (int i = 0; i < size; i++)
		cout << array[i] << " "; 
	cout << endl;
}