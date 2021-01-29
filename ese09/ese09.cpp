//OK
#include <iostream>
using namespace std;

int main()
{
    for (int i=49; i<=57; i++)
        cout<<"CHAR: "<<(char) i<<" ASCII: "<<i<<endl;

    for (int t=65; t<=90; t++)
        cout<<"CHAR: "<<(char) t<<" ASCII: "<<t<<endl;

    for (int z=97; z<=122; z++)
        cout<<"CHAR: "<<(char) z<<" ASCII: "<<z<<endl;
    return 0;
}

// 48-57 --> 0-9
// 65-90 --> A-Z
// 97-122 --> a-z
