#include<iostream>
using namespace std;
int main(){
    int arr[8]={1,4,3,5,9,8,1,6};
    int ans[8];
    for(int i = 0 ; i < 7 ; i++){
        for(int j = i+1 ; j < 8 ; j ++){
            if(arr[j]>arr[i]){
                ans[i]=arr[j];
                break;
            }
            else{
                ans[i] = -1;
            }
        }
        
    }
    
        ans[7]=-1;
    
    for(int i = 0 ; i < 8; i++ )
    cout << ans[i] << " ";
}