#include <iostream>
using namespace std;
int main() 
{
    int n1=10;
    int *ptr=&n1;

    cout<<"Before change: "<<n1<<endl;
    *ptr=50;                    // I CHAN GHE VALUE BY PONTEr
    cout<<"After change: "<<n1<<endl;

    return 0;
}

