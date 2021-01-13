//Jeyason Jeyaparan
//Jumper Program Example 5

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	
	//declare variables
	const double FIRSTJUMP = 3.3;
	const double SECONDJUMP = 3.5;
	const double THIRDJUMP = 4.0;
	const double FOURTHJUMP = 3.0;
	double average;

	//Calculate the average jump length of the long jumper
	average = (FIRSTJUMP + SECONDJUMP + THIRDJUMP + FOURTHJUMP) / 4;

	//Output the average jump length.
	cout << "The average jump length of the long jumper in metres is " << average << endl;

	system("pause");
	return 0;

}