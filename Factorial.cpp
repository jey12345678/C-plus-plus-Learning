#include <iostream>
#include<cstdlib>

using namespace std;

int calFactorial(int);

int main (){
	int number;
	int factorialNum;
	
	do{

	cout<<"'Enter a positive number: ";
	cin>>number;

	if (number>= 0)
	{
	factorialNum = calFactorial(number); //call the function
	cout<<"factorialNum ="<<factorialNum<<endl;
	}

	}while(number<0);

	system ("pause");
	return 0;

}

//function to calculate the factorial
int calFactorial(int number)
{
	int factorial = 1;
	for (int i =1; i<=number;i++)
	{
		factorial = factorial*i;
	}
return factorial;

}