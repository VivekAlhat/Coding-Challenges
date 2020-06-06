#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int prices[n];
        int sum_before, sum_after;
        for (int i = 0; i < n; ++i)
        {
            cin >> prices[i];
        }

        sum_before = accumulate(prices, prices + n, 0);

        for (int i = 0; i < n; ++i)
        {
            if (prices[i] > k)
            {
                prices[i] = k;
            }
        }

        sum_after = accumulate(prices, prices + n, 0);

        cout << sum_before - sum_after << endl;
    }
    return 0;
}