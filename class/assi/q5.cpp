#include <iostream>
using namespace std;
int main()
{
    int N, i, j;
    cin >> N;
    int a = 0;
    int b = 1;
    int c;
    if (N > 0 && N < 100)
    {
        for (i = 0; i < N; i++)
        {
            for (j = 0; j <= i ; j++){
                cout << a << "  ";
                c=a+b;
                a=b;
                b=c;
            } cout << endl;
        }
    }
    return 0;
}