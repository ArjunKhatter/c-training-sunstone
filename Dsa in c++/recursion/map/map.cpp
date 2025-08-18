#include <bits/stdc++.h>
using namespace std;
int main (){
    map<int , string >mp;
    mp[119]="vikas";
    mp[200]="arjun";
    mp[300]="shivam";
    mp[400]="abhay";
    cout << mp[300]<<endl;
    for(auto i:mp){
        cout << i.first<<" = ";
        cout << i.second<<endl;

    }
    cout <<endl;
    mp[119]="patel";
    for(auto i:mp){
        cout << i.first<<" = ";
        cout << i.second<<endl;

    }int findkey= 300;
    
    if(mp.count(findkey)){
        cout <<"present";

    }
    else{
        cout <<" not present";
    }
    
    
}