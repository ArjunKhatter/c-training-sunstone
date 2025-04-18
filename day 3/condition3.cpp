#include <iostream>
using namespace std ;

    int main() {
        int a,b,c;
        cin>>a;
        cin>>b;
        cin>>c;
        if (a>b && a>c){
            cout<< "a is greatest then all other"<<endl;

        }
        else if (b>a && b>c){
            cout << "b is greater  then all " <<endl;
   
        }
        else{
            cout << " c is greatest "<< endl;
        

        }
        return 0;

    }