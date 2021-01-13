//Jeyason Jeyaparan 
//March 27th 2018
//Question 2

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	//declare Variables
	int randNum;
	int firstDigit;
	int firstAndSecondDigit;
	int secondDigit;
	int thirdDigit;
	int sum;
	double average;
	//Generate the random number.

	srand(time(0));
	randNum = rand() % (999 - 100) + 100;
	cout << "randNum = " << randNum << endl;

	//Seperate the digits of the random number and output it on the screen.

	firstDigit = randNum / 100;
	cout << "The first digit is " << firstDigit << endl;
	firstAndSecondDigit = randNum % 100;
	secondDigit = firstAndSecondDigit / 10;
	cout << "The second digit is " << secondDigit << endl;
	thirdDigit = firstAndSecondDigit % 10;
	cout << "The third digit is " << thirdDigit << endl;

	//Calculate the sum and the average of the random number's digits and output it on the screen.
	
	sum = firstDigit + secondDigit + thirdDigit;
	cout << "The sum of the digits are " << sum << endl;
	cout << fixed;
	cout.precision(2);
	average = (firstDigit + secondDigit + thirdDigit) / 3.0;
	cout << "The average of the digits are" << average << endl;

	system("pause");
	return 0;

}