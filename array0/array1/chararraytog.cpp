#include <iostream>
using namespace std;
int main()
{
    int b;
    char arr[5] = {'V', 'i', 'K' , 'a', 's'};

    for (int a = 0; a < 5; a++)
    {
        cout << arr[a] << " ";
        int b = arr[a];

        if ( b > 96 ){
            b= b-32;
            char j = b;
            cout << j << " "; }
        else {
            b = b+32;
            char K = b;
            cout << K << " "; 
        }
       
    }
    
}