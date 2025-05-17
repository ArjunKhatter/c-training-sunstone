#include <iostream>
using namespace std;
int main()
{
    int a ;
    cin >> a;
    
    int digit =0;
    while (a !=0)
    {
        
        a = a / 10;
        digit = digit +1;

    }
    cout << digit;
}