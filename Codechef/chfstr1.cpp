#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, cnt = 0;
        cin >> n;
        vector<ll> vec;
        for (ll i = 0; i < n; ++i)
        {
            ll elem;
            cin >> elem;
            vec.push_back(elem);
        }

        for (ll i = 1; i < vec.size(); ++i)
        {
            cnt += abs(vec.at(i - 1) - vec.at(i)) - 1;
        }

        if (cnt < 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << cnt << endl;
        }
    }
    return 0;
}