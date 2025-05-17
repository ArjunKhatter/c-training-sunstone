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
    for ( int i =0 ; i < n ; i ++){
        for ( int j = 0 ; j < m ; j++ ){
            if (matrix[i][j]%2==0)
            cout << matrix[i][j] << " ";
            else 
            cout << "*" << " ";
        }
        cout << endl;
    }
}