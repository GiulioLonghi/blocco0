//OK
#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;
    cout<<"Digitare tre numeri da tastiera"<<endl;
    cin>>num1>>num2>>num3;

    int somma=num1+num2+num3;

    cout<<"La somma dei tre numeri e': "<<somma<<endl;

    cout<<"La media dei tre numeri e': "<<somma/3<<endl;

    cout<<"Il prodotto dei tre numeri e': "<<num1*num2<<endl;

    if (num1>num2){
        if (num1>num3)
            cout << "Max = " << num1 << endl;
        else
            cout << "Max = " << num3 << endl;
        if (num2>num3)
            cout << "Min = " << num3 << endl;
        else
            cout << "Min = " << num2 << endl;

    } else {
        if (num1<num3)
            cout << "Min = " << num1 << endl;
        else
            cout << "Min = " << num3 << endl;
        if (num2>num3)
            cout << "Max = " << num2 << endl;
        else
            cout << "Max = " << num3 << endl;
    }

}


