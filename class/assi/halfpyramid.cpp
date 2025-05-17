#include <iostream>
using namespace std;
int main ()
{
    int i ;
    int j;
    int N;
    cin >>N ;
    for ( i =1 ; i<=N ; i++){
        for (j=1; j <=i; j++){
            cout << j << " "; 
        }cout << endl;
    }
}