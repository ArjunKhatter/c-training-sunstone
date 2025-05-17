// 11. Reverse a Number
// •	Concepts: While Loop, Modulo, Integer Division
// •	Task: Input a number and print its reverse.
// o	Example: Input: 1234 → Output: 4321

#include <iostream>
using namespace std;

int main ()
{
    int number ,remainder, i;
    cin >> number;
    cout << " the reverse no. is " ; 
        
    while(number!=0){
        remainder = number % 10; 
        number = number / 10;
        
        
        cout << remainder ;
        
    }
    
}