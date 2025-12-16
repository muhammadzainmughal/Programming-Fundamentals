#include <iostream>
using namespace std;
int main()
{

	const double TAX_RATE=0.06;
	
	double item1=12.95;
	double item2=24.95;
	double item3=6.95;
	double item4=14.95;
	double item5=3.95;
	
	double subtotal =item1+item2+item3+item4+item5;
	double tax=subtotal*TAX_RATE;
	double total=subtotal+tax;
	cout<<"Price of Item 1: $"<<item1<<endl;
	cout<<"Price of Item 2: $"<<item2<<endl;
	cout<<"Price of Item 3: $"<<item3<<endl;
	cout<<"Price of Item 4: $"<<item4<<endl;
	cout<<"Price of Item 5: $"<<item5<<endl;
	cout<<"\nSubtotal: $"<<subtotal<<endl;
	cout<<"Sales Tax (6%): $"<<tax<<endl;
	cout<<"Total Amount: $"<<total<<endl;
	
	return 0;
}

