#include<bits/stdc++.h>
using namespace std;
int main (){
    int *nptr;
    nptr = new int[5]{1,2,3,4,5};

    for(int i = 0 ; i < 5 ; i ++){
        cout << nptr[i]<<" ";

    }

    int *ptr = NULL;
    ptr = new int (10);
    cout << "value of *p:"<< *ptr << endl;

    delete ptr;
    delete nptr;
    return 0;
}