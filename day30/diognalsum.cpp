#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n , m ;
    cin >>n >> m ;
    int matrix[n][m];
    for ( int i =0 ; i < n ; i ++){
        for ( int j = 0 ; j < m ; j++ ){
            cin >>matrix[i][j];
        }
    }
    int sum=0;
    for ( int i =0 ; i <n ; i ++){
        for ( int j = i ; j <= i  ; j++ ){
           sum = sum + matrix[i][j] ;
           
        }
    }
    cout << sum << " ";
    cout << endl;
    int sum2=0;
    for ( int i =0 ; i <n ; i++){
        for ( int j = n-1-i ; j >= n-1-i  ; j-- ){
           sum2 = sum2 + matrix[i][j] ;
           
        }
    }
    cout << sum2 << " ";

    cout << endl;
    cout << sum +sum2;
}