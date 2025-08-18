#include<bits/stdc++.h>
using namespace std;
int main (){
    vector<pair<int , string >>v;
    v.push_back({32,"mayank"});
    v.push_back({41 , "arjun"});
    v.push_back({03 , "ankita"});
    v.push_back({46 , "harsh"});
    sort(v.rbegin(),v.rend());


    for(auto i : v ){
        cout << i .first << " " << i .second << endl ;
    }
        



}