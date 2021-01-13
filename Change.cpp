//Jeyason Jeyaparan
//March 27th 2018
//Question 3

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	//declare the variables
	int amountChange;
	int quarters;
	int dimes;
	int nickels;
	int pennies;

	//Ask user for amount of change
	cout << "Enter the amount of change in cents: ";
	cin >> amountChange;

	//Tell the user the amount of pennies, nickels, quarters and dimes are needed to make up the change.
	quarters = amountChange / 25;
	cout << "The amount of quarters the person needs is " << quarters << endl;
	dimes = (amountChange % 25) / 10;
	cout << "The amount of dimes that the person needs is " << dimes << endl;
	nickels = ((amountChange % 25)%10)/5;
	cout << "The amount of nickels that the person needs is " << nickels << endl;
	pennies = ((amountChange % 25)%10)%5;
	cout << "The amount of pennies that the person needs is " << pennies << endl;
	system("pause");
	return 0;
}