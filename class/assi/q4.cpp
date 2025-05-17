#include <iostream>
using namespace std;
int main()
{
    int N, i, j;
    cin >> N;

    if (N > 0 && N < 100)
    {
        for (i = 0; i <= N; i++)
        {
            for (j = 0; j < i + 1; j++){
                if (j == 0 || j == i)
                { cout << i+1 << "  ";

                }
            else {
                cout << 0 << "  ";
            }} cout << endl;

        }
    } 
}
