#include<bits/stdc++.h>
using namespace std;
int main(){
   int a ;
   cin >> a;
   int arr[a];
   for(int i =0 ; i < a ; i ++){
    cin >> arr[i];
   } 
   priority_queue<int,vector<int>,greater<int>>mpq;
   for(int j = 0 ; j < a ; j ++){
    
    mpq.push(arr[j]);
   }
   for(int k = 0 ; k <2; k ++){
    mpq.pop();
   }
   cout << mpq.top();

}