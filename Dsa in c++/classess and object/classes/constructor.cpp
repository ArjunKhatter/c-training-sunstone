#include <bits/stdc++.h>
using namespace std;
class student
{

    string name = "mayank";
    int roll = 95;

public:
    student(){
        cout << "object is created"<< endl;
    }
    
    student (int a){
        cout << a  << endl;
    }

    student (int a , int b ){
        cout << a+b<< endl;
    }
    student ( int  a, int b , int c ){
        cout << a+b+c<< endl;
    }

    void display()
    {
        cout << name << " " << roll << endl;
    }
};

int main()
{
    student mayank;
    student arjun() ;
    student shivam(2,3,4);
}