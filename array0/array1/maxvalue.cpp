#include <iostream>
using namespace std;
int main()
{

    int index;
    
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        
    }
    int value = arr[0];

    for (int i = 1; i < n; i++)
    {

        if (value < arr[i])
        {
            value = arr[i];
            index = i;
        }
    }
    cout << value << " " << index;
}