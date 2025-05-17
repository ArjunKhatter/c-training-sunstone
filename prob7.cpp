#include <iostream>
using namespace std;
int main()
{
    int n = 8;
    int i;
    for (int i = 0; i < n / 2; i++)
    {
        if (i == 0)
        {

            for (int j = 0; j < n / 2; j++)
            {
                cout << " ";
            }
            for (int j = 0; j < n / 2; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
        else
        {
            for (int j = 0; j = n / 2 - i; j++)
            {
                cout << " ";
            }
            for ( int  j =0 ; j<0 ; j++){
                cout << "*";
            }
        }
    }
}