/*Scrivere un programma che si fa inserire la lunghezza del raggio e calcola il diametro, circonferenza e area.
Ci sono diversi modi nell'ottenere la costante π, tra cui scriversela a mano. Fare i calcoli direttamente
nei comandi di cout.*/

#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
using namespace std;

int main()
{
    int raggio;

    cout<<"Inserire la lunghezza del raggio della circonferenza: "<<endl;
    cin>>raggio;

    //costanti 
    //cout<<"Pi greco ="<<M_PI<<endl;
    //cout<<"Numero di Nepero = "<<M_E<<endl;
    
    //diametro circonferenza
    cout<<"Diametro = "<<raggio*2<<endl;

    //lunghezza circonferenza
    cout<<"Lunghezza circonferenza = "<<2*raggio*M_PI<<endl;

    //area circonferenza
    cout<<"Area circonferenza = "<<raggio*raggio*M_PI<<endl;

    return 0;
}


