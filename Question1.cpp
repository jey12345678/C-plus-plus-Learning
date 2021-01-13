//Jeyason Jeyaparan
//Question 1

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	//String Example
	cout << "Hello World" << endl;

	//BAsic Math Operation
	cout << "2+3=" << 2 + 3 << endl;
	cout << "Area=" << 5 * 9 << endl;
	cout << "8.5/2=" << 8.5 / 2 << endl;

	//Remainder
	cout << "9%2 =" << 9 % 2 << endl;

	//Decimal Points
	cout << fixed;
	cout.precision(2);
	cout << "65/3.0=" << 65 / 3.0 << endl;

	//Math Functions
	//Square Root
	cout << "sqrt(5)=" << sqrt(5) << endl;

	//Exponents
	cout << "10 to the power of 3 =" << pow(10, 3) << endl;

	system("pause");
	return 0;

}