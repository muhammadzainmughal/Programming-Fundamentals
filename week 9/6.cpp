#include <iostream>
#include <string>
using namespace std;
int main() 
{
    string password;
    string correctPassword = "cs1101";
    do { 
        cout<<"Enter password: ";
        cin>>password;

        if (password != correctPassword) {
            cout<<"Incorrect password! Try again.\n";
        }
    } while (password != correctPassword);
    cout<<"Access granted!\n";

    return 0;
}

