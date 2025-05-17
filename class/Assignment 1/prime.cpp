#include <iostream>
using namespace std;
int main()
{
    int a;
    int number;
    int b;
    cin >> number;
    b=0;   
    for (a = 2; a <= number / 2; a++){
        if (number%a==0){
            cout<<"the number is not a prime " <<endl;
            b=1;
            break;
        }
    }
    if (b==0)
    cout << "the number is prime"<<endl;
}