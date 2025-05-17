#include <iostream>
using namespace std;
int main()
{
    int n;
    int a;
    cin >> n;
    int max = 0;
    int arr[n];

    for (a = 0; a < n; a++)
    {
        cin >> arr[a];
    }

    for (a = 0; a < n; a++)
    {
        if (arr[a] > max)
        {
            max = arr[a];
        }
        
        else
        {
            max = max;
        }
    }
    cout << max;
}