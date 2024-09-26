#include<iostream>
// prototype
void fuel(float d);
using namespace std;
main()
{
 // Calling the function in main
	float d;
	fuel(d);

}
// Function that calculate the required fuel 
	void fuel(float d )
	   {
		int f;
		cout<<"Enter the distance ";
		cin>> d;
		f=d*10;
		cout<< "Required Fuel   Is   " <<   f; 
           }
 

