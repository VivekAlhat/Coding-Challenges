#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n;
    cin >> n;
    vector<ll> nums;
    for (ll i = 0; i < n; ++i)
    {
        ll elem;
        cin >> elem;
        nums.push_back(elem);
    }
    sort(nums.begin(), nums.end());
    ll arr[n];
    adjacent_difference(nums.begin(), nums.end(), arr);
    int min = *min_element(arr + 1, arr + n);
    // cout << min << endl;
    for (int i = 1; i < nums.size(); ++i)
    {
        if (arr[i] == min)
        {
            cout << nums.at(i - 1) << " " << nums.at(i) << " ";
        }
    }
    cout << endl;
    return 0;
}