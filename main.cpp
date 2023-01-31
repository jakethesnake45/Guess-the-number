#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand(time(nullptr));

	bool guessedNumber = false;
	int guessCount = 0;
	int ourguess;
	int computerNumber = rand() % 100 + 1;

	while (!guessedNumber)
	{
		cout << "Enter your guess" << endl; 
		cin >> ourguess;

		if (ourguess > 100 || ourguess < 1)
		{
			cout << "That was a wasted guess. You must pick a number between 1 and 100 inclusive!" << endl;
			guessCount++;
			continue;
		}
		if (ourguess == computerNumber)
		{
			cout << "Congratulations! You guessed the number in " << guessCount << " guesses! " << endl;
			cout << "Thanks for Playing!" << endl; 
			guessedNumber = true;
		}
		else if (ourguess > computerNumber)
		{
			cout << " Your guess is too high" << endl; 

		}
		else
		{

			// must be to low
			cout << "your guess is too low" << endl; 


		} // end of if-else
		guessCount++;
	
	}//end while
	
	return 0;
}