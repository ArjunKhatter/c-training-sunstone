#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int j;
    for (int i = 1; i <= n; i++)
    {
        for ( j =1; j<=n; j++){
            cout << " ";
            
        }
        for(j=1; j<=10; j++){
            if ( i%2!=0){
            cout << "*";
            cout << " ";
            }
            else {
                cout << " ";
                cout << "*";
            }  
            }
        }
        cout<<endl;
    }
        


    cout << endl;
}
