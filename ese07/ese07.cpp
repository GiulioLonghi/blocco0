/*Scrivere un programma che prende un intero e verifica se questo è pari o dispari e scrive qualcosa a
proposito.*/

#include <iostream>
using namespace std;

int main()
{
    int num;

    cout<<"Inserire un numero intero: "<<endl;
    cin>>num;

    //verificare se è divisibile per 2 --> pari
    if (num % 2 == 0)
        cout<<num<<" e' pari"<<endl;
    else 
        cout<<num<<" e' dispari"<<endl;

    return 0;
}


