#include <iostream>
using namespace std;
int main()
{
    int menu, item;
    double quantity, price = 0, totalBill = 0;
    char choice;
    do {
        cout<<"\n--- RESTAURANT MENU ---\n";
        cout<<"1. Breakfast\n";
        cout<<"2. Lunch\n";
        cout<<"3. Dinner\n";
        cout<<"Select Menu: ";
        cin>> menu;

        switch (menu) {
            case 1:                          // Breakfast
                cout<< "\nBreakfast Menu\n";
                cout<< "1. Anda Paratha (Rs.40)\n";
                cout<< "2. Nan Channy (Rs.60)\n";
                cout<< "3. Tea (Rs.15)\n";
                cin>>item;

                if (item == 1) price = 40;
                else if (item == 2) price = 60;
                else if (item == 3) price = 15;
                else { cout<<"Invalid item!\n"; continue; }
                break;

            case 2:                               // Lunch
                cout<<"\nLunch Menu\n";
                cout<<"1. Chicken Karahi (Rs.1050 per KG)\n";
                cout<<"2. Mutton Karahi (Rs.1800 per KG)\n";
                cout<<"3. Egg Fried Rice (Rs.450 per plate)\n";
                cin>> item;

                if (item == 1) price = 1050;
                else if (item == 2) price = 1800;
                else if (item == 3) price = 450;
                else {cout<<"Invalid item!\n"; continue; }
                break;

            case 3:                          // Dinner
                cout<< "\nDinner Menu\n";
                cout<< "1. Chicken Karahi (Rs.1050 per KG)\n";
                cout<< "2. BBQ (Rs.1050 per dozen)\n";
                cout<< "3. Saji (Rs.800 per KG)\n";
                cin>>item;

                if (item == 1) price = 1050;
                else if (item == 2) price = 1050;
                else if (item == 3) price = 800;
                else {cout<<"Invalid item!\n"; continue; }
                break;

            default:
                cout<<"Invalid menu choice!\n";
                continue;
        }

        cout<<"Enter quantity: ";
        cin>>quantity;
        totalBill += price * quantity;

        cout<<"Do you want to order more? (y/n): ";
        cin>>choice;

    } while (choice == 'y' || choice == 'Y');

    cout<<"\nTotal Bill = Rs. " << totalBill << endl;
    cout<<"Thank you for ordering!\n";

    return 0;
}

