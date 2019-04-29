// This program prompts a user to enter an account's present value,
// monthly interest rate, and the number of months that the money
// will be left in the account. 
// The program then returns the future value of the account. 

// The variables in the formula for Future Value are: 
// F -- the future value of the account after a specified time period
// P -- the present value of the account
// i -- monthly interest rate
// t -- the number of months

// F = P * (1 + i) ^ t 

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std; 

// Function prototype 
double futureValue(double P, double i, int t); 

// Main
int main()
{
	// variable declaration 
	double futValue = 0; 
	double presentValue; 
	double rate; 
	int months; 

	// Prompt user for account information 
	cout << "Enter the present value of account: $";
	cin >> presentValue; 
	cout << "Enter the monthly interest rate: ";
	cin >> rate; 
	cout << "Enter the number of months: ";
	cin >> months; 

	// Call futureValue function 

	futValue = futureValue(presentValue, rate, months);

	// Display future value 
	cout << "Future value is: $" 
	<< fixed << setprecision(2) 
	<< futValue << endl;

	return 0; 
}

double futureValue(double P, double i, int t)
{
	// F is the future value
	double F = 0;

	// Convert to decimal 
	i = i / 100.0;

	// Calculate future value 

	F = P * pow(1 + i, t); 

	return F; 
}