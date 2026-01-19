#include <iostream>   // function for factorial
using namespace std;
long long factorial(int n) 
{
    long long fact=1;
    for(int i=1; i<=n; i++)   // jab tk i user ki do gyi value sy kam ho ga factorial calculate hp ga using loop 
	{
        fact=fact*i;
    }
    return fact;    // factorial wapis lene ky lea 
}

int main() {
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    cout<<"Factorial of "<<num<<" is: "<<factorial(num)<<endl;   // factorial(num) = function recalling 
    return 0;
}

