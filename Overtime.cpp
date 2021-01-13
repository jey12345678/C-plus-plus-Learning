//Jeyason Jeyaparan
//March 29th 2018
//Lesson 4 Question 4

#include <iostream>
#include <cstdlib>

using namespace std;

int main ()
{
	//declare variables
	int hours;
	int overTimeHours;
	int regularHours;
	double hourlyRate;
	double overTimeWage;
	double grossWages;
	char exempt = ' ';
	double deduction;
	double wagesAfterTaxes;

	//Ask the user to enter the amount of hours, the hourly rate, and if they are exempted.
	cout << "Enter the hours worked: ";
	cin >> hours;
	cout << "Enter the hourly rate:$ ";
	cin >> hourlyRate;
	cout << "Exempt (Y/N)? ";
	cin >> exempt;

	//Output the correct gross wages to the user. 
if (hours > 40)
{
	overTimeHours = hours - 40;
	regularHours = hours - overTimeHours;
	overTimeWage = overTimeHours * hourlyRate*1.5;
	grossWages = overTimeWage + regularHours*hourlyRate;

	if (toupper(exempt) == 'Y')
	{
		cout << "Gross Wage =$ " << grossWages << endl;
		cout << "NO TAXES DEDUCTED" << endl;
	}
	else if (toupper(exempt) == 'N')
	{
		cout << "Gross Wage =$ " << grossWages << endl;
		deduction = grossWages * 0.16;
		wagesAfterTaxes = grossWages - deduction;
		cout << "Wages after taxes= $" << wagesAfterTaxes << endl;
	}
}
else if (hours<40)
{
	grossWages = hours * hourlyRate;
	if (toupper(exempt) == 'Y')
	{	
		cout << "Gross wages=$ " << endl;
		cout << "NO TAXES DEDUCTED" << endl;
	}

	else if (toupper(exempt) == 'N')
	{
		cout << "Gross Wage =$ " << grossWages << endl;
		deduction = grossWages * 0.16;
		wagesAfterTaxes = grossWages - deduction;
		cout << "Wage after taxes=$ " << wagesAfterTaxes << endl;
	}
}


system("pause");
return 0;

}

