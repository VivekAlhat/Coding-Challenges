#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll s, t, a, b, m, n, cntapple = 0, cntorange = 0, dist;
    cin >> s >> t >> a >> b >> m >> n;
    ll apples[m], oranges[n];
    for (ll i = 0; i < m; ++i)
    {
        cin >> apples[i];
    }

    for (ll i = 0; i < n; ++i)
    {
        cin >> oranges[i];
    }

    for (ll i = 0; i < m; ++i)
    {
        dist = apples[i] + a;
        if (dist <= t && dist >= s)
        {
            cntapple++;
        }
    }

    for (ll i = 0; i < n; ++i)
    {
        dist = oranges[i] + b;
        if (dist <= t && dist >= s)
        {
            cntorange++;
        }
    }

    cout << cntapple << "\n"
         << cntorange << endl;
    return 0;
}