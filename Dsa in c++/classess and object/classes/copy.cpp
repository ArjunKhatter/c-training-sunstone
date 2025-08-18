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

    student(string name , int roll){
        this->name=name;
        this->roll=roll;
        roll++;
        cout << this->roll << roll <<  endl;
    }
    };

int main()
{
    student arjun("arjun khatter",31);
}