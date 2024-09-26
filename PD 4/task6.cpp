#include<iostream>
// prototype
void cube(int sticker);
using namespace std;
main()
{
 // Calling the function in main
		int sticker;
		cube(sticker );

}
// Function that takes the side legth and prints the no. of stickers needed
	void cube(int sticker)
	   {
		int side ;
		cout<<"Enter the side length  ";
		cin>> side;
		sticker= (side*side) * 6;
		cout<< " Number Of stickers needed are     "   <<   sticker; 
           }
 

