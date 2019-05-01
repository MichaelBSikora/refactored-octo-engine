// A magic date is one in which when written in the following
// format, MM-DD-YY, the month times the day equals the year.

// This program asks a user to enter a date and the program
// determines whether the month times the day equals the
// year. 

#include <iostream>
using namespace std; 

int main()
{
	int Month, Day, Year, I; 

	cout << "Enter a month: " << endl; 
	cin >> Month;
	cout << "Enter a date: " << endl; 
	cin >> Day; 
	cout << "Enter a year (2 digits): " << endl; 
	cin >> Year; 

	// multiplication of month and date

	I = Month * Day; 

	// Check condition 

	if (I == Year)
	{
		cout << "Date is Magic!" << endl; 

	}
	else
		cout << "Date is not Magic!" << endl; 
}