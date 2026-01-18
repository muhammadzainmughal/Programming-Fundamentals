#include <iostream>
using namespace std;
int main() 
{
    int num;
    long long factorial = 1;  //factorials
    cout<<"Enter a number: ";
    cin>>num;

    if(num < 0) {
    cout<<"Factorial of negative numbers is not defined." << endl;
    } else {
    for(int i = 1; i <= num; i++) {
    factorial *= i;
    }
    cout<<"Factorial of "<<num<<" = "<<factorial << endl;
    }

    return 0;
}

