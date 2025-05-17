#include <iostream>
using namespace std;
int main()
{
    int a;
    int n;
    int b=0;
    int c=0;
    cin >> n;
    int arr[n];

    for (a = 0; a < n; a++){
        cin >>arr[a];
        if (arr[a]%2==0){
            b=b+1;
        }
        else{
            c=c+1;
        }
        
    }
    cout << "The no. of even no. are "<< b<< endl;
    cout << "The no. of odd no. are "<< c;

} 