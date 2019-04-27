// This program prompts a user for an object's mass and velocity and then returns its kinetic energy 
#include <iostream>
#include <cmath>
using namespace std; 

double kineticEnergy(int m, int v); 
int main()
{
	double KE = 0; // Kinetic energy
	int m = 0; // mass
	int v = 0; // velocity 

	cout << "Please enter mass in kg: ";
	cin >> m;
	cout << "Please enter velocity in meters per second: ";
	cin >> v;

	int ke = kineticEnergy(m, v);
	cout << "\nKinetic energy of this object is " << ke << endl;
	


	return 0;
}

double kineticEnergy(int m, int v)
{
	return (0.5 * m)*(pow(v,2));
}