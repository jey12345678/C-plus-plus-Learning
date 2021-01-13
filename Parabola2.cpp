//Jeyason Jeyaparan Parabola Question 4

#include<iostream>
#include<cstdlib>


using namespace std;

int main() {

	//declare the variables

	double a;
	double b;
	double c;
	double xOne;
	double xTwo;
	double power;
	double multi;
	double squarro;
	//enter input items
	cout<< "Enter the value of a: ";
	cin>>a;
	cout<< "Enter the value of b: ";
	cin>>b;
	cout<<"Enter the value of c: ";
	cin>>c;

	//calculate what xOne and xTwo is equalled to
	power = pow(b, 2);
	multi = 4*a*c;
	squarro = sqrt(abs(power - multi));

	cout << "The value of numbers in the square root of the equation is " <<squarro<<endl;
	xOne=(-b+squarro)/(2*a);
	xTwo =(-b-squarro) /(2*a);
	//Round the value of x1 and x2 to two decimal points and output values of xOne and xTwo on screen.
	cout<< fixed;
	cout.precision(2);
	cout<<"xOne is "<<xOne<<endl;
	cout<<"xTwo is "<<xTwo<<endl;

	system("pause");
	return 0;


}









