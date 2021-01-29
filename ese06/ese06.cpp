//OK
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


