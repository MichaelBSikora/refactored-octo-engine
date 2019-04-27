// This program prompts the user to enter the number of students
// in a class, then loops to read that many names. It then reports
// which student should be at the front of a line and which at the
// back of a line. Number of students does not exceed 25. 

#include <iostream>
using namespace std;

int main()
{
	int numStudents = 0; 
	string studentName;
	string firstStudent;
	string lastStudent;

	while (numStudents < 1 || numStudents > 25)
	{
		cout << "Please enter number of students, not exceeding 25: \n";
		cin >> numStudents;

	}
	for (int i = 1; i <= numStudents; i++)
	{
		cout << "Please enter name of student: " << i << endl; 
		cin >> studentName; 

		if (i==1)
		{
			firstStudent = studentName;
			lastStudent = studentName; 
		}
		else
		{
			if (studentName < firstStudent)
				firstStudent = studentName; 
			else if (studentName > lastStudent)
				lastStudent = studentName;
		}
	}
	cout << "First student is " << firstStudent << endl;
	cout << "Last student is " << lastStudent << endl;

	return 0;
}