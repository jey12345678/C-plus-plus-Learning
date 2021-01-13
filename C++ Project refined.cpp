//Simple game that involves the rolling of 2 six sided dice.
//Computer Engineering Project
//From:Jeyason Jeyaparan 

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
	char guess2 = ' ';
	int pScore = 0;
	int cScore = 0;
	int firstRoll;
	int secondRoll;
	srand(time(0));

	//Title of game
	cout << "Dice Game!" << endl;

	do
	{
		firstRoll = rollDice();
		secondRoll = rollDice();
		
		//Players Turn!
		cout << "Player's Turn!" << endl;
		//Roll first dice for player.
		cout << "The dice rolled to " << firstRoll << endl;
		//What is player's guess?
		cout << "Will the next dice be higher,lower or same value to the value of the dice that was just rolled? Answer with H for higher, L for lower or S for same." << endl;
		cin >> guess;
		//Use while function to make sure that the user doesn't enter any false characters and repeat the question.
		while ((toupper(guess) != 'H') && (toupper(guess) != 'L') && (toupper(guess) != 'S'))
		{	
			cout << "Invaild response!" << endl;
			cout << "Will the next dice be higher,lower or same value to the value of the dice that was just rolled? Answer with H for higher, L for lower or S for same." << endl;
			cin >> guess;
		}

		//Calculate the score of the player.
		pScore += calScore(guess, firstRoll, secondRoll);
		//Roll the second dice for the player.
		cout << "The second dice rolled to " << secondRoll << endl;

		// It's now the computer's turn. Roll the first dice for the computer.
		cout << "Computer's Turn!" << endl;
		cout << "The dice rolled to " << firstRoll << endl;

		//What is the computer's guess?
		cout << "Will the next dice be higher,lower or same value to the value of the dice that was just rolled? Answer with H for higher, L for lower or S for same. " << endl;
		guess2 = computerChoice(firstRoll);
		cout << "The computer guessed " << guess2 << endl;

		//Roll the second dice for the computer.
		cout << "The second dice rolled to " << secondRoll << endl;

		//Calculate the score for the computer.
		if (firstRoll < secondRoll && toupper(guess2) == 'H' || firstRoll > secondRoll && toupper(guess2) == 'L')
		{
			cScore = cScore + 1;
		}
		else if (firstRoll == secondRoll && toupper(guess2) == 'S')
		{
			cScore = cScore + 3;
		}
		else if (firstRoll <= secondRoll && toupper(guess2) == 'L' || firstRoll >= secondRoll && toupper(guess) == 'H')
		{
			cScore = cScore - 1;
		}
		else if (firstRoll != secondRoll && toupper(guess) == 'S')
		{
			cScore = cScore - 0;
		}
		//Output the player's and the computer's score.
		cout << "The player's new score is " << pScore << endl;
		cout << "The computer's new score is " << cScore << endl;

	} while (pScore < 10 && cScore <10 || pScore == cScore);
	//Check to see who wins the game, the player or the computer.
	if (pScore > cScore)
	{
		cout << "The player won!" << endl;
	}

	else if (cScore > pScore)
	{
		cout << "The computer won!" << endl;
	}

	system("pause");
	return 0;
}

//Function to calculate the random dice number.
int rollDice()
{
	int rand1;
	rand1 = rand() % (6 - 1) + 1;

	return rand1;
}

//Function to calculate the score of the player.
int calScore(char guess, int firstRoll, int secondRoll)
{

	if (firstRoll < secondRoll && toupper(guess) == 'H' || firstRoll > secondRoll && toupper(guess) == 'L')
	{
		int points = 1;
		return points;
	}
	else if (firstRoll == secondRoll && toupper(guess) == 'S')
	{
		int points = 3;
		return points;
	}
	else if (firstRoll <= secondRoll && toupper(guess) == 'L' || firstRoll >= secondRoll && toupper(guess) == 'H')
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

//Function to calculate the computer's choice.
char computerChoice(int firstRoll)
{
	char guess;
	if (firstRoll == 1)
	{
		guess = 'H';
		return guess;
	}
	else if (firstRoll == 6)
	{
		guess = 'L';
		return guess;
	}
	else if (firstRoll >= 2 && firstRoll <= 5)
	{
		srand(time(0));
		int rand2 = rand() % (5 - 1) + 1;
		if (rand2 == 1 && rand2 == 2)
		{
			guess = 'H';
			return guess;
		}
		else if (rand2 == 4 && rand2 == 5)
		{
			guess = 'L';
			return guess;
		}
		else if (rand2 == 3)
		{
			guess = 'S';
			return guess;
		}
	}
}