#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int calRandom();

int main (){

	int randNum;
	srand (time(0));
	randNum = calRandom();

	cout<<"randNum ="<<randNum<<endl;

	system("pause");
	return 0;
}

//Function to calculate the random number
int calRandom()
{
	int rand1;
	rand1 = rand()%6+1;

	return rand1;
}