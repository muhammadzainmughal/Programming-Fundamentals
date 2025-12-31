#include <iostream>
using namespace std;
int main() 
{
    int choice;
    float radius, length, width, base, height;
    cout << "Select Shape:\n";
    cout << "1. Circle\n2. Rectangle\n3. Triangle\n";
    cout << "Enter your choice: ";
    cin >> choice;
    
    switch (choice) {
        case 1:
            cout << "Enter radius: ";
            cin >> radius;
            cout << "Area of Circle = " << 3.14159 * radius * radius;
            break;

        case 2:
            cout << "Enter length: ";
            cin >> length;
            cout << "Enter width: ";
            cin >> width;
            cout << "Area of Rectangle = " << length * width;
            break;

        case 3:
            cout << "Enter base: ";
            cin >> base;
            cout << "Enter height: ";
            cin >> height;
            cout << "Area of Triangle = " << 0.5 * base * height;
            break;

        default:
            cout << "Invalid choice!";
    }

    return 0;
}

