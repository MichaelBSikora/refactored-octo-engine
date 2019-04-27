// This program prompts a user for a positive integer no greater than 15. 
// The program then displays a square on the screen using the character
// 'X'. The number entered by the user will be the length of each side
// of the square. 

#include <iostream>
using namespace std; 

int main()
{
	int sideSize = 0; 

	cout << "Enter a number from 1 to 15: " << endl;
	cin >> sideSize; 

	for (int r = 1; r <= sideSize; r++)
	{
		for (int c = 1; c <= sideSize; c++)
		{
			cout << "X";
		}
		cout << endl;
	} 

	return 0; 
}
