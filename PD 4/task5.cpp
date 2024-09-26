#include<iostream>
// prototype
void inches(float feet);
using namespace std;
main()
{
 // Calling the function in main
	float feet;
	inches(feet);

}
// Function that converts inches to feet
	void inches(float feet )
	   {
		float inches;
		cout<<"Enter the inches ";
		cin>> inches;
		feet= inches/12;;
		cout<< inches <<"inches in feet are"   <<   feet; 
           }
 

