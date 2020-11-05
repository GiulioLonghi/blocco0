/*Scrivere un programma che prende due numeri interi e determina se il primo è un multiplo del secondo*/

#include <iostream>
using namespace std;

void scambia (int& a, int& b);

int main()
{
    int num1, num2;
    cout<<"Inserire due numeri inter1: "<<endl;
    cin>>num1>>num2;

    //verificare se num1 più grande di num2, se lo è scambiali
    if (num1>num2)
        scambia (num1, num2);

    
    cout<<num1;
    cout<<num2;
        
    return 0;
}

void scambia (int& a, int& b)
{
    int c;
    c=a;
    a=b;
    b=c;
}
