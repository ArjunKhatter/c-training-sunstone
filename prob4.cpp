#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int b=0;
    for (int i = 2; i <= a / 2; i++)
    {
        if (a%i==0){
            cout << " the no is not a prime no.";
            b=1;
            break;
            
        }
        
    }
    if (b==0){
        cout << " the no. is prime";
    }
   

}