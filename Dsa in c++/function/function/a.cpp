#include <iostream>
using namespace std;
 
float square (float x){
    cout << " inside suuare function " << endl;
    float ans = x*x;
    return ans;
}
void greet()
{
    cout << " thanks for account opening " << endl;
}
float area( float y ){
    cout << "The area of circle is " << endl;
    int ans = 3.14 *y *y;
    return ans;
}

int main (){
    cout << "t am main function "<< endl;
    int k = square (1.1);
    cout << k;
    k = square (1.5);
    cout << k ;
    greet();
    int y = area(3.5);
    cout << y << endl;
}