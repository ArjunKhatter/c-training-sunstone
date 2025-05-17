#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T, N;
    int a = 0;

    cin >> T;
    cin >> N;
    int arr[N];
    int i , j;

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    int M;
    cin >> M;

    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (arr[i] + arr[j] == M)
            {
                
                a = 1;
                break;
            }
        }
    }
    if (a == 1)
    {
        cin >> N;
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        int M;
        cin >> M;

        for (int i = 0; i < N; i++)
        {
            for (int j = i + 1; j < N; j++)
            {
                if (arr[i] + arr[j] == M)
                {
                    
                    break;
                }
            }
        }
    }
    a=0;
    while (a!=1){
        cout << "Deepak should buy roses whose prices are " << arr[i] << " and " << arr[j] << ".";
        a++;
    }
    if  (a==1){
        cout << "Deepak should buy roses whose prices are " << arr[i] << " and " << arr[j] << ".";

    }
}