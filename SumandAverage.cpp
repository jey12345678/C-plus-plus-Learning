// By:Jeyason Jeyaparan, Question #1
// Calculate the sum and average of three numbers.

#include <iostream>;
#include <cstdlib>;

using namespace std;

int main()
{   //Declare the variables
	double numOne;
	double numTwo;
	double numThree;
	double sum;
	double average;


	//Enter the three numbers into the program.
	cout << "Enter your first number here: ";
	cin >> numOne;
	cout << "Enter your second number here: ";
	cin >> numTwo;
	cout << "Enter your third number here: ";
	cin >> numThree;

	//Calculate the average and sum of the three numbers.
	sum = numOne + numTwo + numThree;
	average = (numOne + numTwo + numThree) / 3;

	//Output the results of the sum and average caluculations back onto the monitor for the user or for you to see.
	cout << "The sum of the three numbers is " << sum << endl;
	cout << "The average of the three numbers is " << average << endl;

	system("pause");
	return 0;

}





