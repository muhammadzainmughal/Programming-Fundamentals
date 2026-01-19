#include <iostream>
using namespace std;
void swapNumbers(int *a, int *b) 
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main() 
{
    int x = 5, y = 9;
    cout << "Before swapping: x = "<<x<<", y = "<<y<< endl;
    swapNumbers(&x, &y);   // recalling function which i made abovce 
    cout<<"After swapping:  x = " <<x<< ", y = " <<y<<endl;

    return 0;
}

