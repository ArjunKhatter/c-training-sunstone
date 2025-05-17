#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int arr[N];
    int arr2[N];

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    int c = 0;
    for (int i = N - 2; i >= 0; i--)
    {
        if (arr[i] < arr[i + 1])
        {  
            for (int j = N -1; j >= 0; j--)
            {
                if (arr[i] < arr[j])

                    c = arr[j];
                arr[j] = arr[i];
                arr[i] = c;
                break;
            }
            for (int  i =0;i < N ; i++)
            cout << arr[N] << " ";
        }
    }
}
