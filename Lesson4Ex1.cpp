//Jeyason Jeyaparan
//Lesson 4 Question 1

#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
	//declare variables
	int integerOne;
	int integerTwo;
	int integerThree;

	//Ask the user for the values of the integers.

	cout<<"Enter the first integer: ";
	cin >>integerOne;

	cout<<"Enter the second integer: ";
	cin>>integerTwo;

	cout<<"Enter the third integer: ";
	cin>>integerThree;

	if(integerThree<integerTwo && integerThree<integerOne)
	{
		cout<<"The lowest value is the third integer which is "<<integerThree<<endl;
	}
	else if(integerTwo<integerOne && integerTwo<integerThree)
	{
		cout<<"The lowest value is the second integer which is "<<integerTwo<<endl;
	}
	else if(integerOne<integerTwo && integerOne<integerThree)
	{
		cout<<"The lowest value is the first integer which is "<<integerOne<<endl;
	}
	system("pause");
	return 0;

}