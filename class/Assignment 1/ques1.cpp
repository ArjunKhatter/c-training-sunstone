// 1. Simple Calculator
// •	Concepts: Variables, Arithmetic Operators
// •	Task: Write a program that takes two numbers and an operator (+, -, *, /) from the user and displays the result.

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    char c;

    cin >> a;
    cin >> b;
    cin >> c;

    if (c == '+')

    {
        cout << a + b << endl;
    }

    else if (c == '-')

    {
        cout << a - b << endl;
    }

     else if (c == '*')

    {
        cout << a * b << endl;
        
    } 

     else  (c == '/');

    {
        cout << a / b << endl;
    } 
}
