//Square Root Question

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(){
	
	double x1;
	double x2;
	double dis;
	double a;
	double b;
	double c;
	cout<<"Enter a,b,c: ";
	cin>>a>>b>>c;

	dis = (pow(b,2))-(4*a*c);
	cout<<"dis= "<<dis<<endl;
	if (dis>0)
	{
	cout<<"There are two roots"<<endl;
	 x1 = (-b + sqrt(dis))/(2*a);
	 x2 = (-b - sqrt(dis))/(2*a);
	 cout<<"x1= "<<x1<<endl;
	 cout<<"x2= "<<x2<<endl;
	}
	else if (dis==0)
	{
		cout<<"there is one root"<<endl;
		x2 = (-b-sqrt(dis))/(2*a);
		cout<<"x1=x2= "<<x2<<endl;
	}
	else if (dis<0)
	{
		cout<<"There aren't any roots."<<endl;
	}

	system("pause");
	return 0;

}

