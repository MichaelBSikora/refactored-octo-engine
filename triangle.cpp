// This program generates a table of Pythagorean triples 

#include<iostream>
using namespace std; 

int main()
{

	int m, n; // Integer values of m and n 
	int a, b, c; // Integer values of side a, side b, side c 

	cout << "Pythagorean Triples" << endl; // Title 
	cout << "Enter value for m: "; // Prompt user for input of integer m 
	cin >> m;
	cout << "Enter value for n: "; // Prompt user for input of integer n
	cin >> n; 

	a = 2 * m * n; // Formula for side a 
	b = (m * m) - (n * n); // Formula for side b 
	c = (m * m) + (n * n); // Formula for side c 

	cout << "Side a = " << a << endl; // Display triples
	cout << "Side b = " << b << endl;  
	cout << "Side c = " << c << endl; 

	return 0;
}
