// 2. Odd or Even Checker
// •	Concepts: If-Else, Modulo Operator
// •	Task: Ask the user for a number and print whether it's odd or even.

#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;

    if (a % 2 == 0)
    {
        cout << "the number is even " << endl;
    }
    else
    {
        cout << "the number  is odd " << endl;
    }
    return 0;
}