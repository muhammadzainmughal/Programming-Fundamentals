#include <iostream>   
using namespace std;
void displayMenu() 
{   // Function to display menu
    cout<<"\n------ Restaurant Menu ------\n";  // i justr used for designing     
    cout<<"1. Burger        - $5\n";
    cout<<"2. Pizza         - $8\n";
    cout<<"3. Sandwich      - $4\n";
    cout<<"4. Pasta         - $7\n";
    cout<<"5. Coffee        - $3\n";
    cout<<"0. Exit\n";
    cout<< "------------------------------\n";
}
double calculateItemCost(double price, int quantity) // 2nd Function to calculate final bill with tax/service charge 
{
    return price*quantity;
}
double calculateFinalBill(double total)   // function 3
{
    double tax=total*0.10;   // 10% tax/service charge
    return total+tax;
}

int main() {
    int choice, quantity;
    double price = 0.0;
    double totalBill = 0.0;

    do {
    displayMenu();
    cout<<"Enter your choice: ";
    cin>>choice;

    if(choice==0)
    break;
    cout<<"Enter quantity: ";
    cin>>quantity;

    switch(choice) 
	{
        case 1:
            price=5;
            break;
        case 2:
            price=8;
            break;
        case 3:
            price=4;
            break;
        case 4:
            price=7;
            break;
        case 5:
            price=3;
            break;
        default:
            cout<<"Invalid choice!;"<<endl;
            continue;
        }

        totalBill+=calculateItemCost(price, quantity); // i recalled 
        cout<<"Item added to bill.\n";

    }while(true);

    double finalAmount=calculateFinalBill(totalBill);   // racealled 

    cout<<"\n------ Final Bill ------\n";
    cout<<"Total (Before Tax): $" <<totalBill<<endl;
    cout<<"Service Charge (10%): $" <<totalBill*0.10<<endl;
    cout<<"Total Amount to Pay: $" <<finalAmount<<endl;
    cout<<"Thank you for your order!\n";

    return 0;
}

