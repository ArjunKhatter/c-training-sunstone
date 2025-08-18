#include <bits/stdc++.h>
using namespace std;
void pj(int n){
    if (n==100)
    return;
    cout << n << endl;
    pj(n+1);
}

int main(){
    int n = 1 ;
    pj(n);
}