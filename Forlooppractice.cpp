//Jeyason Jeyaparan
//Ms.Stretten's lesson

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	int number;
	int factorial = 1;

	cout<<"Enter a number: ";
	cin>>number;

	for(int i=number;i>=1;i--)
	{
	factorial = (factorial*i);
	}

	cout<<"factorial = "<<factorial<<endl;

	system("pause");
	return 0;
}