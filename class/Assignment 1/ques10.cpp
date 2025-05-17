// 10. Prime Number Checker
// •	Concepts: Loops, If-Else, Logical Operators
// •	Task: Input a number and check whether it is a prime number or not.

#include <iostream>
using namespace std;
int main()
{
    int number, i;
    int a = 0;
    cin >> number;

    for (i = 2; i <= number / 2; i++)
    {
        if (number % i == 0)
        {
            cout << "the number is not prime" << endl;
            a = 1;
            break;
        }
    }
    if (a == 0)
    {
        cout << "the number is prime " << endl;
    }
}