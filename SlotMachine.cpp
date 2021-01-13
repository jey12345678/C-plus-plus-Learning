//Jeyason Jeyaparan
//Slot Machine

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main ()
{

	//declare variables
	int tokens = 100;
	int newTokens;
	char message = ' ';
	int numOfSpins = 0;
	//Generate three random numbers.

	do 
	{
		cout<<"You have "<<tokens<<" tokens."<<endl;
		cout<<"Spin?";
		cin>>message;
		srand (time (0));
		int randNum1 =(rand()%(3-1))+1;

		srand(time (0));
		int randNum2 = (rand()%(3-1))+1;

		srand(time (0));
		int randNum3 = (rand()%(3-1))+1;

		if(toupper(message)== 'Y')
		{
			cout<<"["<<randNum1<<"]"<<"["<<randNum2<<"]"<<"["<<randNum3<<"]"<<endl;
		    if(randNum1 == 2 && randNum2 == 2 && randNum3 == 2)
			{
				cout<< "You won 8 tokens."<<endl;
			    newTokens = tokens -1+8;
				tokens = newTokens;
				cout<<"You now have "<<tokens<<" tokens."<<endl;
			}
			else if(randNum1 == 3 && randNum2 == 3 && randNum3 == 3)
			{
				 cout<<"You won 12 tokens."<<endl;
			     newTokens = tokens -1+12;
				 tokens = newTokens;
				 cout<<"You now have "<<tokens<<" tokens."<<endl;
			}
			else if(randNum1 == 1&&randNum2 == 1 &&randNum3 == 1)
			{
				cout<<"You won 4 tokens."<<endl;
				newTokens = tokens - 1+4;
				tokens = newTokens;
				cout<<"You now have "<<tokens<<" tokens."<<endl;
			}
			else if(randNum1 != randNum2 !=randNum3)
			{
				cout<<"You lost!"<<endl;
				newTokens = tokens -1;
				tokens = newTokens;
				cout<< "You now have "<<tokens<<" tokens."<<endl;
			}
			numOfSpins++;
			cout<<"You spun "<<numOfSpins<<" times."<<endl;
			
		}

	} while(toupper(message)=='Y');
	  if(toupper(message)=='N')
	  {
		cout<<"You have "<<tokens<<" tokens."<<endl;
		cout<<"Thanks for playing!"<<endl;
	  }	

   system("pause");
   return 0;
}