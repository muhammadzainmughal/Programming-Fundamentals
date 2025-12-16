#include <iostream>
#include <iomanip>
using namespace std;
int main()
{

    double num1= 85.5;
    double num2= 90.75;
    double num3= 88.25;
    double average= (num1+num2+num3)/3;
    cout<<"The average of ("<<num1<<") ("<<num2<<") and ("<<num3<<") is:"<<fixed<<setprecision(2) <<average<<endl;
    
    return 0;
}
