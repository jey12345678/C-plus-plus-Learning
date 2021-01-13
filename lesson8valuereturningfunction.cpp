//Simple game that involves the rolling of 2 six sided dice.

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int rollDice ();
int calScore (char,int,int);

int main() {

	//declare variables
	char guess = ' ';
	int pScore = 0;
	int firstRoll;
	int secondRoll;
	srand(time(0));


	do
	{
		firstRoll = rollDice();
		secondRoll = rollDice();


		cout << "The dice rolled to" << firstRoll << endl;
		cout << "Will the next die be higher,lower or equal value to the value of the die that was just rolled." << endl;
		cin >> guess;
		cout << "The dice rolled to" << secondRoll << endl;

		pScore += calScore(guess, firstRoll, secondRoll)
			cout << "Your score is " << pScore << endl;
			if (pScore = 1 || if pScore = 3)
				cout<<"You won the game!"
			if (pScore = -1 || if pScore = 0)
				cout<<"You lost the game!"



			

	}
	system("pause");
	return 0;
}

	//Function to calculate the random dice number
	int rollDice()
	{
		int rand1;
		rand1 = rand()%(6-1)+1;

		return rand1;
	}
	//Function to calculate the score of the player.
	int calScore(char guess, int firstRoll, int secondRoll)
	{

		if ((firstRoll < secondRoll && toupper(guess) == 'H') || (firstRoll > secondRoll && toupper(guess) == 'L'))
		{
			points = 1;
			return points;
		}
		else if (firstRoll = secondRoll && toupper(guess) == 'C')
		{
			points = 3;
			return points;
		}
		else if ((firstRoll < secondRoll && toupper(guess) == 'L' || (firstRoll > secondRoll && toupper(guess) == 'H'))
		{
			points = -1;
			return points;
		}
		else if (firstRoll != secondRoll && toupper(guess) == 'C')
		{
			points = 0;
			return points;
		}
	}











