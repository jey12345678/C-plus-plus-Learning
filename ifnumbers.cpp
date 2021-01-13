//Numbers

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main(){


	int numA,numB,numC;
	int largest;

	cout<<"Enter 3 numbers: ";
	cin>>numA>>numB>>numC;

	if(numA>numB && numA>numC)
	{
		largest = numA;
	}

	else if(numB>numA && numB>numC)
	{
	largest = numB;
	}
	else
	{
	largest = numC;
	}

    cout<<"largest ="<<largest<<endl;

	system("pause");
	return 0;

}