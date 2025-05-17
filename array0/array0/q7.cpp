#include <iostream>
using namespace std;
int main()
{
    int i, j;
    int n;
    cin >> n;
    int array[n];
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (i = 0; i < n; i++)
    {
        int sum = 0;
        for (j = i; j < n; j++)
        {
            sum = sum + arr[j];
        }
        array[i] = sum;
        cout << array[i] ;
    }
}