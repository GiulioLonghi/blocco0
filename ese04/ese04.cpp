//OK
#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout<<"Digitare due numeri da tastiera"<<endl;
    cin>>num1>>num2;
    if (num1==num2)
        cout<<"These numbers are equal \n";
    else
    {
        if (num1>num2)
            cout<<num1<<" is larger \n";
        else
            cout<<num2<<" is larger \n";
    }
}
