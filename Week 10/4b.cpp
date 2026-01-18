#include <iostream>
using namespace std;
int main() 
{
    for(int i=6; i>1; i--)  // rows ky lea 
	{
    for(int j=1; j<i; j++)  // columns ky lea 
	{
    cout<<"* ";
    }
    cout<<endl;
    }
    return 0;
}
