#include <iostream>
#include <limits.h>
using namespace std;
int main()
{

    int i;
    float x = INT_MIN;
    int index =0;
    
    int n;
    cin >> n;
    float arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (x < arr[i]){
            x = arr[i];
            index =i;
        }
        else {

        }

    } 
    cout << x <<" "<< index  << " " ; 
}