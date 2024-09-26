#include<iostream>
// prototype
void add(int n1, int n2);
using namespace std;
main()
{
 // Calling the function in main
	int n1,n2;
	add(n1,n2);

}
// Function that adds two numbers
	void add(int n1, int n2)
	   {
		int sum1;
		cout<<"Enter 2 Numbers";
		cin>> n1 >> n2;
		sum1=n1+n2;
		cout<< "Sum of  "<< n1 << " And" << n2 << "   Is   " <<   sum1; 
           }
 

