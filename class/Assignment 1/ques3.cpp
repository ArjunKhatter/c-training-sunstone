// 3. Greatest of Three Numbers
// •	Concepts: If-Else Ladder, Logical Operators
// •	Task: Take three numbers from the user and print the greatest one

#include <iostream>
using namespace std;

int main()
{
    int x, y, z;
    cin >> x;
    cin >> y;
    cin >> z;

    if (x > y && x > z)
    {
        cout << "x is greatest" << endl;
    }

    else if (y > x && y > z)
    {
        cout << "y is greatest" << endl;
    }

    else
    {
        cout << "z is greatest" << endl;
    }
    return 0;
}