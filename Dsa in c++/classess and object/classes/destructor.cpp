#include<bits/stdc++.h>
using namespace std;
class Demo {
    public:
    string name = "vikas patel";

    Demo(){
        cout << "constructor called";

    }
    ~Demo(){
        cout << " destructor called ";
    }
};
int main(){
    Demo ankita;
    cout << ankita.name << endl;
    int a = 90;
    cout << a << endl;
    Demo *shivam = new Demo();
    delete shivam;

    int x =90;
    cout << x << endl;
}