#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, cnt = 0;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; ++i)
        {
            if (k > arr[i])
            {
                cnt = 0;
            }
            else
            {
                cnt += arr[i] / k;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}