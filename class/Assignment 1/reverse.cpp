#include <iostream>
using namespace std;
int main()
{
    int remainder;
    int a;
    cin >> a;
    while (a != 0)
    {
        remainder = a % 10;
        a = a / 10;
        cout << remainder;
    }
}