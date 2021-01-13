//Jeyason Jeyaparan
//March 27th 2018
//Question 4

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	//declare the variables
	int birthMonth;
	int birthDay;
	int birthYear;
	int todayMonth;
	int todayDay;
	int todayYear;
	int sleepHours;
	int alive;
	int slept;
	//Ask the user for his or her birthdate.
	cout << "Enter your birthdate: " << endl;
	cout << "Month: ";
	cin >> birthMonth;
	cout << "Day:";
	cin >> birthDay;
	cout << "Year:";
	cin >> birthYear;

	//Ask the user for today's date.
	cout << "Enter today's date: " << endl;
	cout << "Month: ";
	cin >> todayMonth;
	cout << "Day:";
	cin >> todayDay;
	cout << "Year";
	cin >> todayYear;
	
	//Enter the amount of hours that the user has slept every night.
	cout << "Enter how many hours you sleep each night: ";
	cin >> sleepHours;
	//Calculate how long you have been alive for and how long you have slept for.
	alive = (todayYear - birthYear) * 365 + (todayMonth - birthMonth) * 30 + todayDay - birthDay;
	cout << "You have been alive for " << alive << " days." << endl;
	slept = alive * sleepHours;
	cout << "You have slept for " << slept <<" hours."<< endl;

	system("pause");
	return 0;

}