//Jeyason Jeyaparan
//Slot Machine

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
	//declare variables
	char pullOrNot = ' ';
	int tokens = 100;
	int newTokenValue;
	int gainedTokenValue;
	int total = 0;
	int numOfTimes = 0;
	do {

		cout << "You have" << tokens << " tokens." << endl;
		cout << "Pull?";
		cin >> pullOrNot;
		if (toupper(pullOrNot) == 'Y')
		{
			newTokenValue = tokens - 1;
			cout << "You now have " << newTokenValue << " tokens.";

			int randNum;
			srand(time(0));
			for (int i = 1;i <= 3;i++)
				total = total + randNum;
			{
				randNum = (rand() % (3 - 1)) + 1;
				cout << randNum << endl;
			}

			cout << total << endl;
			if (total == 3)
			{
				cout << "You won 4 tokens." << endl;
				gainedTokenValue = newTokenValue + 4;
				cout << "You now have" << gainedTokenValue << " tokens." << endl;
				tokens = gainedTokenValue;
			}
			else if (total == 6 || total == 10 || total == 5)
			{
				cout << "You have lost!" << endl;
				cout << "You now have" << newTokenValue << " tokens." << endl;
				tokens = newTokenValue;
			}
			else if (randNum == 2 && total == 6)
			{
				cout << "You won 8 tokens!" << endl;
				gainedTokenValue = newTokenValue + 8;
				cout << "You now have" << gainedTokenValue << " tokens." << endl;
				tokens = gainedTokenValue;
			}
			else if (total == 9)
			{
				cout << "You won 12 tokens!" << endl;
				gainedTokenValue = newTokenValue + 12;
				cout << "You now have " << gainedTokenValue << " tokens." << endl;
				tokens = gainedTokenValue;
			}
			numOfTimes++;
			cout << "The number of times the wheel has spun is " << numOfTimes << endl;
		}

	} while ((toupper(pullOrNot) == 'Y') || numOfTimes<3);
	if (toupper(pullOrNot) == 'N')
	{
		cout << "Thank You For Playing!" << endl;
	}
	else if (numOfTimes > 3);
	{
		cout << "Thank You for playing!" << endl;
	}

	system("pause");
	return 0;

}