#include <iostream>
using namespace std;
int main()
{
    int i, j, N;
    cin >> N;
    for (i = 1; i <= N; i++)
    {
        for (j = 1; j <= N + 1 - i; j++)
        {
            cout << j << " ";
        }
        if(i>=2)

        {  
            for (j=1;j<=2*i-3;j++)
            cout << "*" << " ";

        }
        
        

        cout << endl;
    }
}