#include <bits/stdc++.h>
using namespace std;
void permutation(int arr[],int n , int index, vector<int>&ans){
    if (index==n)
        for (int i =0;i < ans.size();i++){
            cout << ans[i]<<" ";

        }
        ans.push_back(arr[index]);
        solve(arr,n,)
}


int main(){
    int arr[3] ={1,2,3} ;
    vector<int>ans;

   permutation(arr,n,0,ans);
}