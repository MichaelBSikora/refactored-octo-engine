// This program uses a function that calculates the distance 
// an object has fallen in a given time interval. 

#include <iostream>
#include <cmath>

using namespace std; 

// Function prototype
double fallingDistance(int t = 0);

int main()
{
	int t = 0; // time in seconds 
	double d = 0; // distance in meters 

	cout << "I will calculate the distance an object has fallen in 10 seconds\n";

	for (int i = 1; i <= 10; i++)
	{
		d = fallingDistance(i);
		cout << i << " seconds: " << d << " meters\n";
	}
	return 0; 
}

double fallingDistance(int t)
{
	double d = 0;
	const double g = 9.8; // gravity constant 

	d = (0.5 * g) * (pow(t,2));
	return d; 
}