//Enter a year in YYYY that is then separated and added
/*Name: Anson Huang
Date: 3/23/2018*/


#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	   //declare variables
	   int year, firstNum, secondNum, newYear;

	   //Ask for the input value (YYYY)
	   cout<<"Enter a year in YYYY format (e.g 1999): ";
	   cin>>year;   

	   //Split number into 2
	   firstNum = year / 100;
	   secondNum = year % 100;

	   //Add 1 onto the first number
	   firstNum = firstNum + 1;
	   newYear = firstNum * 100 + secondNum;
	   //Display both numbers to show year in 100 years time
	   cout<<"The year "<<year<<" will be "<<newYear<<" in 100 years"<<endl;

	   system ("pause");
	   return 0;
}

     



		

