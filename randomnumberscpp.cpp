//Jeyason Jeyaparan 
//March 27th 2018

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

	srand(time (0));
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
	cout << fixed;
	cout.precision(2);
	sum = firstDigit + secondDigit + thirdDigit;
	cout << "The sum of the digits are " << sum << endl;
	average = (firstDigit + secondDigit + thirdDigit) / 3;
	cout << "The average of the digits are" << average << endl;

}