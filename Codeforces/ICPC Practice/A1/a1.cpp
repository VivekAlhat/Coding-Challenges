#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ifstream infile("sort.in");
    freopen("out.txt", "w", stdout);

    ll num, cnt = 0;
    vector<ll> nums;
    while (infile >> num)
    {
        // cout << num << " ";
        nums.push_back(num);
        cnt++;
    }
    sort(nums.begin(), nums.end());
    for (ll elem : nums)
    {
        cout << elem << " ";
    }
    return 0;
}