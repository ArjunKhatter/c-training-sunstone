#include <iostream>
using namespace std;
int main()
{
    int N ;cin >> N;
    int arr[N];
    int product;
    int arr2[N];
    for ( int i =0 ; i< N ; i++){
        cin >> arr[i];

    }
    for ( int i =0 ; i< N ; i++){
        product =1;
        for ( int j =0 ; j< N ; j++){
            if (i!=j)
            product = product * arr[j];
             
       

    }
    for ( int i =0 ; i< N ; i++){
        arr2[i] = product;
        
    }
    cout << arr2[i] << " ";

    } 
}