//Jeyason Jeyaparan Question 2 About Farmers
// Calculate the total price of eggs using the number of eggs in the box and the price in dollars for each egg.

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	//Declare Variables
	int numOfEggs;
	double priceOfEggs;
	double totalPrice;

	//Ask the farmer for the number of eggs and the price of each egg.
	cout << "Enter the number of eggs you have: ";
	cin >> numOfEggs;
	cout << "Enter the price of each egg:$ ";
	cin >> priceOfEggs;

	//Calculate the total price of the eggs.
	totalPrice = numOfEggs * priceOfEggs;

	//Output to the user the total price of the eggs.
	cout << "The total price of the eggs in the box is $ " << totalPrice << endl;

	system("pause");
	return 0;

}