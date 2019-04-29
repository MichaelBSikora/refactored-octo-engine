// This program uses a recursive function to calculate the gcd of two numbers
#include <iostream>
using namespace std;

// Function prototype
int gcd(int, int);

int main()
{
	int num1, num2;

	// Get the two numbers
	cout << "Enter two integers: ";
	cin >> num1 >> num2; 

	// Display the gcd of the two numbers
	cout << "The gcd of " << num1 << "and" << num2 << "is";
	cout << gcd(num1, num2) << endl;
	return 0;
}

// Definition of the gcd. 

int gcd (int x, int y)
{
	if (x % y == 0)
		return y;		// Base case 
	else
		return gcd(y, x % y); // Recursive case 
}
