#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    int a;
    cin >> a;

        sort(arr,arr + N);
    
        for (int i = 0; i < N; i++)
        {
            for (int j = i + 1; j < N; j++)
            {
                for (int k = j + 1; k < N; k++)
                {
                    if (arr[i] + arr[j] + arr[k] == a)
                    {
                        cout << arr[i] << ',' << ' ' << arr[j] << ' ' << "and" << ' ' << arr[k] << endl;
                    }
                }
            }
        }
    }