// Ackermann's function is a recursive mathematical 
// alogrithm that can be used to test how well a 
// computer performs recursion. 

// This program uses a function A(m,n) to solve Ackermann's
// function. The following logic is used: 

// If m = 0, return n + 1 
// If n = 0, return A(m - 1, 1)
// Otherwise, return A(m - 1, A(m, n - 1))

#include <iostream>
using namespace std; 

// Function prototype 

int A(int, int); 

int main()
{
	// Output performance 

	cout << "value of A(0,0):" << A(0,0) << endl; 
	cout << "value of A(0,1):" << A(0,1) << endl; 
	cout << "value of A(1,1):" << A(1,1) << endl; 
	cout << "value of A(1,2):" << A(1,2) << endl; 
	cout << "value of A(1,3):" << A(1,3) << endl; 
	cout << "value of A(2,2):" << A(2,2) << endl; 
	cout << "value of A(3,2):" << A(3,2) << endl; 
}

// Function definition 

int A(int m, int n) 
{
	if (m == 0)
		return n + 1; 
	else if (n == 0)
		return A(m -1, 1); 
	else
		return A(m - 1, A(m, n - 1)); 

}