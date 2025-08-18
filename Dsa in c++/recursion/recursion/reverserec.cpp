#include <bits/stdc++.h>
using namespace std;
int sol (int n ){
    if ( n == 0)
    return  ; 
    int a  = n % 10;
    n=n/10;
    return n*10 + a;
}
int main (){
    int n  = 546;
    cout << sol(n)<< endl ;
} 