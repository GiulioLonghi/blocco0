/*Scrivere un programma che chiede all'utente due numeri 
e ne calcola somma, prodotto, differenza, divisionee resto*/
#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout<<"Digitare due numeri da tastiera"<<endl;
    cin>>num1>>num2;
    cout<<"La somma dei due numeri e': "<<num1+num2<<endl;
    cout<<"Il prodotto dei due numeri e': "<<num1*num2<<endl;
    cout<<"La differenza tra i due numeri e': "<<num1-num2<<endl;
    cout<<"La divisione tra i due numeri e': "<<num1/num2<<endl;
    cout<<"Il resto della divisione tra i due numeri e': "<<num1%num2<<endl;
    return 0;
}
