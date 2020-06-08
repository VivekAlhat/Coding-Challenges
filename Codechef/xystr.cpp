#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        string s;
        cin >> s;
        int cnt = 0;

        for (int i = 0; i < s.size(); ++i)
        {
            if ((s[i] == 'x' && s[i + 1] == 'y') || (s[i] == 'y' && s[i + 1] == 'x'))
            {
                cnt++;
                i++; //if a pair is found increment to the next student so that a student can be counted only once
            }
        }
        cout << cnt << endl;
        // cout << s[s.size() - 1] << endl; Noooooooob Mistake :|
    }
    return 0;
}