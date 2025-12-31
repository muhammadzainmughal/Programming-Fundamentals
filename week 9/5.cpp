#include <iostream>
using namespace std;
int main() 
{
    int choice;
    double balance = 1000.0;
    double amount;

    while (true) {
        cout<< "\n--- Simple Banking System ---\n";
        cout<<"1. Deposit Money\n";
        cout<<"2. Withdraw Money\n";
        cout<<"3. Check Balance\n";
        cout<<"4. Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;

        switch (choice) {
            case 1:
                cout<<"Enter amount to deposit: ";
                cin >> amount;
                if (amount > 0) {
                balance += amount;
                cout<<"Deposit successful!\n";
                } else {
                    cout << "Invalid amount!\n";
                }
                break;

            case 2:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                if (amount > 0 && amount <= balance) {
                balance -= amount;
                cout<<"Withdrawal successful!\n";
                } else {
                    cout<<"Insufficient balance or invalid amount!\n";
                }
                break;

            case 3:
            cout <<"Current Balance: $";
            break;

            case 4:
                cout<<"Thank you for using the banking system.\n";
                return 0;
                
            default:
            cout << "Invalid choice! Please try again.\n";
        }
    }
}
