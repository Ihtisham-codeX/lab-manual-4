#include<iostream>
#include <string>
using namespace std;
void SundayOffer(string DayPurchase, int total);
int main()
{
	string DayPurchase;
	int total;
	cout<<"Enter The Day Of Purchase :";
	cin>> DayPurchase;
	cout<<"Enter The Total purchase amount";
	cin>> total;
	SundayOffer( DayPurchase, total);
}
 void SundayOffer(string DayPurchase , int total)
{
	float payable, discount;
	
	if( DayPurchase== "sunday")
		{
		discount=(total*10)/100;
		payable=total-discount;
		cout<<"The Payable Amount Is :" << payable; 
		
		}
	else
		cout<<"The Payable Amount Is :" << total;
}