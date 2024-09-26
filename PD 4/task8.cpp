#include<iostream>
void vote(int age);
using namespace std;
main()
{
	int age;
	cout<<"Enter Age:";
	cin>> age;
	vote(age);
}
 void vote(int age)
{
	
	if(age>=18)
		{
		cout<<"You Are Eligible For The Vote:";
		}
	else
		cout<<"You Are Not Eligible For The Vote:";
}