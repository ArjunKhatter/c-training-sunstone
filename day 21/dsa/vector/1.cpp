#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {-2, -3, 0, 1, -4};
    vector<int> mayank;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < 0)
        {
            mayank.push_back(arr[i]);
        }
    }
    for (int j = 0; j < mayank.size(); j++)
    {
        cout << mayank[j] << " ";
    }
}