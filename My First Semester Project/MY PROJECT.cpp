#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
using namespace std;

/*
  I MADE A Mini Hospital Managment System
  Is ma ma ny yh concepts buse kea hain 
  Uses: arrays, if/else, else-if ladder, switch, while, for,  user-defined function, pointers.
  
 */
    // arrays
    const int MAXP = 100;                     // I allowed 100 maximum number of patients allowed
    int pid[MAXP], pagee[MAXP];             // p ka matlab hy patient
    string pname[MAXP], pphone[MAXP];        
    bool pactive[MAXP];                      // pactive = patient active/inactive status

    // Then i made function
    int findPatient(int id, int count) 
{     // id = patient ID to search, count = total patients
       for (int i = 0; i<count; i++) 
	   {    
        if (pactive[i] && pid[i] == id) return i;   
       }
    return -1;                           // return -1 if patient not found
}

    // function to clean input 
    void cleanInput() 
{
    cin.clear();                         // clear input error flags
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
}

    // i used pointers by call-by-reference with pointer
    void deposit(double *bal) 
{            
    double x;                            
    cout<<"Enter payment amount: ";
    cin>>x;
    if (!cin || x <= 0) { cleanInput(); cout << "Invalid amount.\n"; return; }
    *bal += x;                          
    cout<<"Payment added. Balance: " << *bal << "\n";
}

int main() {
    // init arrays
    for (int i = 0; i < MAXP; i++) pactive[i] = false;   // mark all patients inactive initially

    int pCount = 0;                     // pCount = current number of patients
    int nextId = 1001;                  // first id yh wali ho gi
    double balance;
    while (true)
	{ // I made a while loop menu to repeat this till exist
        cout<< "\n********************************"<<endl;
        cout<<"===== MINI HOSPITAL SYSTEM ====="<<endl;;
        cout<<"********************************\n";
        cout<<"1) Add Patient\n";
        cout<<"2) List Patients\n";
        cout<<"3) Appointment (Simple)\n";
        cout<<"4) Pharmacy Bill\n";
        cout<<"5) Deposit Payment (Pointer)\n";
        cout<<"6) Exit\n";
        cout<<"Choice: ";

        int ch;                          // ma ny menu choice ky lea ch uise kae hy idr 
        cin >> ch;
        if (!cin) { cleanInput(); cout << "Invalid.\n"; continue; }

        if (ch == 1) {
            if (pCount >= MAXP) { cout << "Limit reached.\n"; continue; }

            pid[pCount] = nextId++;      // ma ny patients ko id assign ki hain jo increase bi ho gi 
            pactive[pCount] = true;      //  ma ny patients ko active mark hy 

            cout<< "Enter name: ";
            cleanInput();
            getline(cin, pname[pCount]); // user  patients names add akre ga 

            cout<<"Enter age: ";
            cin>>pagee[pCount];        // ma ny ages add ki jo user de ga 
            if (!cin || pagee[pCount] < 0) { cleanInput(); cout << "Invalid age.\n"; continue; }

            cout << "Enter phone: ";
            cleanInput();
            getline(cin, pphone[pCount]); // patient number ky les 

            cout<<"Added! Patient ID = " << pid[pCount] ;
            cout <<endl;
            pCount++;                    // increase patient count
        }
        else if (ch == 2) {
            cout<< "\nID      Name                 Age   Phone\n"; // thora design dene ky lea 
            cout<< "---------------------------------------------\n";
            bool any = false;            // any = check if any patient exists
            for (int i = 0; i < pCount; i++) {
                if (!pactive[i]) continue;
                any = true;
                cout << left << setw(8) << pid[i]
                     << setw(20) << pname[i]
                     << setw(6) << pagee[i]
                     << pphone[i] << "\n";
            }
            if (!any) cout << "No patients.\n";
        }
        else if (ch == 3) {
            int id;                     
            cout<< "Enter patient ID: ";
            cin>>id;
            if (!cin) { cleanInput(); cout << "Invalid.\n"; continue; }

            int idx = findPatient(id, pCount);  
            if (idx == -1) { cout << "Patient not found.\n"; continue; }

            cout << "Select Department:\n";
            cout << "1) General  2) Cardiology  3) ENT\n";
            cout << "Choice: ";
            int d;                      // uper waly ma sy user koi department select kare ga 
            cin >> d;
            if (!cin) { cleanInput(); cout << "Invalid.\n"; continue; }

            string dept;                
            switch (d) { // switch usage
                case 1: dept = "General"; break;
                case 2: dept = "Cardiology"; break;
                case 3: dept = "ENT"; break;
                default: cout << "Wrong dept.\n"; continue;
            }

            int day, mon, year;          // day, mon, year = appointment date
            cout<<"Enter date (DD MM YYYY): ";
            cin >> day >> mon >> year;
            if (!cin) { cleanInput(); cout << "Invalid date.\n"; continue; }

            cout<<"Appointment Saved: " << pname[idx] << " | " << dept
                 << " | " << day << "/" << mon << "/" << year << "\n";
        }
        else if (ch == 4) {
               // ma ny aik pharmacy calculator add kea hy 
            const int N = 3;            
            string item[N] = {"Paracetamol", "CoughSyrup", "Bandage"}; 
            double price[N] = {50, 180, 90};                           
            int qty[N];                  

            for (int i = 0; i < N; i++) qty[i] = 0;   

            cout<<"\n--- Pharmacy ---\n";
            for (int i = 0; i < N; i++) {
                cout<<item[i] << " (PKR " << price[i] << ") Qty: ";
                cin >> qty[i];
                if (!cin || qty[i] < 0) { cleanInput(); cout << "Invalid qty.\n"; break; }
            }

            double sub = 0;              // total amount ky lea 
            for (int i = 0; i < N; i++) sub += price[i] * qty[i];

            // else-if ladder (discount)
            double discRate = 0;         // discRate = discount rate
            if (sub < 500) discRate = 0;
            else if (sub <= 2000) discRate = 0.10;
            else discRate = 0.20;

            double disc = sub * discRate;    // disc = discount amount
            double tax = (sub - disc) * 0.10;
            double total = (sub - disc) + tax; 

            cout<< "\nInvoice:\n";
            cout<< left << setw(15) << "Item" << setw(6) << "Qty" << "Line\n";
            for (int i = 0; i < N; i++) {
                if (qty[i] == 0) continue;
                cout << left << setw(15) << item[i] << setw(6) << qty[i]
                     << (price[i] * qty[i]) << "\n";
            }
            cout<< fixed << setprecision(2);
            cout<< "Subtotal: "<< sub << "\n";
            cout<< "Discount: "<< disc << "\n";
            cout<< "Tax 10%:  "<< tax << "\n";
            cout<< "Total:    "<< total << "\n";

            balance += total;            // add bill amount to hospital balance
            cout<<"Hospital Balance Updated: " <<balance << "\n";
        }
        else if (ch == 5) {
         deposit(&balance);           // call deposit function using pointer
        }
        else if (ch == 6) {
            cout<<"THANKS FOR USING THIS PROGRAM  ()MADE BY SE-03-2025 )!\n";
            return 0;
        }
        else {
            cout<<"Invalid menu option.\n";
        }
    }
}

