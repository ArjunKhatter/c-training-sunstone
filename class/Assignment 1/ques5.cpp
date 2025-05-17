// 5. Simple Interest Calculator
// •	Concepts: Variables, Arithmetic Operations
// •	Task: Input principal, rate, and time, then calculate and print the simple interest.

#include <iostream>
using namespace std;

int main()
{
    float principal , rate  , time ;
    cout << "enter the principal" << endl;
    cin >> principal;
    cout << "enter the rate" <<endl;
    cin >> rate ;
    cout << "enter the time" <<endl;
    cin >> time;

    cout << "The calculated simple interest is = " << principal*rate*time/100 ;
    return 0;
}