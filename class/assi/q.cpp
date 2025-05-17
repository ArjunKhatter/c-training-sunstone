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
            int z = i;
            for (int j = 1; j <= N - i; j++)
            {
                cout << "\t";
            }
            for (int j = 1; j <= i; j++)
            {
                cout << z << "\t";
                z++;
            }
           
            for (int j = 1; j <= i - 1; j++)
            {
                cout << z-2 << "\t";
                z--;
            }
            cout << endl;
        }
    }
}