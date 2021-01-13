//Simple game that involves the rolling of 2 six sided dice.

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int rollDice();
int calScore(char, int, int);
char computerChoice(int);
int main() {

	//declare variables
	char guess = ' ';
	char computerGuess = ' ';
	int pScore = 0;
	int cScore = 0;
	int firstRoll;
	int secondRoll;
	srand(time(0));



	do
	{
		firstRoll = rollDice();
		secondRoll = rollDice();

		cout << "Player's Turn!" << endl;
		cout << "The dice rolled to " << firstRoll << endl;
		cout << "Will the next dice be higher,lower or same value to the value of the dice that was just rolled? Answer with H for higher, L for lower or S for same." << endl;
		cin >> guess;
		
		do
		{
			cout << "Invalid response try again" << endl;
			cout << "Will the next dice be higher,lower or same value to the value of the dice that was just rolled? Answer with H for higher, L for lower or S for same." << endl;
			cin >> guess;

		} while ((toupper(guess) != 'H') || (toupper(guess) != 'L') || (toupper(guess) != 'S'));
		
		pScore += calScore(guess, firstRoll, secondRoll);
		cout << "The second dice rolled to" << secondRoll << endl;
		if ((pScore += calScore(guess, firstRoll, secondRoll) == pScore + 1) || (pScore += calScore(guess, firstRoll, secondRoll) == pScore + 3))
		{
			cout << "You won points." << endl;
			if ((pScore += calScore(guess, firstRoll, secondRoll) == pScore + 1))
			{
				cout << "You won 1 point!" << endl;
			}
			else if ((pScore += calScore(guess, firstRoll, secondRoll) == pScore + 3))
			{
				cout << "You won 3 points." << endl;
			}
		}
		else if ((pScore += calScore(guess, firstRoll, secondRoll) == pScore - 1) || (pScore += calScore(guess, firstRoll, secondRoll) == pScore - 3))
		{
			cout << "You lost points." << endl;
			if ((pScore += calScore(guess, firstRoll, secondRoll) == pScore - 1))
			{
				cout << "You lost 1 point!" << endl;
			}
			else if (pScore += calScore(guess, firstRoll, secondRoll) == pScore - 3)
			{
				cout << "You lost 3 points!" << endl;
			}
		}
		
		cout << "Computer's Turn!" << endl;
		cout << "The dice rolled to " << firstRoll << endl;
		cout << "Will the next dice be higher,lower or same value to the value of the dice that was just rolled? Answer with H for higher, L for lower or S for same." << endl;
		computerGuess = computerChoice(firstRoll);
		cout << computerGuess << endl;
		cScore += calScore(guess,firstRoll,secondRoll);
		cout << "The second dice rolled to" << secondRoll << endl;
		if ((cScore += calScore(guess, firstRoll, secondRoll) == cScore + 1) || (cScore += calScore(guess, firstRoll, secondRoll) == cScore + 3))
		{
			cout << "The computer won points." << endl;
			if ((cScore += calScore(guess, firstRoll, secondRoll) == cScore + 1))
			{
				cout << "The computer won 1 point!" << endl;
			}
			else if (cScore += calScore(guess, firstRoll, secondRoll) == cScore + 3)
			{
				cout << "The computer won 3 points!" << endl;
			}
		}
		else if ((cScore += calScore(guess, firstRoll, secondRoll) == cScore - 1) || (cScore += calScore(guess, firstRoll, secondRoll) == cScore - 3))
		{
			cout << "The computer lost points." << endl;
			if ((cScore += calScore(guess, firstRoll, secondRoll) == cScore - 1))
			{
				cout << "The computer lost 1 point!" << endl;
			}
			else if ((cScore += calScore(guess, firstRoll, secondRoll) == cScore - 3))
			{
				cout << "The computer lost 3 points!" << endl;
			}
		}
		cout << "The player's new score is " << pScore << endl;
		cout << "The computer's new score is " << cScore << endl;
		
	} while (pScore < 10 && pScore != cScore && cScore != pScore);

	
	system("pause");
	return 0;
}

//Function to calculate the random dice number
int rollDice()
{
	int rand1;
	rand1 = rand() % (6 - 1) + 1;

	return rand1;
}
//Function to calculate the score of the player.
int calScore(char guess, int firstRoll, int secondRoll)
{

	if ((firstRoll < secondRoll && toupper(guess) == 'H') || (firstRoll > secondRoll && toupper(guess) == 'L'))
	{
		int points = 1;
		return points;
	}
	else if (firstRoll = secondRoll && toupper(guess) == 'S')
	{
		int points = 3;
		return points;
	}
	else if ((firstRoll < secondRoll && toupper(guess) == 'L') || (firstRoll > secondRoll && toupper(guess) == 'H'))
	{
		int points = -1;
		return points;
	}
	else if (firstRoll != secondRoll && toupper(guess) == 'S')
	{
		int points = 0;
		return points;
	}
}
//Function to calculate the computer's choice
char computerChoice(int firstRoll)
{
	if (firstRoll = 1)
	{
		int guess = 'H';
		return guess;
	}
	else if (firstRoll = 6)
	{
		int guess = 'L'
		return guess;
	}
	else if (firstRoll >= 2 && firstRoll <= 5)
	{
		srand(time(0));
		int randNum2 = rand() % (5 - 2) + 2;

		if (randNum2 = 2 or randNum2 = 3)
		{
			guess = 'H';
			return guess;
		}
		else if (randNum2 = 5 or randNum2 = 4)
		{
			guess = 'L';
			return guess;
		}
		else if (randNum2 = 3)
		{
			guess = 'S'
			return guess;
		}
	}
}