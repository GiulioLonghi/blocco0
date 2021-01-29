//OK
#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cin>>num1>>num2;

    bool is_multiple = false;

    int min = (num1<num2)? num1:num2;
    int max;

    if (min==num1)
        max = num2;
    else
        max = num1;

    is_multiple = (max % min == 0)? true : false;

    if (is_multiple == true)
        cout << max << " is a multiple of " << min <<endl;
    else
        cout << max << " is not a multiple of " << min <<endl;

    return 0;
}


