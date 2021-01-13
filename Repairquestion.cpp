//Jeyason Jeyaparan
//Question 2 Lesson 4

#include <iostream>
#include <cstdlib>

using namespace std;

int main ()
{
char statusBeeps = ' ';
char statusHardDrive=' ';

//Ask user if the ailing computer beeps on  start up and if the hard drive spins.
cout<<"Does the computer beeps on start- up? ";
cin>>statusBeeps;
cout<<"Does the computer's hard drive spin?";
cin>>statusHardDrive;
//Output correct message to user based on his or her answer.
if (toupper(statusBeeps) =='Y' && toupper(statusHardDrive)== 'Y')
{
	cout<<"Contact tech support."<<endl;
}
else if (toupper(statusBeeps) == 'Y' && toupper(statusHardDrive) == 'N')
{
	cout<<"Check Drive contact."<<endl;
}
else if (toupper(statusBeeps) == 'N' && toupper(statusHardDrive) == 'Y')
{
	cout<<"Check the speaker contact."<<endl;
}
else if (toupper(statusBeeps)=='N' && toupper(statusHardDrive) == 'N')
{
	cout<<"Bring computer repair to center."<<endl;
}

system("pause");
return 0;

}



