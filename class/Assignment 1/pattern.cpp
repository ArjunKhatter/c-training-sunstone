#include <iostream>
using namespace std;

int main()
// {
//     int i, j;
//     for (i = 1; i <= 5; i++)
//     {
//         for (j = 1; j <= 5; j++)
//         {
//             if(i>=j){
//                 cout << "* ";
//             }
//             else{
//                 cout<<"$ ";
//             }
//         }
//         cout << "" << endl;
//     }
// }

{

    int i, j;
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (i+j>=4 &&  i+j<=8)
            {
                cout << "* ";
            } 
            else
            {
                cout << "$ ";
            }
        }
        cout << "" << endl;
    }
} 