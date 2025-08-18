#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 7;
    int m = 3;
    int arr[n + m];
    int left[n] = {3, 9, 11, 14, 16, 18, 20};
    int right[m] = {8, 9, 13};
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < n && j < m)
    {

        if (left[i] < right[j])
        {
            arr[k] = left[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = right[j];
            k++;
            j++;
        }
    }
    while (i < n)
    {
        arr[k] = left[i];
        k++;
        i++;
    }
    while (j < m)
    {
        arr[k] = right[j];
        k++;
        j++;
    }

     for (int x = 0; x < k; x++)
    {
        cout << arr[x] << " ";
    }
}