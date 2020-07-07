#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n;
    string s;
    cin >> s;
    cin >> k;
    for (int i = 0; i < n; ++i)
    {
        if (isalpha(s[i]))
        {
            if (islower(s[i]))
            {
                cout << char(int(s[i] + k - 97) % 26 + 97);
            }
            else
            {
                cout << char(int(s[i] + k - 65) % 26 + 65);
            }
        }
        else
        {
            cout << s[i];
        }
    }
    cout << endl;
    return 0;
}