#include<iostream>
using namespace std;
int main()
{	//To check whether number is positive, negative or zero.
	int num;
	cout << "Enter an integer: ";
	cin >> num;
	
	if(num>0)
    {
	cout << "The number is Positive";
	}	
	else if(num<0)
	{
    cout << "The number is Negative";
	}
	
	else{
    cout << "The number is zero"; //agr upper wali dono conditions puri na ho 
	}
	
	return 0;
}
