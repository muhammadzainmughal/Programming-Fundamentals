#include <iostream>
using namespace std;
int main() 
{
    int n, 
	i = 1;

    cout<<"Enter a number N: ";
    cin>>n;

    while (i <= n) {
        cout << i << " ";
        i++;              // harr baar i ki value one time increase ho gi
    }

    return 0;
}

