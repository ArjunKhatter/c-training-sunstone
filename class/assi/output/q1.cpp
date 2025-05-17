#include <iostream>
using namespace std;
int main()
{
    int N, j,i;
    cin >> N;
    if (N < 10 && N >= 1)
    {
        for (i = 1; i <= 7; i++)
        {
            for (j = 1; j <= i; j++)
            {
                cout << j;
            }
            for (j >= i + 1; j <= 7; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
    else
    {
    }

    return 0;
}