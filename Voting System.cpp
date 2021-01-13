//Voting System Program

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main(){
int age;
string status;

cout<<"Enter your age: ";
cin>>age;

if (age>=18)
{
	cout<<"Are you registered to vote?";
	cin>>status;
	if (status=="Yes"||status=="yes")
	{
		cout<<"You can vote"<<endl;
	}
	else
	{
		cout<<"You must be registered to vote."<<endl;
	}
}
else
{
	cout<<"You are too young to vote"<<endl;
}

system("pause");
return 0;

}
