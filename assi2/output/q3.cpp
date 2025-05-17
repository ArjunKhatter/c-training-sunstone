#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int arr[N];
    int sum =0;
    int arr2[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];

    }
    for (int i = 0; i < N; i++)
    {    sum =0;
        for (int j = 0; j < N; j++){
            if(arr[i]==arr[j]) {
                sum ++;
            }
            
        }
        
        
        for (int k =0 ; k < N ; k++){
            arr2[k]=sum;
             
            break;
        }
    }
   
            
    for (int i =0 ; i <N ; i++){
        if (arr2[i]>N/2){
            cout << arr[i]<< " ";      
            break;
             }
    }
            
            
    
}