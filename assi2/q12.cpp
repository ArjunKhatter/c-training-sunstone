#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int arr[N];
    int a=1;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    
    int b = N-1;
    int c;
    while (a<b)
    {
        
            c = arr[a];
            arr[a] = arr[b];
            arr[b] = c;
            a++;
            b--;
        

    }
    for (int j = 0; j < N; j++){
        cout << arr[j]<< " ";
    }
}