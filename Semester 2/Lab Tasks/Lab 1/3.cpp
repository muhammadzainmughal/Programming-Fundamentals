#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string firstName;
    string lastName;
    int rollNumber;
    float marks;

    void displayStudentInfo()
    {
        cout << "Full Name: " << firstName << " " << lastName << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s1;                         // a normal Student variable

    Student *ptr = &s1;                 // ptr is a pointer, it stores address of s1

    // Using pointer to put values (use -> instead of .)
    ptr->firstName = "Sara";            // same as s1.firstName = "Sara"
    ptr->lastName = "Ahmed";
    ptr->rollNumber = 202;
    ptr->marks = 91.0;

    ptr->displayStudentInfo();          // calling function using pointer

    return 0;
}
