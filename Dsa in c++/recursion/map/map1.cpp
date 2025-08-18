#include <bits/stdc++.h>
using namespace std;
int main(){
    string s = "coding blocks";
    map<char,int>mp;
    for(auto i : s ){
        mp[i]=mp[i]+1;
    }
    for(auto i :mp){
        cout << i.first << " " << i.second << endl ;
    }
    int mx=0;
    int key;
    for(auto i:mp){
        if(mx<i.second){
            mx=i.second;
            key=i.first;
        }
        }
    cout << mx << " "<< key;
}