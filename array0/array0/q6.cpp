#include <iostream>
using namespace std;
int main()
{
    int a;
    int n;
    int b=0;
    
    cin >> n;
    int arr[n];

    for (a = 0; a < n; a++){
        cin >>arr[a];
        if (arr[a]%4==0){
            b=b+1;
        }
        
        
    }
    cout << " The total no.  are "<< b<< endl;
   

}