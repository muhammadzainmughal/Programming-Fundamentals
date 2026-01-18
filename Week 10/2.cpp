#include <iostream>
using namespace std;
int main() 
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    for(int i = 1; i <= 10; i++) { // i ki value jab tk 11 sy kam ho gi tab tk multiplication ho gi 
    cout<<num<<" x "<<i<<" = "<<num*i<< endl;
    }

    return 0;
}

