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
    int c;
    for (int i = 0; i < N; i++)
    {
         arr2[arr[i]]=i; 

    }
    for (int i = 0; i < N; i++)
    {
        cout << arr2[i] << " ";
    }
}