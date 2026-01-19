#include <iostream>
using namespace std;
int main() 
{
    int n=25;      
    int *p=&n;   // pointer stores address of n

    cout<<"Value of num: "<<n<<endl;  // YH VALUE OF N DE GA JO 25 HY
    cout<<"Address of num: " << &n<<endl;  // FOR ADDRESS OF N IN MEMORY 
    cout<<"Value using pointer (dereference): "<<*p<<endl;   /// YH VALUE OF N ( *P )  DE GA JO 25 HY

    return 0;
}

