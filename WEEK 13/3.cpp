#include <iostream>
using namespace std;
int main() 
{
    int arr[5] = {10, 20, 30, 40, 50};
    int *p=arr;

    cout<<"Array elements using pointer arithmetic: ;" << endl;
    for(int i=0; i<5; i++) {
    cout<<*(p+i)<<" ";  // pointer ki value har bar next array value  show ho gi 
    }
    cout<<endl;

    return 0;
}

