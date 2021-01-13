//Jeyason Jeyaparan
//Lesson 5 example 3

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	double number;
	double reciprocal;

	cout << "Enter the number: ";
	cin >> number;
	for (int count = number;count <= 20;count++)
	reciprocal = 1 / number;
	cout << "The decimal equivalent of the reciprocal of the  number " << number << " is " << reciprocal<<". " << endl;


	system("pause");
	return 0;
}