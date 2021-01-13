//Jeyason Jeyaparan
//March 27th 2018

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int main (){

int randNum;
int upperLim;
int lowerLim;
double square;
int power;

cout<<"Enter the lower limit: ";
cin>>lowerLim;
cout<<"Enter the upper limit: ";
cin>>upperLim;


srand (time (0));
randNum = rand()%(upperLim-lowerLim)+lowerLim;
cout<< "randNum = "<<randNum<<endl;

square = sqrt(randNum);
cout<<"Square Root = "<<square<<endl;

power = pow(randNum,2.0);
cout<< "Power ="<<power<<endl;

cout<<sin (30*3.1416/180);
cout<<tan (45*3.1416/180)<<endl;
cout<<cos(60*3.1416/180)<<endl;



system ("pause");
return 0;
}



