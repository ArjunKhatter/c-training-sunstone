// 9. Count Digits of a Number
// •	Concepts: Loops, Modulo, Division
// •	Task: Take an integer and count the number of digits using a loop.
#include <iostream>
using namespace std;

int main()
{
    int number;
    int i  ;
    int x= -1 ;       // why to take x as -1
    cin>> number;
    i = number % 10;
    while (i  !=0){
        i = number % 10;
        number = number / 10 ;
        x = x + 1;
    } cout << "the total digits are " <<  x<<endl;
}