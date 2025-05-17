#include <iostream>
using namespace std;
int main ()
{
    int N;
    int i , j ;
    cin >> N ;
    if (N>0 && N <=1000){
        for (i=1;i<=N;i++){
            for(j=1;j<=i;j++){
                if (i%2==0){
                    if (j==1 || i==j){
                        cout << 1<< "";

                    }
                    else {
                        cout << 0 << "";

                    } 

                }
                else {
                    cout << 1 << "  ";
                }
            } cout << endl; 
        }
    }
}