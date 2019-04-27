// This program that calculates the amount of money needed to be deposited in an account 
// today so that, at the end of a given time period, a desired amount of money has 
// accumulated in the account. 
// This program uses the present value formula with the following variables:
// **************************************************************************************
// P is the present value -- the amount that you need to deposit today
// F is the future value -- the amount you want in the account. 
// r is the annual interest rate
// n is the number of years you plan to let the money sit in the account 

#include <iostream>
#include <iomanip>
#include <cmath> 

using namespace std; 

// Function prototype
double presentValue(double, double, int);

int main()
{
	double F = 0; // Future value 
	double r = 0; // Interest rate
	int n = 0; // Number of years 
	double P = 0; 

	cout << "Please enter the amount of money you want to save: $";
	cin >> F; 
	cout << "Please enter the interest rate: ";
	cin >> r;
	cout << "Please enter the number of years you will be saving: ";
	cin >> n; 

	P = presentValue(F,r,n);
	cout << "\n In order to save $ " << F << " you need to deposit $" << P << endl;
	return 0;
}

double presentValue(double F, double r, int n)
{
	double P;

	P = F / (pow(1 + (r * 0.01), n)); 
	return P;
}