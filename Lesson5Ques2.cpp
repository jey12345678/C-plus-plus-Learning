//Jeyason Jeyaparan
//Lesson 5 Question 2

#include<iostream>
#include<cstdlib>

using namespace std;

int main(){

	//declare variables
	int startingNum;
	int endingNum;
	int sum = 0;
	//Ask user for starting number and ending number.
	cout<<"Enter your starting number here: ";
	cin>>startingNum;
	cout<<"Enter your ending number here: ";
	cin>>endingNum;

	//Generate numbers between starting number and ending number.
	for(int i=startingNum;i<=endingNum;i++)
	sum = sum + i;
	cout<<"The sum if integers are from "<<startingNum<<" and "<<endingNum<<" is "<< sum <<endl;

	system("pause");
	return 0;
}