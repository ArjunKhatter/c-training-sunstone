#include <bits/stdc++.h>
using namespace std;
int main (){
    string str = "geeksforcoding";
    vector<int>v(26,0);
    for (auto i : str){
        v[i-'a']=v[i-'a']+1;
    }
    for ( int i = 0 ; i < 26 ; i++){
        if(v[i]!=0){
            char ch = 'a'+i;
            cout << ch <<" "<<v[i]<< endl;
        }
    }

}