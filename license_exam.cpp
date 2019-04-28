//*********************************************************************
// This program grades the written portion of a driver's license exam. 
// The exam has 20 multiple choice questions. The program stores
// the exam answers in an array. The program then stores the 
// students' answers in a second array. The program displays
// whether a student has passed or failed the exam (15/20 to pass). 
// It then displays the total number of questions answered
// correctly, the total number of questions answered incorrectly,
// and a list showing the question numbers of incorrectly answered
// questions. 

// Note: only letters A, B, C, D are accepted as answers. 
//*********************************************************************

#include <iostream>
using namespace std;

// Function prototypes
bool validateInput(char); 
int checkAnswers();
void getIncorrectlyAnswereQuestions();
void getOutput(int); 
// Global variables 

const int NUM_OF_QUESTIONS = 20; // There are 20 total questions
const int PASSING_SCORE = 15;   // 15 correct answers passes exam 

// Correct Answers Array 
char correctAnswers[] = {'B', 'D', 'A', 'A', 'C', 'A', 'B', 'A', 'C', 'D', 
						'B', 'C', 'D', 'A', 'D', 'C', 'C', 'B', 'D', 'A'};
// Incorrect Answers Array
int incorrectlyAnsweredQuestions[NUM_OF_QUESTIONS];
// User Answers Array
char userAnswers[NUM_OF_QUESTIONS];   


int main()
{
	int correctAnswersCounter = 0; // Count # of correct answers

	for (int i = 0; i < NUM_OF_QUESTIONS; i++)
	{
		// Get input
		do
		{
			cout << "Enter your answer for question #" << i + 1 << " "; 
			cin >> userAnswers[i]; 
		}
		while (!validateInput(userAnswers[i]));
	}

	correctAnswersCounter = checkAnswers();
    if (correctAnswersCounter < NUM_OF_QUESTIONS)
    {
    	getIncorrectlyAnswereQuestions(); 
    }


  	getOutput(correctAnswersCounter);
	return 0; 

}

void getOutput(int counter)
{
	cout << "\nYou have " << (counter >= PASSING_SCORE ? "PASSED" : "FAILED") << " the test" << endl;
	cout << "You have answered " << counter << " correctly and " << (NUM_OF_QUESTIONS - counter) << " incorrectly." << endl;

	// If some answers were incorrect, output incorrect answer, correct answer, and user answer
	if (counter < NUM_OF_QUESTIONS)
	{
		cout << "The following questions were incorrect: \n";
		for (int i = 0; i < NUM_OF_QUESTIONS - counter; i++)
		{
			cout << "Question #" << (incorrectlyAnsweredQuestions[i] + 1) << ". Correct answer was " << 
			     correctAnswers[incorrectlyAnsweredQuestions[i]] << ". Your answer was " << userAnswers[incorrectlyAnsweredQuestions[i]] << endl;
		}
	}
}

void getIncorrectlyAnswereQuestions()
{
	int counter = 0; // index of incorrectly answered questions array
	for (int i = 0; i < NUM_OF_QUESTIONS; i++)
	{
		if (correctAnswers[i] != toupper(userAnswers[i]))
		{
			incorrectlyAnsweredQuestions[counter] = i; 
			counter++; 
		}
	}

}

int checkAnswers()
{
	int counter = 0; 
	for (int i = 0; i < NUM_OF_QUESTIONS; i++)
	{
		if(toupper(userAnswers[i]) == correctAnswers[i])
			counter++;
	}

	return counter; 
}

bool validateInput(char answer)
{
	// Only A,B,C,D is valid input
	if (toupper(answer) != 'A' && toupper(answer) != 'B' && toupper(answer) != 'C' && toupper(answer) != 'D')
	{
		cout << "\nInvalid input! ";
		return false;
	}

	return true; 
	
}
