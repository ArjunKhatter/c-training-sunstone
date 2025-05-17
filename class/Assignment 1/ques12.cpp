// 12. Fibonacci Series
// •	Concepts: For Loop, Variables
// •	Task: Print the first n numbers in the Fibonacci sequence.
// o	Example: 0 1 1 2 3 5 8 ...
#include <iostream>
using namespace std;
int main()
{
    int number;
    int i = 0;
    int a = 0;
    int b = 1;
    int c;
    cin >> number;
    cout << "the fibonacci sreies are"<<endl;
    cout << a;
    cout << b;
    
    for (i = 0; i <= number; i++)
    {

        c = a + b;
        cout << c;
        cout <<" ";
        a=b;
        b=c;
    }

}