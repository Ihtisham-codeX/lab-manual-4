#include<iostream>
void vote(int even);
using namespace std;
main()
{
	int even;
	cout<<"Enter A Number:";
	cin>> even;
	vote(even);
}
 void vote(int  n)
{
	
	if(n%2==0)
		{
		cout<<"EVEN";
		}
	else
		cout<<"ODD";
}