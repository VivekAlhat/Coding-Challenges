#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int ans = 1;
        int mid = n / 2;

        if (arr[mid] != 7)
        {
            ans = 0;
        }
        int l = 0;
        int r = n - 1;
        while (l < r)
        {
            if (arr[l] == arr[r])
            {
                l++;
                r--;
            }
            else
            {
                ans = 0;
                break;
            }
        }
        if (ans)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
}