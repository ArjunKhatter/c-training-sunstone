#include <bits/stdc++.h>
using namespace std;
int main()
{

    int N;
    cin >> N;
    int num2 = N;
    if (1 < N < 2, 147, 483, 647)
    {
        int sum = 0;
        int num3 = 0;
        int sum2 = 0;
        int a = 0;
        int b = 0;
        while (N != 0)
        {
            for (int i = 2; i < 100; i++)
            {
                int b = 0;
                for (int j = 2; j <= i / 2; j++)
                {
                    if (i % j == 0)
                    {
                        b = 1;

                        break;
                    }
                    sum = sum + 0;
                }
                if (b == 0)
                {
                    while (N % i == 0)
                    {
                        N = N / i;
                        if (i < 10)
                            sum = sum + i;
                        else
                        {
                            int num = i;
                            while (num != 0)
                            {
                                int num4 = num % 10;
                                num = num / 10;
                                sum = sum + num4;
                            }
                        }
                    }
                }
            }

            break;
        }

        if (num2 < 10 && num2 > 1)
        {
            a = a + num2;
        }
        else
        {

            while (num2 != 0)
            {
                num3 = num2 % 10;
                num2 = num2 / 10;
                a = a + num3;
            }
        }

        if (sum == a)
            cout << 1;
        else
            cout << 0;
    }
}