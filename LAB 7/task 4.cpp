#include<iostream>
using namespace std;
int main() 
{                        // for total marks, percentage and grade
    string name;
    double math, science, english;

    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter marks for Math: ";
    cin >> math;
    cout << "Enter marks for Science: ";
    cin >> science;
    cout << "Enter marks for Engliah: ";
    cin >> english;
    
    if (math < 40 || science < 40 || english < 40) {     //agr aik bi fail ho to result ma sirf fail ho 
        cout << "Failed" << endl;
    } else {
        double total = math + science + english;
        double percentage = (total / 300) * 100;

        char mathGrade, scienceGrade, englishGrade;
        if (math >= 90) mathGrade = 'A';
        else if (math >= 80) mathGrade = 'B';
        else if (math >= 70) mathGrade = 'C';
        else if (math >= 60) mathGrade = 'D';
        else mathGrade = 'F';

        if (science >= 90) scienceGrade = 'A';
        else if (science >= 80) scienceGrade = 'B';
        else if (science >= 70) scienceGrade = 'C';
        else if (science >= 60) scienceGrade = 'D';
        else scienceGrade = 'F';

        if (english >= 90) englishGrade = 'A';
        else if (english >= 80) englishGrade = 'B';
        else if (english >= 70) englishGrade = 'C';
        else if (english >= 60) englishGrade = 'D';
        else englishGrade = 'F';

        cout << "Student Name: " << name << endl;
        cout << "Total Marks: " << total << "/300" << endl;
        cout << "Percentage: " << percentage << "%" << endl;
        cout << "Math Grade: " << mathGrade << endl;
        cout << "Science Grade: " << scienceGrade << endl;
        cout << "English Grade: " << englishGrade << endl;

        if (percentage >= 90) {
            cout << "Scholarship Eligibility: Eligible (100% scholarship)" << endl;
        } else if (percentage >= 80) {
            cout << "Scholarship Eligibility: Eligible (50% scholarship)" << endl;
        } else {
            cout << "Scholarship Eligibility: Not Eligible" << endl;
        }
    }

    return 0;
}
