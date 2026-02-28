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
    int n;                                        // how many students
    cout << "Enter number of students: ";
    cin >> n;                                     // take n from user

    Student students[100];                        // array to store many students (max 100)

    for (int i = 0; i < n; i++)                   // loop for each student
    {
        cout << "\nStudent " << i + 1 << " info\n";

        cout << "First Name: ";
        cin >> students[i].firstName;             // store in array element i

        cout << "Last Name: ";
        cin >> students[i].lastName;

        cout << "Roll Number: ";
        cin >> students[i].rollNumber;

        cout << "Marks: ";
        cin >> students[i].marks;
    }

    cout << "\n--- Students Data ---\n";
    for (int i = 0; i < n; i++)
    {
        students[i].displayStudentInfo();         // show each student using function
        cout << "-------------------\n";
    }

    return 0;
}
