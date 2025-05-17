#include <iostream>
using namespace std;
int main ()
{
    int a;
    cin >> a;
    
    
    for (int i =0 ; i < a ; i ++)
    {   char arjun ='A';  
        for ( int j = 0 ; j <= i ; j++)
        {    
            cout << arjun ;
            arjun++;

        }
        cout << endl;
    }

}