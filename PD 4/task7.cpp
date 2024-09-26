#include<iostream>
// prototype
void calculator(int n1, int n2);
using namespace std;
main()
{
 // Calling the function in main
		int n1,n2;
		calculator(n1,n2 );

}
// Function that takes two inputs and a choice of operator to perform that operation
	void calculator(int n1, int n2)
	   {
		cout<<"Enter Two  Numbers"<<endl;
		cin>> n1 >> n2;
		char choice ;
		
		cout<<"Enter the choice   (*,-,+,/) ";
		cin>> choice;
		if (choice=='*')
			cout<<"Multiplication" << n1 * n2;
		if (choice=='-')
			cout<<"subtraction" << n1 - n2;
		if (choice=='+')
			cout<<"Addition" << n1 + n2;
		if (choice=='/')
			cout<<"Division" << n1 / n2;
		//else
		     //  cout<<"Invalid Entry";

		 
           }
 

