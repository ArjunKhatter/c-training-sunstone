// 8. Factorial of a Number
// •	Concepts: Loops, Arithmetic
// •	Task: Input a number and find its factorial using a for or while loop.
#include <iostream>
using namespace std;
int main()
{
    int b=1;
    int a, c;
    int number;
    cin >> number;

    for (a = 1; a <= number; a++)
    {

        b = a * b;
    }
    cout << " the factorial of the  no is " << b << endl;
}
