#include<iostream>
using namespace std;
int main()
{
	double balance,withdrawl;
	cout<<"Enter your balance : ";
	cin>>balance;
	
	cout<<"Enter the amount to withdraw : ";
	cin>>withdrawl;
	
	if(withdrawl<=balance)
	{
	balance=balance-withdrawl;
	cout<<"Transaction successful" << endl;
	cout<<"Remaining balance : "<<balance<<endl;
	}
	
	else
	{
		cout<<"Insufficient balance";
	}
	return 0;	
	
}
