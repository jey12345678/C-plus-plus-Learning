//Enter a quadratic equation with A,B,C and find the zeros (x intercepts)
/*Name: Anson Huang
Date: 3/26/2018*/


#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
		
		//Declare variables
		double a, b, c;
		double firstZero, secondZero;
		double squaredValue;

		//Ask for the quadratic function
		cout<< "Enter the (a) value of the equation";
		cin>>a;
		cout<< "Enter the (b) value of the equation";
		cin>>b;
		cout<< "Enter the (c) value of the equation";
		cin>>c;

		//Perform the calculation to find the first x intercept
		valueOfSquare = sqrt(pow(b,2) -4 * a * c);
		firstZero = (-b + squaredValue) / 2 * a;
		secondZero = (-b - squaredValue) / 2 * a;

		//Output the x intercepts
		cout<< "The first x-intercept is "<<firstZero<<endl;
		cout<< "The second x-intercept is "<<secondZero<<endl;

		system("pause");
		return 0;
}

