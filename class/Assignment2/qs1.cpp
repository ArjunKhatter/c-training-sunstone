// Even-Odd Counter
// Problem: Read N numbers from the user and count how many are even and how many are odd.
#include <iostream>
using namespace std;

int main()
{
    int a;
    int n;
    int i, j = 0;
    int k = 0;
    cout << "enter total number to make input" << endl;
    cin >> n;
    cout << "enter the numbers" << endl;
    while (n != 0)
    {

        n = n - 1;
        cin >> a;
        if (a % 2 == 0)
        {

            j = j + 1;
            continue;
        }
             
        else  (a % 2 != 0);
            {
                k = k + 1;
            }
        
    }
    cout << "the total no of even no. are " << j << endl;
    cout << "the total no of odd no. are " << k << endl;
}