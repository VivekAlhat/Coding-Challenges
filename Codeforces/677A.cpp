/*
    Author: Vivek Alhat
    Program: 677A Vanya and Fence
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, h, width = 0;
    cin >> n >> h;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; ++i)
    {
        if (arr[i] <= h)
        {
            width += 1;
        }

        if (arr[i] > h)
        {
            width += 2;
        }
    }

    cout << width << endl;
    return 0;
}