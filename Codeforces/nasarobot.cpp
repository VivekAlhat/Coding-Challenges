#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int x = 0, y = 0, missing = 0;
        for (int i = 0; s[i] != '\0'; ++i)
        {
            if (s[i] == 'R')
            {
                x++;
            }
            else if (s[i] == 'L')
            {
                x--;
            }
            else if (s[i] == 'U')
            {
                y++;
            }
            else if (s[i] == 'D')
            {
                y--;
            }
            else
            {
                missing++;
            }
        }
        cout << x - missing << " " << y - missing << " " << x + missing << " " << y + missing << endl;
    }
    return 0;
}