#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;
    for (int i = 0; i < t; ++i)
    {
        for (int j = 0; j < n - 1; ++j)
        {
            if (s[j] == 'B' && s[j + 1] == 'G')
            {
                swap(s[j], s[j + 1]);
                ++j; // increment to next character so that swap will be done only once for that pair
            }
        }
    }
    cout << s << endl;
    return 0;
}