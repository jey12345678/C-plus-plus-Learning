//Jeyason Jeyaparan
//Lesson 5 Example 1

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	//Declare Variables
	int randNum;

	//Generate 50 random numbers between 10 to 100.
	srand(time(0));
	for (int i = 1;i <= 50;i++)		
	{
		randNum = rand() % (100 - 10) + 1;
		cout << "The random numbers are " << randNum << endl;
	}
	
	system("pause");
	return 0;

}