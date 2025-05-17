#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int num2=N;
    int num3 = 0;
    
    int a =0 ;
        while (num2 != 0){
        num3 = num2 % 10;
        num2 = num2 /10;
        a = a + num3;
        
        
    }
    cout << a;
}