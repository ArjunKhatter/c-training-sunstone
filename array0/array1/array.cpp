#include <iostream>
using namespace std;
int main()
{
    int i, a;
    int sum = 0;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }
    

    for (int i = 1; i <= n; i++)
    {
        sum = sum - arr[i];
        
         cout << sum << " ";
    }
   
}