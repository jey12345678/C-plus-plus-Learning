//Jeyason Jeyaparan
/*Question 4
Calculating the amount of kilometers per litre of gas for a car*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	//declare variables
	double kilometers;
	double liters;
	double kilometersPerLitre;

	//Values for kilometers and liters
	kilometers = 712.5;
	liters = 70.3;

	//Calculate the amount of kilometers per litre of the car.
	kilometersPerLitre = kilometers / liters;

	//Output the result to the user.
	cout << "The car could drive " << kilometersPerLitre << " km per litre of gas."<<endl;

	system("pause");
	return 0;
}