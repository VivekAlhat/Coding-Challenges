#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll n, cnt = 0;
    cin >> n;
    for (int i = 5; n / i >= 1; i *= 5)
    {
        cnt += n / i;
    }
    cout << cnt << endl;
    return 0;
}