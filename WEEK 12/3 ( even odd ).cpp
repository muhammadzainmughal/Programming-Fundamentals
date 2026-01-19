#include <iostream>
using namespace std;
void checkevenodd(int num)     // function i made to check even or odd 
{
    if(num%2==0)
    cout<<num<<" is Even "<<endl;
    else {
	cout<<num<<" is Odd"<<endl; }
}
int main() {
    
    checkevenodd(10);   //  caqlled function 
    checkevenodd(7);     //  called function 
    checkevenodd(25);    //  called function 
    checkevenodd(42);

    return 0;
}

