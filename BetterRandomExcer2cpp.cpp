//Jeyason Jeyaparan
//Lesson3Excer2

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

	//declare variables
	int randNum;
	int firstDigit;
	int secondDigit;
	int thirdDigit;
	double sum;
	double average;

	//Generate the random number
	srand(time(0));
	randNum = rand() % (999 - 100) + 100;
	cout << "The random number is " << randNum << endl;

	//Seperate the digits of the random number.
	firstDigit = randNum / 100;
	cout << "The first digit is " << firstDigit << endl;
	secondDigit = ((randNum % 100) / 10);
	cout << "The second digit is " << secondDigit << endl;
	thirdDigit = ((randNum % 100) % 10);
	cout << "The third digit is " << thirdDigit << endl;

	//Calculate the sum and average of the digits.
	sum = firstDigit + secondDigit + thirdDigit;
	cout << "The sum of the digits is " << sum << endl;
	average = sum / 3.0;
	cout << "The average of the digits is " << average << endl;

	system("pause");
	return 0;
}