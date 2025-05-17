#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int arr[N];
    int count0=0;
    int count1=0;

    for (int  i = 0 ;  i < N ;  i ++){
        cin >> arr[i];
    }
    for (int i = 0; i < N; i++)
    {
        if (arr[i] == 0)
            count0++;
            else 
            count1++;
    }
    
    while (count0 != 0)
    {
        cout << 0 << " ";
        count0--;
        
    }
    while (count1 != 0)
    {
        cout << 1 << " ";
        count1--;
    }
    
    return 0;
}