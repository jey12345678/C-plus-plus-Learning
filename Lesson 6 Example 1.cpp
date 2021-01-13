//Jeyason Jeyaparan
//April 3rd 2018
//Question 1 Lesson 6

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
	//declare Variables
	int generatedNumber = 50;
	int numOfGuesses = 0;
	char confirmation = ' ';
	int newGeneratedNumber;
	char escape = 'N ';
	cout << "Computer Guessing Game!" << endl;
	cout << "Think of a number between 1 to 100." << endl;
	cout << "Is your number " << generatedNumber << "?";
	cin >> confirmation;
	numOfGuesses++;
	cout << "I guessed " << numOfGuesses << " times!" << endl;
	while ((toupper(confirmation) == 'H') || (toupper(confirmation) == 'L') || (toupper(confirmation) == 'C'))
	{
		

		if (toupper(confirmation) == 'H')
		{
			newGeneratedNumber = generatedNumber / 2.0;
			cout << "Is your number " << newGeneratedNumber << "?";
			cin >> confirmation;
			generatedNumber = newGeneratedNumber;
			numOfGuesses++;
			cout << "I guessed " << numOfGuesses << " times!" << endl;
		}
		else if (toupper(confirmation) == 'L')
		{
			newGeneratedNumber = (generatedNumber / 2.0) + generatedNumber;
			cout << "Is your number " << newGeneratedNumber << "?";
			cin >> confirmation;
			generatedNumber = newGeneratedNumber;
			numOfGuesses++;
			cout << "I guessed " << numOfGuesses << " times!" << endl;
		}
		else if (toupper(confirmation) == 'C')
		{
			cout << "Yay I guessed your number! Click L or H if you accidently clicked on C to play more! "<< endl;
			cin >> confirmation;
			numOfGuesses++;
			cout << "I guessed " << numOfGuesses << " times!" << endl;
			
		}
	}
		
system("pause");
return 0;
}