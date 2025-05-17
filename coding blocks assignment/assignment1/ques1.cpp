#include <iostream>
using namespace std;
int main()
{
    int a, i, j;
    cin >> a;
    
    for (i = 1; i <= a; i++)
    {   int b=1;
        for (j = 1; j <= a; j++)
        {  
            if (i<=j){
            cout << j << " ";
            }

            else {
                cout << i << " ";
            }
            
        
        }
        cout <<endl;
    }
}