#include <iostream>
using namespace std;
int main() 
{
    int N,N1 = 0;
    cout<<"Enter a number: ";
    cin>>N;

    for(int i = 1; i <= N; i++) {
    N1 += i;
    }
    cout<<"Sum of first "<<N<<" natural numbers = "<<N1<<endl;

    return 0;
}

