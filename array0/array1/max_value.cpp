#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
    int x;
    int i;
    x = INT_MIN;
    int index =0;
    
    int n;
    cin >> n;
    int arr[n];
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
    
    arr[index]=INT_MIN  ;
    x = INT_MIN;
    index =0;
    
    
    

    for (int i = 0; i < n; i++)
    {
        if (x < arr[i]){
            x = arr[i];
            index =i;
        }
        else {

        }

    }
    cout << x << " " << index;
}