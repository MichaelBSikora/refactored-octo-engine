// This program uses a structure named Movie data to store the 
// following information about a movie:
// Title
// Director
// Year released 
// Running time (in minutes)


#include <iostream>
#include <iomanip>
#include <string>
using namespace std; 

// Structure declaration 

struct MovieData
{
	string title;
	string director; 
	int yearReleased;
	int runningTime;
};

// Function prototype 
void showMovieData(MovieData movie);

int main()
{
	MovieData movie1, movie2; 

	// store values in members of the structure 
	movie1.title = "Arrival";
	movie1.director = "Denis Villeneuve"; 
	movie1.yearReleased = 2016;
	movie1.runningTime = 116;

	movie2.title = "Inherent Vice";
	movie2.director = "Paul Thomas Anderson";
	movie2.yearReleased = 2014;
	movie2.runningTime = 149; 

	showMovieData(movie1);
	showMovieData(movie2);

	return 0;
}

// showMovieData function accepts a MovieData as a 
// parameter and displays its information in a 
// clearly formatted manner

void showMovieData(MovieData movie)
{
	cout << right; 
	cout << "----------------------------------------";
	cout << endl;
	cout << setw(25) << "Movie Information" << endl; 
	cout << "----------------------------------------";
	cout << endl; 
	cout << left; 
	cout << setw(23) << "Title" << movie.title << endl;
	cout << setw(23) << "Director: " << movie.director << endl;
	cout << endl; 
	cout << setw(23) << "Year Released: " << movie.yearReleased << endl;
	cout << setw(23) << "Running Time (minutes): " << movie.runningTime << endl; 
	cout << "----------------------------------------";
	cout << endl; 
	cout << endl << endl;

}