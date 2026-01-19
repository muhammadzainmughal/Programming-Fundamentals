#include <iostream>
using namespace std;
int main() {
    int n1 = 100;
    void *vptr;        
    vptr = &n1;       

    cout<<"Value of integer using void pointer: " << *(static_cast<int*>(vptr))<<endl;

    return 0;
}

