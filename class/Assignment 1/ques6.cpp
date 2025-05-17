// •	Concepts: Loops
// •	Task: Ask the user for a number and print its multiplication table up to 10.

#include <iostream>
using namespace std;

int main()
{
    int number;
    int a = 1;
    
    cin >> number;

    for (a = 1; a <= 10; a++)
    {
        cout << number << "x" << a << "=" << number * a << endl;
    }
}