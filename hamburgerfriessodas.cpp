//Jeyason Jeyaparan
//March 27th 2018
//Question 5

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	//declare variables
	int numBurgers;
	int numFries;
	int numSodas;
	double totalPrice;
	double tax;
	double grandTotal;
	int tendered;
	double change;
	//Ask the user for the number of burgers, fries and sodas that he or she ordered.
	cout << "Enter the number of burgers: ";
	cin >> numBurgers;
	cout << "Enter the number of fries: ";
	cin >> numFries;
	cout << "Enter the number of sodas: ";
	cin >> numSodas;

	//Calculate the total price, the tax and the grand total of the purchase.
	cout << fixed;
	cout.precision(2);
	totalPrice = numBurgers * 1.49 + numFries * 0.89 + numSodas * 0.99;
	cout << "The total price before tax is: $" <<totalPrice<< endl;
	tax = totalPrice * 0.06;
	cout << "The tax is $" <<tax<< endl;
	grandTotal = totalPrice + tax;
	cout << "The grand total is $" <<grandTotal<< endl;

	//Ask the user the amount of money tendered.
	cout << "Enter amount tendered: $";
	cin >> tendered;

	//Calculate the change for the user.
	change = tendered - grandTotal;
	cout << "The change is: $" << change << endl;

	system("pause");
	return 0;
}