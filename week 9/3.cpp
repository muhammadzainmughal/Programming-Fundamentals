#include <iostream>
using namespace std;
int main() 
{
    int num;
    
    while (true) {
        cout<<"Enter a positive number: ";
        cin>>num;

        if (num > 0) {
            cout<<"You entered a valid positive number: "<<num<<endl;
            break;
        } else {
            cout<<"Invalid input! Please enter a positive number.\n";
        }
    }

    return 0;
}

