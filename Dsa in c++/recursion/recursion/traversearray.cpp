#include <bits/stdc++.h>
using namespace std;
int value (int x , int n){
    if ( n == 0)
    return 1 ; 
    return x*value(x,n-1);
}
int main (){
    int arr[5] =   
    cout << value(x,n)<< endl ;
}   