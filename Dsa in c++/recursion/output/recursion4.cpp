#include <bits/stdc++.h>
using namespace std;
void permu(string arr[3],int n, int index ,  vector<string>&ans ){
    
    if (index==n){
        for ( int i = 0 ; i < ans.size() ; i++){
        cout << arr[i]<< " ";
        }
        cout << endl;
        return;
    }
    ans.push_back(arr[index]);
    permu(arr,n,index+1,ans);

    ans.pop_back();
    permu(arr,n,index+1,ans);

}

int main (){
    string arr[3]= {"A","B","C"};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<string>ans;
    permu(arr,n,0,ans);
}               