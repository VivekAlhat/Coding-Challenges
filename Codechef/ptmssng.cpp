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
        ll n, a, b;
        vector<ll> pointX;
        vector<ll> pointY;
        cin >> n;
        n = (4 * n) - 1;
        for (int i = 0; i < n; ++i)
        {
            cin >> a >> b;
            pointX.push_back(a);
            pointY.push_back(b);
        }
        ll x = pointX[0];
        ll y = pointY[0];
        /* 
        We have to find elements that appear only once
        The most efficient approach is using xor, since xor of same elements if 0 
        hence, performing xor of all elements will give unique number
        */
        for (int i = 1, j = 1; i < pointX.size() && j < pointY.size(); ++i, ++j)
        {
            x = x ^ pointX.at(i);
            y = y ^ pointY.at(j);
        }
        cout << x << " " << y << endl;
    }
    return 0;
}