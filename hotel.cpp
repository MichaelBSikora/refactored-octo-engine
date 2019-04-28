// This program calculates the occupancy rate for a hotel. 
// The program prompts the user for the # of floors in the hotel,
// the # of rooms on each floor, and how many are occupied.l 
// The program then displays the results. 
// The program skips the 13th iteration since most hotels do not
// have a 13th floor. 

// The program does not accept a value less than 1 for the 
// number of floors, and does not accept a value less than
// 10 for the number of rooms per floor. 

#include<iostream>
#include<iomanip>
using namespace std; 

int main()
{
	int roomsPerFloor = 0; 
	int totalRooms = 0; 
	int totalFloors = 0; 
	int totalOccupiedRooms = 0; 
	int occupiedRoomsPerFloor = 0; 
	float percentOccupied = 0.0; 

	// Prompt user for hotel information 

	cout << "Enter the number of floors: "; 
	cin >> totalFloors;

	while (totalFloors < 1)
	{
		cout << "Number oof floors must be at least 1. Please re-enter.";
		cin >> totalFloors;
	}

	for (int i = 1; i <= totalFloors; i++)
	{
		if (i != 13)
		{
			cout << "Enter the number of rooms on the floor: ";
			cin >> roomsPerFloor;

			while (roomsPerFloor < 10)
			{
				cout << "Number of rooms on floor must be at least 10. Please re-enter.";
				cin >> roomsPerFloor;
			}

		}

		cout << "How many rooms are occupied?"; 
		cin >> occupiedRoomsPerFloor;

		totalRooms += roomsPerFloor;
		totalOccupiedRooms += occupiedRoomsPerFloor;
	}

	percentOccupied = (totalOccupiedRooms * 1.0 / totalRooms) * 100.0; 

	cout << "The hotel has total of " << totalFloors << " floors\n";
	cout << "The hotel has total of " <<totalRooms << " rooms\n";
	cout << "There are " << totalOccupiedRooms << " rooms occupied\n";
	cout << "There are " << totalRooms - totalOccupiedRooms << " empty rooms.\n";
	cout << "Percentage of occupied rooms is " << setprecision(2) << fixed << percentOccupied << "%" << endl; 
}