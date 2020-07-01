#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, cnt = 0;
        cin >> n;
        if (n <= 2 && n > 0)
        {
            cout << 1 << endl;
        }
        else
        {
            for (int i = 1; i <= n; i += 2)
            {
                cnt++;
            }
            cout << cnt << endl;
        }
    }
    return 0;
}