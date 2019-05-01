// This program prompts a user for a beginning balance
// and the number of checks writting for a commercial 
// checking account. It then computes and displays
// the bank's service fees for the month. 

// Bank charges $10 per month plus the following fees: 
// $0.10 each for fewer than 20 checks
// $0.08 each for 20-39 checks
// $0.06 each for 40-59 checks
// $0.04 for 60 or more checks 

// The bank also charges and extra $15 if balance
// of the account falls below $400 (before any 
// check fees are applied).

#include <iostream>
#include <iomanip>
using namespace std; 

int main()
{
	// Variable declaration 
	int numChecks; 
	double balance, extraCharge, feesAmount, serviceFees;
	double monthlyBankCharge = 10.0; 

	// Prompt user for beginning balance 
	cout << "Please enter beginning balance: $"; 
	cin >> balance; 

	// If negative value is entered, display message
	if (balance < 0)
		cout << "Your account is overdrawn.\n\n";
	else
	{
		cout << "Enter number of checks written: ";
		cin >> numChecks; 

		if (balance < 400)
			extraCharge = 15.00; 
		else
			extraCharge = 0.00;

		// Compute and display service fees
		if (numChecks >=0 && numChecks < 20)
			feesAmount = numChecks * 0.10; 
		if (numChecks >= 20 && numChecks <= 39)
			feesAmount = numChecks * 0.08; 
		if (numChecks >= 40 && numChecks <= 59)
			feesAmount = numChecks * 0.06; 
		if (numChecks >= 60)
			feesAmount = numChecks * 0.04; 
		if (numChecks < 0) 
			cout << "The number of checks cannot be negative.\n\n";

		serviceFees = extraCharge + feesAmount + monthlyBankCharge;

		// Display out

		cout << "Total service fees: $" << serviceFees << endl; 
	}
	return 0; 

	
}