// Sum of First N Natural Numbers
// •	Concepts: Loops, Variables
// •	Task: Input n from the user and print the sum from 1 to n using a loop.

#include <iostream>
using namespace std;

int main()
{
    int number;
    int a = 0, i;
    cin >> number;

    for (i = 1; i <= number; i++)
    {
        a = a + i;
    }
    cout << "the sum of n natural numbrs are " << a << endl;
    return 0;
}