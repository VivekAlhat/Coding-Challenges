#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll n, sum = 0;
    cin >> n;
    ll arr[n];
    for (ll i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    for (ll i = 0; i < n; ++i)
    {
        if (arr[i] > arr[i + 1])
        {
            sum += arr[i] - arr[i + 1];
            arr[i + 1] = (arr[i] - arr[i + 1]) + arr[i + 1];
        }
        else if (arr[i] == arr[i + 1])
        {
            continue;
        }
    }
    cout << sum << endl;
    return 0;
}