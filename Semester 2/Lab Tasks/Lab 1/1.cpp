#include <iostream>          // for cout, cin
#include <string>            // for string
using namespace std;         // so we can write cout instead of std::cout

// A structure named Student (it groups related data)
struct Student
{
    string firstName;        // student's first name
    string lastName;         // student's last name
    int rollNumber;          // student's roll number
    float marks;             // student's marks

    // Member function inside the structure
    void displayStudentInfo()
    {
        cout << "Full Name: " << firstName << " " << lastName << endl;  // print full name
        cout << "Marks: " << marks << endl;                              // print marks
    }
};

int main()
{
    Student s1;                          // making 1 variable of type Student

    s1.firstName = "Ali";               // putting value in firstName
    s1.lastName = "Khan";               // putting value in lastName
    s1.rollNumber = 101;                // putting value in rollNumber
    s1.marks = 88.5;                    // putting value in marks

    s1.displayStudentInfo();            // calling member function to show info

    return 0;                           // program ends

