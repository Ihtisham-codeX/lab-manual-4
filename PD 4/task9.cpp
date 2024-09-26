#include<iostream>
void vote(int score);
using namespace std;
main()
{
	int score;
	cout<<"Enter Score:";
	cin>> score;
	vote(score);
}
 void vote(int score)
{
	
	if(score>50)
		{
		cout<<"PASS";
		}
	else
		cout<<"FAIL!!";
}