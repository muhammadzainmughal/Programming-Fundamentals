#include <iostream>
using namespace std;
int main() 
{
    int *ptr = NULL;   // ma ny NULL use kea kuky null ptr latest vberion ma hpota dev ma errpor aa rha 

    if(ptr == NULL) {
        cout<< "Pointer is NULL and does not point to any valid memory."<<endl;
    } 
	else {
    cout<<"Pointer holds address: "<<ptr<<endl;
    }

    return 0;
}

