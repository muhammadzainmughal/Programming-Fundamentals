#include <iostream>
using namespace std;

int main() {
    double salary;
    int yearsOfExperience;

    // Input salary and years of experience
    cout << "Enter your salary: $";
    cin >> salary;
    cout << "Enter your years of work experience: ";
    cin >> yearsOfExperience;

    // Check eligibility for loan
    if (salary >= 25000 || (salary >= 20000 && yearsOfExperience > 5)) {
        cout << "You are eligible for a loan." << endl;
    } else {
        cout << "You are not eligible for a loan." << endl;
    }

    return 0;
}
