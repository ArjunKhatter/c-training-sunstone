#include <iostream>
using namespace std;
int main()
{

    int n;
    int i;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max1 = arr[0];
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        if (max1 < arr[i])
        {
            max1 = arr[i];
            index = i;
        }
    }
    arr[index] = 0;
    max1 = arr[0];    
    index = 0;
    for (int i = 0; i < n; i++)
    {
        if (max1 < arr[i])
        {
            max1 = arr[i];
            index = i;
        }
    }

    arr[index] = 0;
    max1 = arr[0];
    index = 0;
    for (int i = 0; i < n; i++)
    {
        if (max1 < arr[i])
        {
            max1 = arr[i];
            index = i;
        }
    }
    cout << max1 << " " << index;
}
