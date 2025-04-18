#include <iostream>
using namespace std;

// int main()
// {
//     int sum = 0;
//     for (int i = 0; i <= 100; i++)
//     {
//         if (i % 2 != 0)
//         {
            // sum += i;                                    // THIS IS CORRECT BUT HAS MORE TIME COMPLEXITY
//         }
//     }
//     cout << sum << endl;
// }


int main()
{
    int sum = 0;
    for (int i = 1; i < 100; i= i+2)
    {
        sum= sum+i;
    }
    cout << sum << endl;
}