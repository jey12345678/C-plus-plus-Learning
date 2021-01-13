//Jeyason Jeyaparan
//Lesson 5 Question 4

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	//declare variables
	int years;
	double amount;

	//Ask the user to enter in the amount of years.
	cout << "Enter the amount of years: ";
	cin >> years;

	//Calculate the total amount of money for each year that is over 15 years.
    for (int amountOfYears = years;amountOfYears > 15;amountOfYears++)
		amount = 25000 *pow((1 + (0.075 / 2)), (years * 2));
	cout << "The amount is" << amount << "for the year, " << years << endl;

	system("pause");
	return 0;

}

