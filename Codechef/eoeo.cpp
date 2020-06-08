#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll ts;
        cin >> ts;
        if (ts % 2 == 1)
        {
            cout << ts / 2 << "\n";
        }
        else
        {
            while (ts & 1 == 0)
            {
                ts = ts / 2;
            }
            cout << ts / 2 << "\n";
        }
    }
    return 0;
}
