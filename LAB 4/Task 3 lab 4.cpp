#include <iostream>
using namespace std;
int main()
{
	int num1,l1;
	cout<<"Enter you account balance : $";
	cin>>num1;
	cout<<"Enter your loyality status (type 1 for loyal, 0 for not loyal) : ";
	cin>>l1;
	
	string result1= (num1<100)? "Low Balance Account": (num1<=500)? "Standard Account":"Premium Account";
	cout<<"Account Type : "<<result1<<endl;
	string result2= (num1>200 && l1==1)? "Eligible":"Not eligible";      // Greater than 100 and loyality necessary to be eligible
	cout<<"Special Offer Status : "<<result2<<endl; 
	
	return 0;
	
}
