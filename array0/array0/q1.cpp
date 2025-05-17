#include <iostream>
using namespace std;
int main()

{
    int n ,i;
    cin >> n;
    int arr [n];
    

    for (i=0;i<n;i++){
        cin >> arr[i];


        if (i%2==0){
        cout << 0  << " ";
        }
        else {
            cout<< 1<< " ";
        }
    }
}