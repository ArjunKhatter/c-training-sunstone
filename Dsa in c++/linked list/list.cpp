#include <bits/stdc++.h>
using namespace std ;
struct student{
    int roll ;
    string name ;
    string address;

};
int main (){
    // student mayank ;
    // mayank.name= "mayank sharma";
    // mayank.roll = 95;
    // cout << mayank.name <<" "<< mayank.roll<< endl;
    // cout << mayank.address ;

    student mayank;
    student isha ;

    student *ptr;
    student *mptr;

    ptr = &isha;
    mptr =&mayank;

    cout << &isha << " " << ptr << endl;
    cout << &mayank << " "<<mptr ;
}