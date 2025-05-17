// 13. Armstrong Number Checker (3-digit)
// •	Concepts: While Loop, Power, Modulo
// •	Task: Check if a 3-digit number is an Armstrong number.
// o	Example: 153 → 1³ + 5³ + 3³ = 153
#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    int c ;
    
   
    int sum=0; 
    cin >> a;
    int num = a;
    
    

    while (num!= 0)
    {   

        b = num % 10;
        num = num / 10;
        c = b*b*b ;
        sum = sum + c;
        
    }   
    cout << sum<< endl;
    if (sum==a){
    cout << "the number is armstrong ";
 }
    else {
        cout << "the number is not armstrong";
    }
}
