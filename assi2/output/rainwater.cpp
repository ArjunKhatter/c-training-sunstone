#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int ans = 0;
    int arr[N];

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    for (int j = 1; j < N-1; j++)
    {
        int current1 = 0;
        int left = 0;
        while (left != j)
        {
            int leftmax = max(arr[left], current1);
            current1 = leftmax;
            left++;
        }
        int current = 0;
        int right = j + 1;
        while (right != N)
        {

            int rightmax = max(arr[right], current);
            current = rightmax;
            right++;
        }
        // cout << "curent 1:" << current1 << " ";

        // cout << "curent 0:" << current;

       
        int minimum = min(current1, current);
        if (arr[j] < minimum)
        {
            ans += minimum - arr[j];
        }
    }
    cout << ans ;
}
