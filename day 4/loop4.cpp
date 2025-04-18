#include <iostream>
using namespace std;
int main()
{
    int a;
    int b =0;
    cin >> a;
    if (a >= 5 && a <= 100)
    {
        for (int i = 2; i <= a / 2; i++)
        {
            if (a % i == 0)
            {
                cout << "a is not a prime" << endl;
                b=1;
                break;
            }
           
        }
        if (b==0){
            cout << " a is prime"<<endl;
        }
    }
    else
    {

        cout << "invalid no.";
    }
}