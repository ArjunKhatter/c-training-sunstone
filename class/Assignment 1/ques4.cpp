// 4. Check Leap Year
// •	Concepts: Logical Operators, If-Else
// •	Task: Input a year and check whether it is a leap year or not.
// o	A year is a leap year if:
// (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)

#include <iostream>

using namespace std;

int main()
{
    int year;
    cin >> year;
    // Check if the year is a leap year
    // A year is a leap year if:
    
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        cout << "leap year " << endl;
    }
    // If the year is not a leap year

    else
    {
        cout << "not a leap year" << endl;
    }
    return 0;
}
