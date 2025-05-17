#include <iostream>
using namespace std;
int main()
{
    int N;
    int j, i;
    cin >> N;
    int a = 1;
    if (N > 0 && N < 10)
    {
        for (i = 1; i <= N; i++)
        {
            for (j = 1; j <= i; j++)
            {
                cout << a << "   ";
                a++;
            }
            cout << endl;
        }
    }
    else
    {
    }
    return 0;
}