#include <iostream>
using namespace std ;
int main ()
{
    int mayankdata [5];

    for (int i=0 ;i<5;i++)
    {
        int value ;
        cin >> value;
        mayankdata[i]=value;
    }
    // mayankdata[0]=10;
    // mayankdata[1]=26;
    // mayankdata[2]=90;
    // mayankdata[3]=2000;
    // mayankdata[4]=-3000;

    cout << mayankdata[0]<< " ";
    cout << mayankdata[1]<< " ";
    cout << mayankdata[2]<< " ";
    cout << mayankdata[3]<< " ";
    cout << mayankdata[4]<< " ";
}