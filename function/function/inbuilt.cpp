#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double number;
    cin >> number;

    double squareroot = sqrt(number);
    cout << "suare root of " << number << "=" << squareroot;
    // return 0;

    int a, b;
    cin >> a >> b;
    int maximum = max(a, b);
    cout << maximum;
}