#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n, missing;
    cin >> n;
    ll arr[n - 1];
    ll sum = (n * (n + 1)) / 2;
    for (int i = 0; i < n - 1; ++i)
    {
        cin >> arr[i];
    }
    for (int i : arr)
    {
        missing = sum - i;
        sum -= i;
    }
    cout << missing << endl;
    return 0;
}