#include<iostream>
using namespace std;
int main() {
    string username ;
    string password ;
    string role ;
    string accessLevel;

    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    // Authentication
    if (username == "admin" && password == "password123") {
        cout << "Authentication Successful!" << endl;

        cout << "Enter user role: ";
        cin >> role;

        if (role == "Admin") {
        accessLevel = "Full Access";
        } else if (role == "Guest") {
        accessLevel = "Limited Access";
        } else {
        accessLevel = "No Access";
        }

        cout << accessLevel << endl;
    } else {
        cout << "Authentication Failed. Access Denied." << endl;
    }

    return 0;
}
