//Jeyason Jeyaparan
//Excersize 1 Lesson 3

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

	//Declare variables
	int upperLimit;
	int lowerLimit;
	int randNum;
	double squareRoot;
	int powerRaised;

	//Ask the user for the upper and lower limit of the random numbers.
	cout << "Enter the upper limit of the random numbers: ";
	cin >> upperLimit;
	cout << "Enter the lower limit of the random numbers: ";
	cin >> lowerLimit;

	//Generate the random number.
	srand(time (0));
	randNum = rand() % (upperLimit - lowerLimit) + lowerLimit;
	cout << "The random number is: " <<randNum<< endl;

	//Calculate the square root and the power raised to the 2 of the random number.
	squareRoot = sqrt(randNum);
	cout << "The square root is " << squareRoot << endl;
	powerRaised = pow(randNum,2);
	cout << "The power raised to the 2 is " << powerRaised << endl;

	system("pause");
	return 0;

}