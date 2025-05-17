#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;

    if (N > 0 && N < 10)
    {
        for (int i = 1; i <= N; i++)
        {
            // bottom
            if (i == N)
            {
                for (int j = 1; j <= N; j++)
                {
                    cout << j << "\t";
                }
                for (int j = N - 1; j >= 1; j--)
                {
                    cout << j << "\t";
                }
            }
            else
            {
                // left
                for (int j = 1; j <= i; j++)
                {
                    cout << j << "\t";
                }
                // spaces
                for (int j = 1; j <= N + 3 - 2 * i; j++)
                {
                    cout <<  "\t";
                }
                // right
                for (int j = i; j >= 1; j--)
                {
                    cout << j << "\t";
                }

                cout << endl;
            }
        }
    }
}
