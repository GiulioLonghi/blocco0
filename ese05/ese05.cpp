/*Scrivere un programma che legge tre numeri e calcola la somma, 
la media, il prodotto, il più grande e il più piccolo..*/
#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout<<"Digitare due numeri da tastiera"<<endl;
    cin>>num1>>num2;

    int somma=num1+num2;

    cout<<"La somma dei due numeri e': "<<somma<<endl;

    cout<<"La media dei due numeri e': "<<somma/2<<endl;

    cout<<"Il prodotto dei due numeri e': "<<num1*num2<<endl;

    if (num1<num2)
        cout<<num1<<" e' il piu piccolo e "<<num2<<" il piu grande"<<endl;
    else
        cout<<num2<<" e' il piu piccolo e "<<num1<<" il piu grande"<<endl;
    return 0;
}


