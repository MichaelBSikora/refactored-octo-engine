// This program demonstrates the Linear Search Algorithm 
#include <iostream>
using namespace std; 

// Function prototype 
int linearSearch(const int[], int, int);

int main()
{
	const int SIZE = 5; 
	int tests[SIZE] = {87, 75, 98, 100, 82};
	int results;

	// Search the array for 100 
	results = linearSearch(tests, SIZE, 100);

	// If linearSearch returned -1, then 100 was not found. 
	if(results == -1)
		cout << "You did not earn 100 points on any test\n";
	else
	{
		 cout << "You earned 100 points on test "; 
		 cout << (results + 1) << endl;
	}
	return 0;
}

int linearSearch(const int arr[], int size, int value)
{
	int index = 0; 
	int position = -1;
	bool found = false; 

	while (index < size && !found)
		{
			if (arr[index]==value)
			{
				found = true; 
				position = index;
			}
			index++;
		}
		return position;
}